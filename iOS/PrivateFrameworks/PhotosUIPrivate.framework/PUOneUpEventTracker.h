//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMediaViewControllerEventTracker.h>

@class NSMutableDictionary, NSString, PUBrowsingVideoPlayer, PUBrowsingViewModel, PXAssetAnalyzer, PXAssetMetadataDonator;
@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUOneUpEventTracker : PXMediaViewControllerEventTracker
{
    _Bool _isSessionActive;
    _Bool _currentlyStreamingVideoIsActuallyPlaying;
    _Bool _currentlyStreamingVideoIsStalled;
    _Bool _currentlyStreamingVideoDidStartActualPlayback;
    PUBrowsingViewModel *_viewModel;
    long long _presentationOrigin;
    long long _sessionSignpost;
    double _currentlyViewedAssetTimestamp;
    long long _currentlyViewedAssetGeneration;
    long long _currentAssetSignpost;
    long long _currentAssetDisplayIntervalSignpost;
    PXAssetAnalyzer *_assetAnalyzer;
    PXAssetMetadataDonator *_assetMetadataDonator;
    PUBrowsingVideoPlayer *_currentVideoPlayer;
    id <PUDisplayAsset> _currentVideoAsset;
    id <PUDisplayAsset> _currentlyPlayingVideoAsset;
    double _currentlyPlayingVideoAssetTimestamp;
    id <PUDisplayAsset> _currentlyStreamingVideoAsset;
    long long _currentlyStreamingVideoStallsCount;
    double _livePhotoFirstPlayWaitDuration;
    long long _currentlyPlayingLivePhotoSignpost;
    long long _currentlyPlayingVideoSignpost;
    long long _currentlyPlayingStreamedVideoSignpost;
    long long _currentlyPlayingStreamedVideoStartSignpost;
    long long _currentlyShowingInfoPanelSignpost;
}

+ (void)_sendMapSelectionEventToBiomeWithAssetUUID:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long currentlyShowingInfoPanelSignpost; // @synthesize currentlyShowingInfoPanelSignpost=_currentlyShowingInfoPanelSignpost;
@property(nonatomic) long long currentlyPlayingStreamedVideoStartSignpost; // @synthesize currentlyPlayingStreamedVideoStartSignpost=_currentlyPlayingStreamedVideoStartSignpost;
@property(nonatomic) long long currentlyPlayingStreamedVideoSignpost; // @synthesize currentlyPlayingStreamedVideoSignpost=_currentlyPlayingStreamedVideoSignpost;
@property(nonatomic) long long currentlyPlayingVideoSignpost; // @synthesize currentlyPlayingVideoSignpost=_currentlyPlayingVideoSignpost;
@property(nonatomic) long long currentlyPlayingLivePhotoSignpost; // @synthesize currentlyPlayingLivePhotoSignpost=_currentlyPlayingLivePhotoSignpost;
@property(nonatomic) double livePhotoFirstPlayWaitDuration; // @synthesize livePhotoFirstPlayWaitDuration=_livePhotoFirstPlayWaitDuration;
@property(nonatomic) _Bool currentlyStreamingVideoDidStartActualPlayback; // @synthesize currentlyStreamingVideoDidStartActualPlayback=_currentlyStreamingVideoDidStartActualPlayback;
@property(nonatomic) long long currentlyStreamingVideoStallsCount; // @synthesize currentlyStreamingVideoStallsCount=_currentlyStreamingVideoStallsCount;
@property(nonatomic) _Bool currentlyStreamingVideoIsStalled; // @synthesize currentlyStreamingVideoIsStalled=_currentlyStreamingVideoIsStalled;
@property(nonatomic) _Bool currentlyStreamingVideoIsActuallyPlaying; // @synthesize currentlyStreamingVideoIsActuallyPlaying=_currentlyStreamingVideoIsActuallyPlaying;
@property(retain, nonatomic) id <PUDisplayAsset> currentlyStreamingVideoAsset; // @synthesize currentlyStreamingVideoAsset=_currentlyStreamingVideoAsset;
@property(readonly, nonatomic) double currentlyPlayingVideoAssetTimestamp; // @synthesize currentlyPlayingVideoAssetTimestamp=_currentlyPlayingVideoAssetTimestamp;
@property(retain, nonatomic) id <PUDisplayAsset> currentlyPlayingVideoAsset; // @synthesize currentlyPlayingVideoAsset=_currentlyPlayingVideoAsset;
@property(readonly, nonatomic) id <PUDisplayAsset> currentVideoAsset; // @synthesize currentVideoAsset=_currentVideoAsset;
@property(retain, nonatomic) PUBrowsingVideoPlayer *currentVideoPlayer; // @synthesize currentVideoPlayer=_currentVideoPlayer;
@property(readonly, nonatomic) PXAssetMetadataDonator *assetMetadataDonator; // @synthesize assetMetadataDonator=_assetMetadataDonator;
@property(readonly, nonatomic) PXAssetAnalyzer *assetAnalyzer; // @synthesize assetAnalyzer=_assetAnalyzer;
@property(nonatomic) long long currentAssetDisplayIntervalSignpost; // @synthesize currentAssetDisplayIntervalSignpost=_currentAssetDisplayIntervalSignpost;
@property(nonatomic) long long currentAssetSignpost; // @synthesize currentAssetSignpost=_currentAssetSignpost;
@property(readonly, nonatomic) long long currentlyViewedAssetGeneration; // @synthesize currentlyViewedAssetGeneration=_currentlyViewedAssetGeneration;
@property(readonly, nonatomic) double currentlyViewedAssetTimestamp; // @synthesize currentlyViewedAssetTimestamp=_currentlyViewedAssetTimestamp;
@property(nonatomic) long long sessionSignpost; // @synthesize sessionSignpost=_sessionSignpost;
@property(nonatomic) _Bool isSessionActive; // @synthesize isSessionActive=_isSessionActive;
@property(readonly, nonatomic) long long presentationOrigin; // @synthesize presentationOrigin=_presentationOrigin;
@property(readonly, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_logInfoPanelChangeEventsIfNeededWithChange:(id)arg1;
- (void)logInfoPanelClosedBy:(long long)arg1;
- (void)logInfoPanelOpenedBy:(long long)arg1;
- (void)logTipPresentedForType:(long long)arg1;
- (void)logInfoPanelShownAndSwipeToNewAsset;
- (void)endLoggingTimeInterval:(long long)arg1 event:(id)arg2;
- (long long)startLoggingTimeInterval;
- (void)logInfoPanelRotatedToHorizontalView;
- (void)logViewControllerDidAppear:(id)arg1;
- (void)_logWillEndPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_logDidStartActualPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_logDidStartPlaybackOfStreamedVideoAsset:(id)arg1;
- (void)_logDidEndPlayingVideoAsset:(id)arg1 duration:(double)arg2;
- (void)_logDidStartPlayingVideoAsset:(id)arg1;
- (void)logVitalityDidEndForLivePhoto:(id)arg1;
- (void)logUserDidPlayLivePhoto:(id)arg1 pressOnSubject:(_Bool)arg2;
- (void)logUserDidPlayLivePhoto:(id)arg1;
- (void)logUserWillPlayLivePhoto:(id)arg1 firstTimeWaitDuration:(double)arg2;
- (void)logUserWillPlayLivePhoto:(id)arg1;
- (void)_handleLongEnoughViewDurationWithGeneration:(long long)arg1;
- (void)_logDidEndSession;
- (void)_logDidStartSession;
- (void)logDidEndViewingMedia:(id)arg1 mediaKind:(long long)arg2 duration:(double)arg3;
- (void)logDidStartViewingMedia:(id)arg1 mediaKind:(long long)arg2;
- (void)setDisplayedAsset:(id)arg1;
- (void)_updateOneUpInfoPanelShowingSignpost;
- (void)_invalidateOneUpInfoPanelShowingSignpost;
- (void)_updateCurrentVideoProperties;
- (void)_invalidateCurrentVideoProperties;
- (void)_updateCurrentVideoPlayer;
- (void)_invalidateCurrentVideoPlayer;
- (void)_updateCurrentlyViewedAsset;
- (void)_invalidateCurrentlyViewedAsset;
- (void)_updateIsSessionActive;
- (void)_invalidateIsSessionActive;
- (id)initWithViewModel:(id)arg1 presentationOrigin:(long long)arg2;
- (id)initWithViewName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSMutableDictionary *payload;
@property(readonly) Class superclass;

@end

