//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNError : NSObject
{
}

+ (void)VNAssertClass:(Class)arg1 needsToOverrideMethod:(SEL)arg2;
+ (void)VNAssert:(_Bool)arg1 log:(id)arg2;
+ (void)logInternalError:(id)arg1;
+ (id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForCVReturnCode:(int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned int)arg4 localizedDescription:(id)arg5;
+ (id)errorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForVImageError:(long long)arg1 localizedDescription:(id)arg2;
+ (id)errorForFailedEspressoPlan:(void *)arg1 localizedDescription:(id)arg2;
+ (id)errorForEspressoErrorInfo:(CDStruct_3553761d)arg1 localizedDescription:(id)arg2;
+ (id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForUnavailableSession;
+ (id)errorForUnsupportedComputeDeviceWithLocalizedDescription:(id)arg1;
+ (id)errorForUnsupportedComputeDevice:(id)arg1;
+ (id)errorForUnsupportedComputeStage:(id)arg1;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)arg1;
+ (id)errorForUnsupportedRequestSpecifier:(id)arg1;
+ (id)errorForUnsupportedRequestClassName:(id)arg1;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequest:(id)arg2;
+ (id)errorForUnsupportedConfigurationOfRequest:(id)arg1;
+ (id)errorForUnsupportedProcessingDevice:(id)arg1;
+ (id)errorForGPURequiredByRequest:(id)arg1;
+ (id)errorForUnknownErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForOperationFailedErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidArgument:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidArgumentWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidOptionWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2 localizedDescription:(id)arg3;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2;
+ (id)errorForMissingOptionNamed:(id)arg1;
+ (id)errorForInvalidOperationForRequestSpecifier:(id)arg1;
+ (id)errorForInvalidOperationForRequestClass:(Class)arg1 revision:(unsigned long long)arg2;
+ (id)errorForInvalidOperationWithLocalizedDescription:(id)arg1;
+ (id)errorForOutOfBoundsErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForUnimplementedMethod:(SEL)arg1 ofObject:(id)arg2;
+ (id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1;
+ (id)errorForUnsupportedSerializingHeaderVersion:(unsigned int)arg1;
+ (id)errorForInvalidFormatErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForExecutionTimeoutWithLocalizedDescription:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidImageFailureWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidImageFailure;
+ (id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)arg1;
+ (id)errorForMemoryAllocationFailure;
+ (id)errorForCancellationOfRequest:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;

@end

