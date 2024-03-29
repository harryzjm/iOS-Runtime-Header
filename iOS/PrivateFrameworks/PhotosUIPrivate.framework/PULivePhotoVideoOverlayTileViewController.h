//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class ISWrappedAVPlayer, NSArray, NSString, PHLivePhotoView, PUAssetReference, PUBrowsingViewModel, PUMergedLivePhotosVideo, PUModelTileTransform, PUOneUpMergedVideoProvider, PXImageModulationManager, PXLivePhotoViewModulator, UIImpactFeedbackGenerator, UIView;
@protocol PULivePhotoVideoOverlayTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PULivePhotoVideoOverlayTileViewController : PUTileViewController
{
    _Bool _isPresentedForSecondScreen;
    _Bool _willEndCurrentPlayback;
    PUBrowsingViewModel *_browsingViewModel;
    PUOneUpMergedVideoProvider *_mergedVideoProvider;
    id <PULivePhotoVideoOverlayTileViewControllerDelegate> _delegate;
    PXImageModulationManager *_imageModulationManager;
    NSArray *_playbackGestureRecognizers;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    PUMergedLivePhotosVideo *_mergedVideo;
    UIView *_containerView;
    PHLivePhotoView *_livePhotoView;
    ISWrappedAVPlayer *_videoPlayer;
    id _videoPlayerTimeObserver;
    PUModelTileTransform *_modelTileTransform;
    PXLivePhotoViewModulator *_livePhotoViewModulator;
    PUAssetReference *_playbackAssetReference;
}

+ (id)srlCompensationLoadingQueue;
- (void).cxx_destruct;
@property(nonatomic) _Bool willEndCurrentPlayback; // @synthesize willEndCurrentPlayback=_willEndCurrentPlayback;
@property(retain, nonatomic) PUAssetReference *playbackAssetReference; // @synthesize playbackAssetReference=_playbackAssetReference;
@property(retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator; // @synthesize livePhotoViewModulator=_livePhotoViewModulator;
@property(retain, nonatomic) PUModelTileTransform *modelTileTransform; // @synthesize modelTileTransform=_modelTileTransform;
@property(retain, nonatomic) id videoPlayerTimeObserver; // @synthesize videoPlayerTimeObserver=_videoPlayerTimeObserver;
@property(retain, nonatomic) ISWrappedAVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) PHLivePhotoView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) PUMergedLivePhotosVideo *mergedVideo; // @synthesize mergedVideo=_mergedVideo;
@property(readonly, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(readonly, nonatomic) NSArray *playbackGestureRecognizers; // @synthesize playbackGestureRecognizers=_playbackGestureRecognizers;
@property(retain, nonatomic) PXImageModulationManager *imageModulationManager; // @synthesize imageModulationManager=_imageModulationManager;
@property(nonatomic) __weak id <PULivePhotoVideoOverlayTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPresentedForSecondScreen; // @synthesize isPresentedForSecondScreen=_isPresentedForSecondScreen;
@property(retain, nonatomic) PUOneUpMergedVideoProvider *mergedVideoProvider; // @synthesize mergedVideoProvider=_mergedVideoProvider;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)_handleLoadedSRLCompensationAmount:(id)arg1 forAsset:(id)arg2;
- (void)_updateSRLCompensation;
- (void)_updatePlaybackEnabled;
- (void)_videoCurrentTimeDidChange:(CDStruct_1b6d18a9)arg1;
- (void)_updateMergedVideo;
- (void)_updateLivePhotoViewModulatorInput;
- (void)_updateLivePhotoViewModulator;
- (void)_updateLivePhotoViewPhoto;
- (void)_updateLivePhotoViewFrame;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (double)livePhotoView:(id)arg1 extraMinimumTouchDurationForTouch:(id)arg2 withStyle:(long long)arg3;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (_Bool)livePhotoView:(id)arg1 canBeginPlaybackWithStyle:(long long)arg2;
- (void)becomeReusable;
- (id)gestureRecognizers;
- (id)loadView;
- (void)dealloc;
- (void)setMergedVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

