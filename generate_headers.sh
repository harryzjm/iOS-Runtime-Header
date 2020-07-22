#!/bin/zsh

XCODE_BASE_PATH=$(xcode-select -p)/Platforms
VERSION=$(/usr/libexec/PlistBuddy -c "Print CFBundleVersion" "${XCODE_BASE_PATH}/iPhoneOS.platform/version.plist")
OUTPUT_PATH=iOS_${VERSION//./_}

clean() {
	rm -fr ${OUTPUT_PATH}

	mkdir -p ${OUTPUT_PATH}/Frameworks
	mkdir -p ${OUTPUT_PATH}/PrivateFrameworks
	mkdir -p ${OUTPUT_PATH}/usr/lib
	mkdir -p ${OUTPUT_PATH}/Developer/Frameworks
	mkdir -p ${OUTPUT_PATH}/Developer/PrivateFrameworks
	mkdir -p ${OUTPUT_PATH}/AccessibilityBundles
}

visitFrameworkOrApp() {
	FRAMEWORK="$1"
	BASEPATH="$2"
	
	if [[ -f "$FRAMEWORK" ]]; then
		FRAMEWORK_BASENAME="${${$(basename "$FRAMEWORK")%.*}##lib}"
	else
		FRAMEWORK_BASENAME="$(basename "$FRAMEWORK")"
	fi
		
	echo -e "\033[1;34mProcessing $FRAMEWORK\033[0m"
	./classdumpc -H -o "$BASEPATH/$FRAMEWORK_BASENAME" "$FRAMEWORK"
		
	if [[ -d "$FRAMEWORK/Frameworks" ]]; then
		for INNER_FRAMEWORK in "${FRAMEWORK}"/Frameworks/* ; do
			visitFrameworkOrApp "$INNER_FRAMEWORK" "$BASEPATH/$FRAMEWORK_BASENAME"/Frameworks
		done		
	fi
}

generateiOS() {
	RUNTIMEROOT_BASE_PATH="${XCODE_BASE_PATH}/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot"

	for FRAMEWORK in ${RUNTIMEROOT_BASE_PATH}/System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" ${OUTPUT_PATH}/Frameworks/
	done

	for FRAMEWORK in ${RUNTIMEROOT_BASE_PATH}/System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" ${OUTPUT_PATH}/PrivateFrameworks/
	done

	for FRAMEWORK in ${RUNTIMEROOT_BASE_PATH}/System/Library/AccessibilityBundles/*.axbundle ; do
		visitFrameworkOrApp "$FRAMEWORK" ${OUTPUT_PATH}/AccessibilityBundles
	done
	
	for FRAMEWORK in ${RUNTIMEROOT_BASE_PATH}/usr/lib/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" ${OUTPUT_PATH}/usr/lib/
	done
	
	for FRAMEWORK in ${RUNTIMEROOT_BASE_PATH}/usr/lib/system/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" ${OUTPUT_PATH}/usr/lib/
	done

	SIMULATOR_LIBRARY_PATH="${XCODE_BASE_PATH}/iPhoneSimulator.platform/Developer/Library"
	for FRAMEWORK in ${SIMULATOR_LIBRARY_PATH}/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" ${OUTPUT_PATH}/Developer/Frameworks
	done
  
	for FRAMEWORK in ${SIMULATOR_LIBRARY_PATH}/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" ${OUTPUT_PATH}/Developer/PrivateFrameworks
	done
}

clean
generateiOS