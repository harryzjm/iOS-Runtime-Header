//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMDCustomPluginNotificationContext : NSObject
{
}

- (id)notificationCategories;
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3;
- (_Bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

