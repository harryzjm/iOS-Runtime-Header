//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSPushParsableFollowUp : NSObject
{
}

+ (id)_createNotificationFromFollowUpItem:(id)arg1;
+ (id)_createFollowUpItemFromNotification:(id)arg1;
+ (id)_createFollowUpItemFromPayload:(id)arg1;
+ (_Bool)_shouldClearFollowUpFromPayload:(id)arg1;
+ (_Bool)_shouldAllowFollowUp:(id)arg1 bag:(id)arg2;
+ (void)_performPostWithPayload:(id)arg1 bag:(id)arg2;
+ (void)_performClearWithPayload:(id)arg1;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 bag:(id)arg3;
+ (_Bool)shouldSkipAccountCheck;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (id)sharedISO8601DateFormatter;
+ (_Bool)isDeviceOfferNotification:(id)arg1;
+ (void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

