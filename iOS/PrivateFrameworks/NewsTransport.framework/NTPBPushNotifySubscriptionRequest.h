//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, NTPBDeviceInfo;

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying>
{
    NTPBDeviceInfo *_deviceInfo;
    NSMutableArray *_notificationEntitys;
    NSString *_notificationUserId;
    NSString *_userStorefrontId;
}

+ (Class)notificationEntityType;
@property(retain, nonatomic) NSString *userStorefrontId; // @synthesize userStorefrontId=_userStorefrontId;
@property(retain, nonatomic) NSMutableArray *notificationEntitys; // @synthesize notificationEntitys=_notificationEntitys;
@property(retain, nonatomic) NTPBDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) NSString *notificationUserId; // @synthesize notificationUserId=_notificationUserId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasUserStorefrontId;
- (id)notificationEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationEntitysCount;
- (void)addNotificationEntity:(id)arg1;
- (void)clearNotificationEntitys;
@property(readonly, nonatomic) _Bool hasDeviceInfo;
@property(readonly, nonatomic) _Bool hasNotificationUserId;

@end

