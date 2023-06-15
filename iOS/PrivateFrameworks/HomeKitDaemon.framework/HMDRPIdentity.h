//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFKey;

__attribute__((visibility("hidden")))
@interface HMDRPIdentity : HMFObject
{
    HMFKey *_deviceIRK;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) HMFKey *deviceIRK; // @synthesize deviceIRK=_deviceIRK;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)logIdentifier;
- (_Bool)isEqualToRPIndentity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)shortDescription;
- (id)initWithDeviceIRK:(id)arg1;
- (id)init;

@end

