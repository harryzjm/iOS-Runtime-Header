//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVPlayerInterstitialEventController, AVPlayerInterstitialEventMonitor, AVPlayerTimeController, AVTimeRange, AVTimeRangeCollection;
@protocol AVInterstitialControllerDelegateManager, AVTimeControlling, NSObject;

__attribute__((visibility("hidden")))
@interface AVInterstitialController : NSObject
{
    id <NSObject> _playerItemTimeJumpedObserver;
    id <NSObject> _playerInterstitialPlayerDidChangeObserver;
    id <NSObject> _playerInterstitialEventsChangedObserver;
    id <NSObject> _playerInterstitialCurrentEventChangedObserver;
    _Bool _shouldAlwaysSkipInterstitials;
    AVPlayer *_player;
    AVPlayer *_interstitialPlayer;
    id <AVInterstitialControllerDelegateManager> _delegateManager;
    AVTimeRangeCollection *_interstitialTimeRangeCollection;
    double _continuationTimeAfterInterstitial;
    CDUnknownBlockType _didEnterInterstitialTimeRangeBlock;
    CDUnknownBlockType _didLeaveInterstitialTimeRangeBlock;
    CDUnknownBlockType _didLeaveRequiredInterstitialTimeRangeBlock;
    CDUnknownBlockType _skipInterstitialTimeRangeBlock;
    AVPlayerTimeController<AVTimeControlling> *_interstitialTimingController;
    AVPlayerInterstitialEventMonitor *_eventMonitor;
    AVPlayerInterstitialEventController *_eventController;
    AVObservationController *_kvo;
    AVObservationController *_kvoPlayerItem;
    AVTimeRange *_interstitialTimeRangeInProgress;
    id _interstitialBoundaryTimeObserver;
}

+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1;
+ (id)interstitialQueue;
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1 reversePlaybackEndTime:(CDStruct_1b6d18a9)arg2 forwardPlaybackEndTime:(CDStruct_1b6d18a9)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) id interstitialBoundaryTimeObserver; // @synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver;
@property(retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress; // @synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress;
@property(retain, nonatomic) AVObservationController *kvoPlayerItem; // @synthesize kvoPlayerItem=_kvoPlayerItem;
@property(retain, nonatomic) AVObservationController *kvo; // @synthesize kvo=_kvo;
@property(retain, nonatomic) AVPlayerInterstitialEventController *eventController; // @synthesize eventController=_eventController;
@property(retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(readonly, nonatomic) AVPlayerTimeController<AVTimeControlling> *interstitialTimingController; // @synthesize interstitialTimingController=_interstitialTimingController;
@property(nonatomic) _Bool shouldAlwaysSkipInterstitials; // @synthesize shouldAlwaysSkipInterstitials=_shouldAlwaysSkipInterstitials;
@property(copy, nonatomic) CDUnknownBlockType skipInterstitialTimeRangeBlock; // @synthesize skipInterstitialTimeRangeBlock=_skipInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveRequiredInterstitialTimeRangeBlock; // @synthesize didLeaveRequiredInterstitialTimeRangeBlock=_didLeaveRequiredInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveInterstitialTimeRangeBlock; // @synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterInterstitialTimeRangeBlock; // @synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock;
@property(readonly, nonatomic) double continuationTimeAfterInterstitial; // @synthesize continuationTimeAfterInterstitial=_continuationTimeAfterInterstitial;
@property(retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // @synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection;
@property(nonatomic) __weak id <AVInterstitialControllerDelegateManager> delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayer *interstitialPlayer; // @synthesize interstitialPlayer=_interstitialPlayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (double)_pendingTimeBoundary;
- (void)_setPendingTimeBoundary:(double)arg1;
- (void)didPresentInterstitialTimeRange:(id)arg1;
- (void)willPresentInterstitialTimeRange:(id)arg1;
- (void)skipInterstitialTimeRange:(id)arg1;
- (void)didBeginOrResumePlayback;
- (_Bool)_shouldSkipInterstitialTimeRange:(id)arg1;
- (id)nextInterstitialTimeRange;
@property(readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property(readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
- (void)_stopObservingInterstitialTimeRanges;
- (void)_startObservingInterstitialTimeRanges;
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1;
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)arg1;
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)arg1;
- (double)timeToSeekAfterUserNavigatedFromTime:(double)arg1 toTime:(double)arg2;
@property(readonly, nonatomic) _Bool requiresLinearPlayback;
@property(readonly, nonatomic) _Bool shouldEnforceInterstitialPolicy;
- (void)_updateInterstitialTimeRangeCollection;
- (void)cancelCurrentPlayerInterstitialEvent;
@property(readonly, nonatomic) double timeRemainingInCurrentInterstitial;
- (double)elapsedTimeWithinCurrentInterstitial;
- (double)elapsedTimeForInterstitialPlayer;
- (_Bool)isLive;
- (id)currentOrEstimatedDate;
@property(readonly, nonatomic) double currentDisplayTime;
- (double)currentTime;
- (id)currentItem;
- (double)displayTimeFromTime:(double)arg1;
- (double)timeFromDisplayTime:(double)arg1;
- (void)_performInterstitialPlayerDependentUpdates;
- (void)invalidate;
- (void)dealloc;
- (void)setupInterstitialObservers;
- (id)init;
- (_Bool)loadDurationOfCurrentOrNextInterstitialEvent:(CDUnknownBlockType)arg1;
- (id)timeRangeForPlayerInterstitialEvent:(id)arg1;
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)arg1;
- (void)updateSynthesizedInterstitialTimeRanges;
- (id)_copySynthesizedInterstitialTimeRanges;

@end

