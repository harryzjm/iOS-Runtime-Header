//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable, WLKPlaybackSummary;

@interface VUIAppDocumentUpdateEventMonitor : NSObject
{
    WLKPlaybackSummary *_pendingPlayActivity;
    _Bool _playbackIsActive;
    int _playbackReportToken;
    NSMapTable *_observerMapTable;
    NSDate *_lastProcesssedPlayActivity;
    NSDate *_lastAppDidBecomeActive;
}

+ (_Bool)_isAppRefreshEventType:(id)arg1;
+ (id)sharedMonitor;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *lastAppDidBecomeActive; // @synthesize lastAppDidBecomeActive=_lastAppDidBecomeActive;
@property(retain, nonatomic) NSDate *lastProcesssedPlayActivity; // @synthesize lastProcesssedPlayActivity=_lastProcesssedPlayActivity;
@property(nonatomic) int playbackReportToken; // @synthesize playbackReportToken=_playbackReportToken;
@property(retain, nonatomic) NSMapTable *observerMapTable; // @synthesize observerMapTable=_observerMapTable;
- (void)_handleTVSubscriptionEntitlementsChanged:(id)arg1;
- (void)_postPurchaseNotification:(id)arg1 error:(id)arg2;
- (void)_postSubscriptionNotification:(id)arg1 interruptedOfferDetails:(id)arg2 error:(id)arg3;
- (void)_notifyObserversOfEvent:(id)arg1;
- (void)_notifyObserver:(id)arg1 ofRefreshEvent:(id)arg2;
- (void)_handleIAMMessageDidReceiveNotification:(id)arg1;
- (void)_handlePurchaseRequestSucceededNotification:(id)arg1;
- (void)_handleLocationDidChangeNotification:(id)arg1;
- (void)_handleLocationAuthorizationDidChangeNotification:(id)arg1;
- (void)_handleClearPlayHistoryNotification:(id)arg1;
- (void)_handlePreferredVideoFormatDidChangeNotification:(id)arg1;
- (void)_handleRestrictionsDidChangeNotification:(id)arg1;
- (void)_handleAccountDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingDidEndNotification:(id)arg1;
- (void)_handleNowPlayingWillStartNotification:(id)arg1;
- (void)_handlePlaybackReportNotification:(id)arg1;
- (void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleFavoritesRequestDidFinishNotification:(id)arg1;
- (void)_handlePlayHistoryUpdatedNotification:(id)arg1;
- (void)_handleUpNextRequestDidFinishNotification:(id)arg1;
- (void)_handleUTSKDidChangeNotification:(id)arg1;
- (void)_handleEntitlementsDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionDidChangeNotification:(id)arg1;
- (void)_handlePurchaseFlowDidFinishNotification:(id)arg1;
- (void)_handleAppLibraryDidChangeNotification:(id)arg1;
- (void)_handleSettingsDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)_handleAppDidBecomeActive:(id)arg1;
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forEventDescriptors:(id)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
