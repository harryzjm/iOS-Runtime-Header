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
	ARCH="$2"
	BASEPATH="$3"
	
	if [[ -f "$FRAMEWORK" ]]; then
		FRAMEWORK_BASENAME="${${$(basename "$FRAMEWORK")%.*}##lib}"
	else
		FRAMEWORK_BASENAME="$(basename "$FRAMEWORK")"
	fi
		
	echo -e "\033[1;34mProcessing $FRAMEWORK\033[0m"
	./class-dump --arch "$ARCH" -H -o "$BASEPATH/$FRAMEWORK_BASENAME" "$FRAMEWORK"
		
	if [[ -d "$FRAMEWORK/Frameworks" ]]; then
		for INNER_FRAMEWORK in "${FRAMEWORK}"/Frameworks/* ; do
			visitFrameworkOrApp "$INNER_FRAMEWORK" "$ARCH" "$BASEPATH/$FRAMEWORK_BASENAME"/Frameworks
		done		
	fi
}

generateiOS() {
	for FRAMEWORK in ${XCODE_BASE_PATH}/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 ${OUTPUT_PATH}/Frameworks/
	done

	for FRAMEWORK in ${XCODE_BASE_PATH}/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 ${OUTPUT_PATH}/PrivateFrameworks/
	done
	
	for FRAMEWORK in ${XCODE_BASE_PATH}/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 ${OUTPUT_PATH}/usr/lib/
	done
	
	for FRAMEWORK in ${XCODE_BASE_PATH}/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/usr/lib/system/*.dylib ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 ${OUTPUT_PATH}/usr/lib/
	done
  
	for FRAMEWORK in ${XCODE_BASE_PATH}/iPhoneSimulator.platform/Developer/Library/Frameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 ${OUTPUT_PATH}/Developer/Frameworks
	done
  
	for FRAMEWORK in ${XCODE_BASE_PATH}/iPhoneSimulator.platform/Developer/Library/PrivateFrameworks/*.framework ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 ${OUTPUT_PATH}/Developer/PrivateFrameworks
	done
  
	for FRAMEWORK in ${XCODE_BASE_PATH}/iPhoneOS.platform/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/*.axbundle ; do
		visitFrameworkOrApp "$FRAMEWORK" x86_64 ${OUTPUT_PATH}/AccessibilityBundles
	done
}

clean
generateiOS