//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeartHealthDaemon/HDDataObserver-Protocol.h>
#import <HeartHealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>
#import <HeartHealthDaemon/UNUserNotificationCenterDelegate-Protocol.h>

@class HDKeyValueDomain, HDProfile, HKFeatureStatusManager, HRAtrialFibrillationAnalyticsCollector, NSMutableArray, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface HRAtrialFibrillationNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, UNUserNotificationCenterDelegate>
{
    HDProfile *_profile;
    HKFeatureStatusManager *_statusManager;
    NSObject<OS_dispatch_queue> *_queue;
    UNUserNotificationCenter *_userNotificationCenter;
    NSMutableArray *_fakingNotificationTokens;
    HDKeyValueDomain *_syncedKeyValueDomain;
    HDKeyValueDomain *_localKeyValueDomain;
    HRAtrialFibrillationAnalyticsCollector *_analyticsCollector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HRAtrialFibrillationAnalyticsCollector *analyticsCollector; // @synthesize analyticsCollector=_analyticsCollector;
@property(readonly, nonatomic) HDKeyValueDomain *localKeyValueDomain; // @synthesize localKeyValueDomain=_localKeyValueDomain;
@property(readonly, nonatomic) HDKeyValueDomain *syncedKeyValueDomain; // @synthesize syncedKeyValueDomain=_syncedKeyValueDomain;
- (void)_unsubscribeToFakingNotifications;
- (void)_subscribeToFakingNotifications;
- (id)_queue_fakeHeartbeatSeriesSampleFromDate:(id)arg1;
- (void)_queue_fakeHeartbeatSeriesSamplesForEvent:(id)arg1;
- (void)_queue_fakeNotificationWithData:(_Bool)arg1;
- (void)_queue_setAtrialFibrillationDetectionDisabledNotificationShownDate:(id)arg1;
- (void)_presentAtrialFibrillationDetectionReEnabledAlert;
- (void)presentAtrialFibrillationDetectionReEnabledAlertIfNeeded;
- (void)_presentAtrialFibrillationDetectionAlertWithRescindedStatus:(long long)arg1;
- (void)presentAtrialFibrillationDetectionRescindedAlertIfNeeded;
- (_Bool)_allowAtrialFibrillationDisableOrReEnableRemotelyAlertWithFeatureStatus:(id)arg1;
- (_Bool)_isPairedSyncCompleted;
- (long long)_atrialFibrillationDetectionRescindedStatusForFeatureStatus:(id)arg1;
- (void)_presentNotificationWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 alertLevel:(long long)arg6 responseHandler:(CDUnknownBlockType)arg7;
- (void)notifyUserThatAntimonyIsUnavailableForWatchOSVersionIfNeeded;
- (void)notifyUserThatAntimonyIsUnavailableForiOSVersionIfNeeded;
- (_Bool)isWatchSoftwareVersionTooOld;
- (_Bool)_queue_isWatchSoftwareVersionTooOld;
- (_Bool)isCompanionSoftwareVersionTooOld;
- (_Bool)_queue_isCompanionSoftwareVersionTooOld;
- (void)_addNotificationRequestForWatchSoftwareVersionIsTooOld;
- (void)_addNotificationRequestForCompanionSoftwareVersionIsTooOld;
- (void)_queue_addNotificationRequestForAtrialFibrillationEvent:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 featureStatusManager:(id)arg2;
- (id)initWithProfile:(id)arg1 availabilityManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
