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

+ (void)logInternalError:(id)arg1;
+ (id)errorForOSStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForCVReturnCode:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForEspressoReturnStatus:(int)arg1 localizedDescription:(id)arg2;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequestClass:(Class)arg2;
+ (id)errorForUnsupportedRevision:(unsigned long long)arg1 ofRequest:(id)arg2;
+ (id)errorForUnsupportedConfigurationOfRequest:(id)arg1;
+ (id)errorForUnsupportedProcessingDevice:(id)arg1;
+ (id)errorForGPURequiredByRequest:(id)arg1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)arg1;
+ (id)errorForInvalidArgument:(id)arg1 named:(id)arg2;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2 localizedDescription:(id)arg3;
+ (id)errorForInvalidOption:(id)arg1 named:(id)arg2;
+ (id)errorForMissingOptionNamed:(id)arg1;
+ (id)errorForInvalidOperationWithLocalizedDescription:(id)arg1;
+ (id)errorForUnimplementedFunctionWithLocalizedDescription:(id)arg1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForMemoryAllocationFailure;
+ (id)errorForCancellationOfRequest:(id)arg1;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
+ (id)errorWithCode:(long long)arg1 message:(id)arg2;

@end

