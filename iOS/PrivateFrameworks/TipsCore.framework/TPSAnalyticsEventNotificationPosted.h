//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface TPSAnalyticsEventNotificationPosted
{
    NSNumber *_posted;
    NSNumber *_remaining;
    _Bool _landingPage;
    NSString *_contentID;
    NSString *_collectionID;
    NSString *_errorCode;
}

+ (id)eventWithContentID:(id)arg1 collectionID:(id)arg2 remainingNotificationsCount:(id)arg3 errorCode:(id)arg4;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
@property(retain, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(readonly, nonatomic) _Bool landingPage; // @synthesize landingPage=_landingPage;
- (void)persistKeys;
- (id)mutableAnalyticsEventRepresentation;
@property(readonly, nonatomic) NSNumber *notificationsPosted;
- (id)eventName;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithContentID:(id)arg1 collectionID:(id)arg2 remainingNotificationsCount:(id)arg3 errorCode:(id)arg4;
- (id)initWithCoder:(id)arg1;

@end
