//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <UserNotificationsServer/UNSDefaultDataProviderFactoryObserver-Protocol.h>
#import <UserNotificationsServer/UNSNotificationRepositoryDelegate-Protocol.h>
#import <UserNotificationsServer/UNSRemoteNotificationServerObserver-Protocol.h>

@class BKSApplicationStateMonitor, FBSSystemService, NSString, UNSApplicationLauncher, UNSApplicationService, UNSAttachmentsService, UNSDefaultDataProviderFactory, UNSLocationMonitor, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSNotificationSettingsService, UNSPendingNotificationRepository, UNSRemoteNotificationServer, UNSUserNotificationServerConnectionListener;

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver>
{
    UNSApplicationLauncher *_applicationLauncher;
    UNSApplicationService *_applicationService;
    UNSDefaultDataProviderFactory *_dataProviderFactory;
    UNSUserNotificationServerConnectionListener *_userNotificationServerConnectionListener;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSNotificationRepository *_notificationRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    UNSRemoteNotificationServer *_remoteNotificationService;
    UNSAttachmentsService *_attachmentsService;
    UNSLocationMonitor *_locationMonitor;
    FBSSystemService *_systemService;
    BKSApplicationStateMonitor *_applicationStateMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_triggerLocationArrowForBundleIdentifier:(id)arg1;
- (void)_registerLoggers;
- (void)_timeDidChangeSignificantly;
- (void)_ensureAttachmentsIntegrity;
- (void)_addObserverForSignificantTimeChanges;
- (void)_addObserverForRemoteNotificationServiceChanges;
- (void)_addObserverForDataProviderFactoryChanges;
- (void)_addObserverForApplicationWorkspaceChanges;
- (void)_addObserverForApplicationStateRestore;
- (void)_addObserverForApplicationStateMonitor;
- (void)_backgroundRefreshApplicationsDidChange;
- (void)_applicationStateDidRestore;
- (void)_addObserverForBackgroundRefreshApplicationChanges;
- (void)_localeDidChange;
- (void)_addObserverForLocaleChanges;
- (void)_migrateNotificationCategories;
- (void)_migratePendingNotificationRequests;
- (void)_migrateNotificationRepository;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)_applicationsDidInstall:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

