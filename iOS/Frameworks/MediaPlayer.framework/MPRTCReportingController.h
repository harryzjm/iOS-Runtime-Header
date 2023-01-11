//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/ICEnvironmentMonitorObserver-Protocol.h>

@class MPAVController, MPAVItem, MPQueueFeeder, MPRTCReportingSessionSummaryEvent, NSMutableDictionary, NSNumber, NSString;

@interface MPRTCReportingController : NSObject <ICEnvironmentMonitorObserver>
{
    long long _currentInterfaceType;
    MPAVItem *_currentItem;
    _Bool _isReloadingWithPlaybackContext;
    MPQueueFeeder *_pendingFailureQueueFeeder;
    NSNumber *_tracklistStartUptime;
    MPRTCReportingSessionSummaryEvent *_tracklistSummaryEvent;
    NSMutableDictionary *_uniqueIdentifierToReportingSession;
    NSMutableDictionary *_uniqueIdentifierToSummaryEvent;
    int _clientType;
    NSString *_clientName;
    long long _clientVersion;
    MPAVController *_player;
}

+ (id)newHierarchyTokenFromParentToken:(id)arg1;
+ (long long)defaultClientVersion;
@property(readonly, nonatomic) __weak MPAVController *player; // @synthesize player=_player;
@property(readonly, nonatomic) long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (id)_uniqueIdentifierForAVItem:(id)arg1;
- (void)_setPerceivedTotalStartupTimeForItem:(id)arg1 withSummaryEvent:(id)arg2;
- (id)_reportingSessionForAVItem:(id)arg1;
- (id)_preparedSummaryEventForAVItem:(id)arg1;
- (id)_newReportingSession;
- (_Bool)_isAVItemReadyForReportingSessionSetupCompletion:(id)arg1;
- (_Bool)_isAVItemReadyForReportingSessionInitialization:(id)arg1;
- (void)_handleDeallocationForUniqueIdentifier:(id)arg1;
- (void)_configureStartupStateForSummaryEvent:(id)arg1 withItem:(id)arg2;
- (void)_initializeReportingSession:(id)arg1 forAVItem:(id)arg2;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2 fallbackQueueFeeder:(id)arg3;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2;
- (void)_configureBaseEventPropertiesForEvent:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_avItemTypeDidChangeNotification:(id)arg1;
- (void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)arg1;
- (void)_avItemAssetLoadedNotification:(id)arg1;
- (void)_avControllerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avControllerItemWillChangeNotification:(id)arg1;
- (void)_avControllerPlaylistManagerFailedToQueueNotification:(id)arg1;
- (void)_avControllerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avControllerBufferingStateDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 clientName:(id)arg2 clientType:(int)arg3 clientVersion:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

