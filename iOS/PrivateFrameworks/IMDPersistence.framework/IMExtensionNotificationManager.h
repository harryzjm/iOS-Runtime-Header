//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMExtensionNotificationManager : NSObject
{
    NSMutableArray *_notificationsContext;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *notificationsContext; // @synthesize notificationsContext=_notificationsContext;
- (_Bool)shouldRetractedMessageForBalloonBundleID:(id)arg1;
- (_Bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;
- (id)notificationCategories;
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3 chatIdentifier:(id)arg4 isUrgentMessageTrigger:(_Bool *)arg5 shouldSuppressNotification:(_Bool *)arg6;
- (id)init;

@end

