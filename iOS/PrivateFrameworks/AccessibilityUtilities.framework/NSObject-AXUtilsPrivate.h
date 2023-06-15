//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (AXUtilsPrivate)
+ (void)_accessibilityPerformValidations:(id)arg1;
- (_Bool)_accessibilityInterposesAsOnboardingApp;
- (_Bool)_accessibilityInterposesAsSystemApplication;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 possibleExpectedTypeEncodings:(const char *)arg3;
- (id)_safeValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 expectedTypeEncoding:(const char *)arg3;
- (void)handleFailoversForClassNamed:(id)arg1;
- (void)_accessibilityPerformSafeValueKeyBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2 onClass:(Class)arg3;
- (long long)safeIntegerForIvarKey:(id)arg1 onClass:(Class)arg2;
- (id)safeValueForKeyPath:(id)arg1;
- (id)__axValueForKey:(id)arg1;
- (id)safeValueForKey:(id)arg1;
- (id)safeUIViewForKey:(id)arg1;
- (id)safeDictionaryForKey:(id)arg1;
- (id)safeSetForKey:(id)arg1;
- (id)safeArrayForKey:(id)arg1;
- (id)safeStringForKey:(id)arg1;
- (struct CGRect)safeCGRectForKey:(id)arg1;
- (struct CGSize)safeCGSizeForKey:(id)arg1;
- (struct CGPoint)safeCGPointForKey:(id)arg1;
- (double)safeCGFloatForKey:(id)arg1;
- (struct _NSRange)safeRangeForKey:(id)arg1;
- (double)safeTimeIntervalForKey:(id)arg1;
- (double)safeDoubleForKey:(id)arg1;
- (float)safeFloatForKey:(id)arg1;
- (unsigned long long)safeUnsignedIntegerForKey:(id)arg1;
- (long long)safeIntegerForKey:(id)arg1;
- (unsigned int)safeUnsignedIntForKey:(id)arg1;
- (int)safeIntForKey:(id)arg1;
- (_Bool)safeBoolForKey:(id)arg1;
- (void *)safeIvarForKey:(id)arg1;
- (void)_accessibilitySetSpeakThisTemporarilyDisabled:(_Bool)arg1;
- (_Bool)_accessibilityIsSpeakThisTemporarilyDisabled;
- (void)_accessibilitySetAssignedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilityRemoveValueForKey:(id)arg1;
- (void)_accessibilitySetUnsignedIntegerValue:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_accessibilitySetIntegerValue:(long long)arg1 forKey:(id)arg2;
- (void)_accessibilitySetBoolValue:(_Bool)arg1 forKey:(id)arg2;
- (void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2;
- (void)_accessibilitySetValue:(id)arg1 forKey:(id)arg2 storageMode:(long long)arg3;
- (unsigned long long)_accessibilityUnsignedIntegerValueForKey:(id)arg1;
- (long long)_accessibilityIntegerValueForKey:(id)arg1;
- (_Bool)_accessibilityBoolValueForKey:(id)arg1;
- (id)_accessibilityValueForKey:(id)arg1;
- (id)_axDictionaryQueue;
- (id)axTrampolineForClass:(Class)arg1;
- (id)axSuperTrampoline;
@property(nonatomic, setter=_axSetIsWrappedPointer:) _Bool _axIsWrappedPointer;
- (id)ax_prettyDescription;
- (void)_ax_appendPrettyDescriptionToString:(id)arg1 indentationString:(id)arg2 visitedCollections:(id)arg3;
@end

