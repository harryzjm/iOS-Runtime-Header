//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryInvitation : HMFObject
{
    NSUUID *_identifier;
    HMDAccessory *_accessory;
    long long _state;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3;

@end

