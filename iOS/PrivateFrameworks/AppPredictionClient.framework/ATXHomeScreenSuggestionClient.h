//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXHomeScreenSuggestionXPCInterface-Protocol.h>
#import <AppPredictionClient/ATXWidgetDwellTrackerDelegate-Protocol.h>
#import <AppPredictionClient/NSXPCListenerDelegate-Protocol.h>

@class ATXActionPredictionClient, ATXBiomeUIStream, ATXEngagementRecordManager, ATXHomeScreenConfigCache, ATXUICacheManager, ATXWidgetDwellTracker, NSArray, NSMutableDictionary, NSString, NSUserDefaults, NSXPCListener, _PASQueueLock;
@protocol ATXPETEventTracker2Protocol, OS_dispatch_queue;

@interface ATXHomeScreenSuggestionClient : NSObject <NSXPCListenerDelegate, ATXHomeScreenSuggestionXPCInterface, ATXWidgetDwellTrackerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_xpcListener;
    _PASQueueLock *_lock;
    double _postInteractionRotationSuppressionInterval;
    double _postInteractionRotationSuppressionLeeway;
    ATXUICacheManager *_uiCacheManager;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    ATXEngagementRecordManager *_engagementRecordManager;
    ATXWidgetDwellTracker *_widgetDwellTracker;
    ATXBiomeUIStream *_biomeUIStream;
    ATXActionPredictionClient *_actionPredictionClient;
    NSUserDefaults *_atxDefaults;
    id <ATXPETEventTracker2Protocol> _tracker;
    NSArray *_currentConfigurations;
    NSMutableDictionary *_widgetUniqueIdToCachedWidgetData;
    _Bool _hasAppPanelOnHomeScreen;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_runAsyncOnQueueWhenUnlocked:(CDUnknownBlockType)arg1;
- (void)_syncPASQueueLockForTests;
- (void)_setHasAppPanelOnHomeScreen:(_Bool)arg1;
- (void)_setCurrentAppPredictionPanelLayouts:(id)arg1;
- (void)_setCurrentSuggestionWidgetLayouts:(id)arg1;
- (void)_setBiomeUIStream:(id)arg1;
- (void)_setStore:(id)arg1;
- (_Bool)_widgetIdentifierIsSuggestionsWidget:(id)arg1 guardedData:(id)arg2;
- (id)_eventWithDate:(id)arg1 eventTypeString:(id)arg2 stackIdentifier:(id)arg3 stackKind:(unsigned long long)arg4 stackLocation:(unsigned long long)arg5 reason:(id)arg6 widget:(id)arg7 blendingCacheIdentifier:(id)arg8;
- (void)_refreshBlendingLayer;
- (id)_replaceSuggestionWithId:(id)arg1 fromSuggestionsArray:(id)arg2 suggestionLayoutType:(long long)arg3 usedFallbackIndexSet:(id)arg4 shouldSuggestionsBeDisjoint:(_Bool)arg5 guardedData:(id)arg6;
- (void)_replaceSuggestionWithId:(id)arg1 shouldSuggestionsBeDisjoint:(_Bool)arg2 guardedData:(id)arg3;
- (void)_logCaptureRateDiversionIfAppPredictionPanelExistsWithTappedWidgetUniqueId:(id)arg1 guardedData:(id)arg2;
- (void)_logCaptureRateForAppPredictionPanelWithEngagedSuggestion:(id)arg1 isSuggestionsWidget:(_Bool)arg2 widgetIdentifier:(id)arg3;
- (id)_newSuggestionLayoutForOldLayout:(id)arg1 replacedSuggestionId:(id)arg2 shouldSuggestionsBeDisjoint:(_Bool)arg3 usedFallbackIndexSet:(id)arg4 guardedData:(id)arg5;
- (id)_proactiveSuggestionWithId:(id)arg1 fromLayoutOfWidgetWithId:(id)arg2 guardedData:(id)arg3;
- (void)_toggleSiriSearchSettingsOffForAppSuggestion:(id)arg1;
- (void)_replaceSuggestionForAllProactiveWidgets:(id)arg1 guardedData:(id)arg2;
- (void)_handleProactiveWidgetEvent:(int)arg1 suggestionIdentifier:(id)arg2 widgetIdentifier:(id)arg3;
- (void)_logProactiveWidgetEvent:(int)arg1 suggestionIdentifiers:(id)arg2 engagedSuggestion:(id)arg3 widget:(id)arg4 blendingCacheId:(id)arg5 date:(id)arg6;
- (void)_populateStackKindAndLocation:(id)arg1;
- (id)_stackIdentifierGivenWidgetUniqueId:(id)arg1;
- (unsigned long long)_stackLocationGivenWidgetUniqueId:(id)arg1;
- (unsigned long long)_stackKindGivenWidgetUniqueId:(id)arg1;
- (id)_stackIdentifierGivenWidgetUniqueId:(id)arg1 widgetIdToWidgetDataDictionary:(id)arg2;
- (unsigned long long)_stackLocationGivenWidgetUniqueId:(id)arg1 widgetIdToWidgetDataDictionary:(id)arg2;
- (unsigned long long)_stackKindGivenWidgetUniqueId:(id)arg1 widgetIdToWidgetDataDictionary:(id)arg2;
- (void)_updateCurrentConfigurationsAndLogDiff;
- (void)_performCoalescedHomeScreenAndTodayConfigurationDiff;
- (void)logContextMenuNeverShowAgainForSuggestion:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3;
- (void)logContextMenuDismissOnceForSuggestion:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3;
- (id)_homeScreenPredictionWithBlendingCacheId:(id)arg1;
- (void)logDidTapSuggestion:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3;
- (void)logWidgetUnoccluded:(id)arg1 blendingCacheId:(id)arg2;
- (void)logWidgetOccluded:(id)arg1 blendingCacheId:(id)arg2;
- (void)logSuggestionsDidDisappear:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3;
- (void)logSuggestionsDidAppear:(id)arg1 widget:(id)arg2 blendingCacheId:(id)arg3;
- (void)logWidgetDidDisappear:(id)arg1 blendingCacheId:(id)arg2;
- (void)logWidgetDidAppear:(id)arg1 blendingCacheId:(id)arg2;
- (void)logDeviceUnlock;
- (void)logDeviceLock;
- (void)logUserDidDeleteStack:(id)arg1 stackKind:(unsigned long long)arg2 stackLocation:(unsigned long long)arg3;
- (void)logUserDidCreateStack:(id)arg1 isSuggestion:(_Bool)arg2;
- (void)logUserDidDeleteWidgetOnStack:(id)arg1 stackIdentifier:(id)arg2 stackKind:(unsigned long long)arg3 stackLocation:(unsigned long long)arg4;
- (void)logUserDidAddWidgetToStack:(id)arg1 stackIdentifier:(id)arg2 isSuggestion:(_Bool)arg3;
- (void)logUserDidDeletePinnedWidget:(id)arg1 stackLocation:(unsigned long long)arg2;
- (void)logUserDidAddPinnedWidget:(id)arg1 isSuggestion:(_Bool)arg2;
- (void)logUserDidChangeStackConfiguration:(id)arg1;
- (void)logSupplementaryActionInContextMenu:(unsigned long long)arg1 stackId:(id)arg2 widgetOnTop:(id)arg3 prediction:(id)arg4;
- (void)logStackDidTap:(id)arg1 widgetOnTop:(id)arg2 prediction:(id)arg3;
- (void)logStackStatusDidChange:(id)arg1 widgetOnTop:(id)arg2 reason:(unsigned long long)arg3 prediction:(id)arg4;
- (void)logSpecialPageDidDisappear:(unsigned long long)arg1;
- (void)logSpecialPageDidAppear:(unsigned long long)arg1 widgetsByStackId:(id)arg2 prediction:(id)arg3;
- (void)logHomeScreenDidDisappearWithReason:(id)arg1;
- (void)logHomeScreenPageDidAppear:(unsigned long long)arg1 topWidgetsByStackIdentifier:(id)arg2 prediction:(id)arg3;
- (void)logStackDidDisappear:(id)arg1 topWidget:(id)arg2 prediction:(id)arg3;
- (void)logStackDidAppear:(id)arg1 topWidget:(id)arg2 prediction:(id)arg3;
- (void)writeTodayPageStacks:(id)arg1 appPredictionPanels:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeDockAppList:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeHomeScreenPageConfigurations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)loadHomeScreenPageConfigurationsWithError:(id *)arg1;
- (void)loadHomeScreenPageConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)significantDwellDetectedForWidget:(id)arg1 date:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)forceDebugRotationForStack:(id)arg1 extensionBundleId:(id)arg2 kind:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)synchronouslyRelinquishOnDiskResourcesAheadOfDataDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)blendingLayerDidUpdateHomeScreenCachedSuggestions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)homeScreenPredictionWithReply:(CDUnknownBlockType)arg1;
- (id)homeScreenPrediction;
- (void)didFinishExecutingTappedSuggestion:(id)arg1 fromWidget:(id)arg2;
- (_Bool)isSuggestionReplacementAvailableForSuggestion:(id)arg1 inLayout:(id)arg2;
- (long long)_layoutTypeOfSuggestion:(id)arg1 inLayout:(id)arg2;
- (id)layoutForAppPredictionPanelWithIdentifier:(id)arg1;
- (id)layoutForSuggestionWidgetWithIdentifier:(id)arg1;
- (void)_alertUserIfNeededOfStackChange:(id)arg1 widgetOnTop:(id)arg2 reason:(unsigned long long)arg3;
- (void)_handleStackSuggestionDidUpdate:(id)arg1;
- (void)_cleanupGuardedData:(id)arg1;
- (id)_stackSuggestionForRegularWidgetFromLayout:(id)arg1 stackIdentifier:(id)arg2;
- (id)_stackSuggestionForSuggestionWidgetWithLayout:(id)arg1 stackIdentifier:(id)arg2;
- (id)_stackSuggestionFromLayout:(id)arg1 withStackIdentifier:(id)arg2;
- (void)_notifyObserversAboutSuggestionRefreshToSuggestionsWidgetOnlyWithGuardedData:(id)arg1;
- (void)_notifyObserversAboutSuggestionRefreshWithGuardedData:(id)arg1;
- (_Bool)_isWidgetEngaged:(id)arg1 kind:(id)arg2 afterMostRecentProactiveRotationToSuggestionWithIdentifier:(id)arg3 guardedData:(id)arg4;
- (void)_setUpInformationStoreIfNecessaryWithGuardedData:(id)arg1;
- (void)_refreshInferredEngagementStatusForWidgetSuggestions:(id)arg1;
- (void)_updateGuardedData:(id)arg1 withCachedSuggestions:(id)arg2;
- (void)_readCachedSuggestionsFromDiskAndUpdateGuardedData:(id)arg1;
- (void)_rotationSuppressionTimerFired;
- (void)_startSuppressingRotationForTimeInterval:(double)arg1 leeway:(double)arg2 guardedData:(id)arg3;
- (void)startSuppressingRotationForTimeInterval:(double)arg1 leeway:(double)arg2;
- (void)setPostInteractionSuggestionSuppressionTimeInterval:(double)arg1 leeway:(double)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithHomeScreenConfigCache:(id)arg1 engagementRecordManager:(id)arg2 widgetDwellTracker:(id)arg3 uiCacheManager:(id)arg4 actionPredictionClient:(id)arg5 tracker:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
