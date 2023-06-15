//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDMediaProfile, HMMediaSystemRole, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaSystemComponent : HMFObject
{
    struct os_unfair_lock_s _lock;
    HMMediaSystemRole *_role;
    NSUUID *_uuid;
    HMDAccessory *_accessory;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
+ (id)accessoryForMediaSystemComponentWithDictionary:(id)arg1 home:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRole:(id)arg1;
@property(readonly, nonatomic) HMMediaSystemRole *role; // @synthesize role=_role;
@property(readonly, nonatomic) __weak HMDMediaProfile *mediaProfile;
- (id)serialize;
- (id)dumpState;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)privateDescription;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 role:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

