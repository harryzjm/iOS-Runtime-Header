//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNSLocationMonitorObserver-Protocol.h>

@class NSMutableArray, NSString, PCPersistentTimer, UNSLocationMonitor, UNSNotificationRepository, UNSNotificationScheduleRepository, UNSPendingNotificationRepository;
@protocol OS_dispatch_queue;

@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver>
{
    NSString *_bundleIdentifier;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    NSMutableArray *_lazy_pendingNotificationsAwaitingDelivery;
    UNSLocationMonitor *_locationMonitor;
    PCPersistentTimer *_localNotificationTimer;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _monitoringLocaleAndTimeChanges;
    _Bool _userNotificationsEnabled;
    _Bool _allowsUnlimitedLocalNotifications;
}

- (void).cxx_destruct;
- (void)_setMonitoredRegions:(id)arg1;
- (void)_updateRegionMonitorsForPendingNotificationRecords:(id)arg1;
- (void)_invalidatePendingNotificationRecordRegionMonitors;
- (void)_queue_triggerDidFireForRegion:(id)arg1;
- (void)locationMonitor:(id)arg1 triggerDidFireForRegion:(id)arg2 forBundleIdentifier:(id)arg3;
- (void)_updateTimersForPendingNotificationRecords:(id)arg1;
- (void)_invalidatePendingNotificationRecordTimers;
- (void)_setLastLocalNotificationFireDate:(id)arg1;
- (id)_lastLocalNotificationFireDate;
- (void)_queue_triggerDidFireForDate:(id)arg1;
- (void)_queue_triggerDidFireForTimer:(id)arg1;
- (void)_invalidateNotificationRecordTimersAndRegionMonitors;
- (void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)arg1;
- (_Bool)_canScheduledLocalNotificationTimers;
- (void)_fireNotification:(id)arg1;
- (id)_sanitizeNotificationRecords:(id)arg1;
- (id)_pendingNotificationRecords;
- (void)_setPendingNotificationRecords:(id)arg1;
- (void)_setRequestDateForPendingNotificationRecords:(id)arg1;
- (void)setUserNotificationsEnabled:(_Bool)arg1;
- (void)handleSignificantTimeChange;
- (void)handleLocaleChange;
- (void)handleApplicationStateRestore;
- (void)invalidate;
- (id)undeliveredNotificationRecords;
- (id)pendingNotificationRecords;
- (void)removeAllPendingNotificationRecords;
- (void)removePendingNotificationRecords:(id)arg1;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)arg1;
- (void)setPendingNotificationRecords:(id)arg1;
- (void)addPendingNotificationRecords:(id)arg1;
- (void)dealloc;
- (id)initWithNotificationRepository:(id)arg1 pendingNotificationRepository:(id)arg2 notificationScheduleRepository:(id)arg3 locationMonitor:(id)arg4 bundleIdentifier:(id)arg5 allowsUnlimitedLocalNotifications:(_Bool)arg6 userNotificationsEnabled:(_Bool)arg7 queue:(id)arg8;
- (id)_dateFormatter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

