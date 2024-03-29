//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraAccessModeBulletinNotificationRegistration
{
    NSUUID *_accessoryUUID;
}

+ (_Bool)supportsSecureCoding;
+ (id)type;
- (void).cxx_destruct;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 conditions:(id)arg2;

@end

