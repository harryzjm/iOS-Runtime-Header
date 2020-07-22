//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsKit/NCNotificationRequest.h>

@class BBBulletin, BBObserver;

@interface NCNotificationRequest (Bulletin)
+ (id)_notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(_Bool)arg5 hasPlayLightsAndSirens:(_Bool)arg6;
+ (id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(_Bool)arg5;
+ (id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4;
- (_Bool)hasSameContactAsNotificationRequest:(id)arg1;
@property(readonly, nonatomic) BBObserver *observer;
@property(readonly, nonatomic) BBBulletin *bulletin;
@end
