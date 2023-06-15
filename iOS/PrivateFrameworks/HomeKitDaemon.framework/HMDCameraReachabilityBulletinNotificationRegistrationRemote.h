//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBulletinNotificationRegistrationSource, HMDCameraReachabilityBulletinNotificationRegistration;

__attribute__((visibility("hidden")))
@interface HMDCameraReachabilityBulletinNotificationRegistrationRemote : HMFObject
{
    HMDCameraReachabilityBulletinNotificationRegistration *_registration;
    HMDBulletinNotificationRegistrationSource *_source;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) HMDBulletinNotificationRegistrationSource *source; // @synthesize source=_source;
@property(readonly, copy) HMDCameraReachabilityBulletinNotificationRegistration *registration; // @synthesize registration=_registration;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCameraReachabilityBulletinNotificationRegistration:(id)arg1 source:(id)arg2;

@end

