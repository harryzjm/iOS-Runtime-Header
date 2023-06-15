//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, NSArray, NSObject, NSString;
@protocol HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSiriMultiUserNewLanguageNotificationManagerContext : HMFObject
{
    _Bool _cachedHasCurrentUserSeenNotification;
    id <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> _delegate;
    HMDUser *_user;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
+ (id)userReadableLanguageFromCode:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDUser *user; // @synthesize user=_user;
@property _Bool cachedHasCurrentUserSeenNotification; // @synthesize cachedHasCurrentUserSeenNotification=_cachedHasCurrentUserSeenNotification;
@property __weak id <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submitLogEventForShownNotificationWithLanguage:(id)arg1;
- (void)showNotificationForNewlySupportedLanguage:(id)arg1;
- (id)siriLanguageForMediaAccessory:(id)arg1;
- (id)siriLanguagesRequiringNotificationForVersion:(id)arg1;
@property(readonly) NSString *currentDeviceSiriLanguage;
@property(readonly, getter=isRMVEnabledForCurrentUser) _Bool RMVEnabledForCurrentUser;
- (void)setCurrentUserHasSeenNotification;
@property(readonly) _Bool hasCurrentUserSeenNotification;
@property(readonly) NSArray *mediaAccessories;
- (void)handleMediaAccessorySoftwareVersionUpdated:(id)arg1;
- (void)configure;
- (id)initWithUser:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

