//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNValidationUtilities : NSObject
{
}

+ (_Bool)getOptionalExplicitProcessingDevice:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;
+ (id)requiredProcessingDeviceInOptions:(id)arg1 error:(id *)arg2;
+ (_Bool)getOptionalOriginatingRequestSpecifier:(id *)arg1 forKey:(id)arg2 inOptions:(id)arg3 specifyingSupportedRevisionsForRequestClass:(Class)arg4 error:(id *)arg5;
+ (id)originatingRequestSpecifierForKey:(id)arg1 inOptions:(id)arg2 specifyingSupportedRevisionsForRequestClass:(Class)arg3 error:(id *)arg4;
+ (id)originatingRequestSpecifierInOptions:(id)arg1 specifyingSupportedRevisionsForRequestClass:(Class)arg2 error:(id *)arg3;
+ (id)originatingRequestSpecifierForKey:(id)arg1 inOptions:(id)arg2 error:(id *)arg3;
+ (id)originatingRequestSpecifierInOptions:(id)arg1 error:(id *)arg2;
+ (id)requiredSessionInOptions:(id)arg1 error:(id *)arg2;
+ (id)requiredDetectedObjectObservationInOptions:(id)arg1 withOptionName:(id)arg2 forObservationClass:(Class)arg3 error:(id *)arg4;
+ (id)faceObservationsInOptions:(id)arg1 withOptionName:(id)arg2 error:(id *)arg3;
+ (id)requiredFaceObservationInOptions:(id)arg1 withOptionName:(id)arg2 error:(id *)arg3;
+ (id)requiredArrayForKey:(id)arg1 inOptions:(id)arg2 withElementsOfClass:(Class)arg3 error:(id *)arg4;
+ (_Bool)getOptionalArray:(id *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id *)arg5;
+ (_Bool)getArray:(id *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 requiredMinimumCount:(unsigned long long)arg5 allowedMaximumCount:(unsigned long long)arg6 error:(id *)arg7;
+ (_Bool)getMTLGPUPriority:(unsigned long long *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(unsigned long long)arg4 error:(id *)arg5;
+ (_Bool)getOSTypeValue:(unsigned int *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(unsigned int)arg4 error:(id *)arg5;
+ (_Bool)getOSTypeValue:(unsigned int *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getPercentageValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id *)arg5;
+ (_Bool)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id *)arg5;
+ (_Bool)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 minimumValue:(float)arg4 maximumValue:(float)arg5 error:(id *)arg6;
+ (_Bool)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id *)arg5;
+ (_Bool)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getIntValue:(int *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(int)arg4 error:(id *)arg5;
+ (_Bool)getIntValue:(int *)arg1 forKey:(id)arg2 inOptions:(id)arg3 minimumValue:(int)arg4 maximumValue:(int)arg5 error:(id *)arg6;
+ (_Bool)getIntValue:(int *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getNSUIntegerValue:(unsigned long long *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(unsigned long long)arg4 error:(id *)arg5;
+ (_Bool)getNSIntegerValue:(long long *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(long long)arg4 error:(id *)arg5;
+ (_Bool)getNSUIntegerValue:(unsigned long long *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getBOOLValue:(_Bool *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(_Bool)arg4 error:(id *)arg5;
+ (_Bool)getBOOLValue:(_Bool *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (id)requiredObjectOfClass:(Class)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (_Bool)getOptionalObject:(id *)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id *)arg5;
+ (_Bool)validateAsyncStatusResults:(id)arg1 error:(id *)arg2;
+ (_Bool)validateAsyncStatusResult:(id)arg1 error:(id *)arg2;
+ (_Bool)validateAsyncStatusState:(id)arg1 error:(id *)arg2;
+ (_Bool)validateScoreRange:(float)arg1 error:(id *)arg2;
+ (_Bool)validateVNConfidenceRange:(float)arg1 error:(id *)arg2;
+ (_Bool)validateRequiredClusterIDs:(id)arg1 error:(id *)arg2;
+ (_Bool)validateOptionalDetectedObjectObservations:(id)arg1 forObservationClass:(Class)arg2 forRequest:(id)arg3 error:(id *)arg4;
+ (_Bool)validateOptionalDetectedObjectObservations:(id)arg1 forObservationClass:(Class)arg2 error:(id *)arg3;
+ (_Bool)validateRequiredDetectedObjectObservations:(id)arg1 forObservationClass:(Class)arg2 forRequest:(id)arg3 error:(id *)arg4;
+ (_Bool)validateRequiredDetectedObjectObservations:(id)arg1 forObservationClass:(Class)arg2 error:(id *)arg3;
+ (_Bool)validateOptionalFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id *)arg3;
+ (_Bool)validateOptionalFaceObservations:(id)arg1 error:(id *)arg2;
+ (_Bool)validateRequiredFaceObservations:(id)arg1 forRequest:(id)arg2 error:(id *)arg3;
+ (_Bool)validateRequiredFaceObservations:(id)arg1 error:(id *)arg2;
+ (_Bool)_validateDetectedObjectObservations:(id)arg1 forObservationClass:(Class)arg2 withMinimumCount:(unsigned long long)arg3 forOptionalRequest:(id)arg4 error:(id *)arg5;
+ (_Bool)_validateFaceObservations:(id)arg1 withMinimumCount:(unsigned long long)arg2 forOptionalRequest:(id)arg3 error:(id *)arg4;
+ (_Bool)validateClassArray:(id)arg1 named:(id)arg2 hasElementsAncestoredFromClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id *)arg6;
+ (_Bool)validateArray:(id)arg1 named:(id)arg2 hasElementsOfClass:(Class)arg3 requiredMinimumCount:(unsigned long long)arg4 allowedMaximumCount:(unsigned long long)arg5 error:(id *)arg6;
+ (_Bool)validateNonZeroImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 componentNameProvidingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;

@end

