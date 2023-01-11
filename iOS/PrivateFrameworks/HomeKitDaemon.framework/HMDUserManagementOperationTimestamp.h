//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDevice, NSDate, NSNumber;

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding>
{
    HMDDevice *_device;
    NSDate *_timestamp;
    NSNumber *_state;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSNumber *state; // @synthesize state=_state;
@property(readonly) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)attributeDescriptions;
- (id)shortDescription;
- (id)initWithDevice:(id)arg1 state:(unsigned long long)arg2;

@end
