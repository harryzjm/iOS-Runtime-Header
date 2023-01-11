//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/NSXPCListenerDelegate-Protocol.h>
#import <UserNotificationsServer/UNUserNotificationServerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, NSXPCListener, UNSApplicationLauncher, UNSAttachmentsService, UNSLocalizationService, UNSLocationMonitor, UNSNotificationAuthorizationService, UNSNotificationCategoryRepository, UNSNotificationRepository, UNSNotificationSchedulingService, UNSNotificationSettingsService, UNSNotificationTopicRepository, UNSRemoteNotificationServer, UNSUserNotificationServerRemoteNotificationConnectionListener;
@protocol OS_dispatch_queue;

@interface UNSUserNotificationServerConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationServerProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableDictionary *_connectionsByBundleIdentifier;
    NSMapTable *_bundleIdentifiersByConnection;
    UNSApplicationLauncher *_applicationLauncher;
    UNSLocalizationService *_localizationService;
    UNSNotificationCategoryRepository *_categoryRepository;
    UNSNotificationSchedulingService *_notificationSchedulingService;
    UNSNotificationAuthorizationService *_notificationsAuthorizationService;
    UNSNotificationSettingsService *_notificationSettingsService;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationTopicRepository *_topicRepository;
    UNSUserNotificationServerRemoteNotificationConnectionListener *_remoteNotificationConnectionListener;
    UNSRemoteNotificationServer *_remoteNotificationService;
    UNSAttachmentsService *_attachmentsService;
    UNSLocationMonitor *_locationMonitor;
}

- (void).cxx_destruct;
- (void)_queue_didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_delegateConnectionForBundleIdentifier:(id)arg1;
- (id)_queue_observerConnectionsForBundleIdentifier:(id)arg1;
- (void)_queue_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (void)_queue_removeConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_addConnection:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)_queue_notificationRequestsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_queue_notificationsForNotificationRecords:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_removeConnectionForAllBundleIdentifiers:(id)arg1;
- (id)_currentConnection;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getClearedInfoForDataProviderMigrationWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationTopicsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setNotificationTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeString:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeNumber:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getBadgeNumberForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDeliveredNotificationsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeSimilarNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPendingNotificationRequestsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setNotificationRequests:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)_saveNotificationRecord:(id)arg1 shouldRepost:(_Bool)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_saveNotificationRequest:(id)arg1 shouldRepost:(_Bool)arg2 forBundleIdentifier:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 replacementContent:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addNotificationRequest:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setNotificationCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)getNotificationCategoriesForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)getNotificationSettingsForBundleIdentifier:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestRemoveAuthorizationForBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setObservingUserNotifications:(_Bool)arg1 forBundleIdentifier:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)resume;
- (void)dealloc;
- (id)initWithCategoryRepository:(id)arg1 notificationSchedulingService:(id)arg2 notificationAuthorizationService:(id)arg3 notificationSettingsService:(id)arg4 notificationRepository:(id)arg5 remoteNotificationConnectionListener:(id)arg6 remoteNotificationService:(id)arg7 applicationLauncher:(id)arg8 attachmentsService:(id)arg9 locationMonitor:(id)arg10 topicRepository:(id)arg11 localizationService:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
