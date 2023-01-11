//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosEditUI/ISChangeObserver-Protocol.h>
#import <PhotosEditUI/ISWrappedAVPlayerDelegate-Protocol.h>
#import <PhotosEditUI/PUEditPluginSessionDelegate-Protocol.h>
#import <PhotosEditUI/PUOneUpAssetTransitionViewController-Protocol.h>
#import <PhotosEditUI/PUPhotoEditToolbarDelegate-Protocol.h>
#import <PhotosEditUI/PUVideoEditScrubberControllerDelegate-Protocol.h>
#import <PhotosEditUI/PUVideoPlayerViewDelegate-Protocol.h>
#import <PhotosEditUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosEditUI/PUViewModelChangeObserver-Protocol.h>
#import <PhotosEditUI/PXPhotoLibraryUIChangeObserver-Protocol.h>
#import <PhotosEditUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AVAsset, AVPlayerItem, ISWrappedAVPlayer, NSArray, NSString, PHResourceDownloadRequest, PUEditableMediaProvider, PUMediaDestination, PUPhotoEditToolbar, PUProgressIndicatorView, PUVideoEditMaker, PUVideoEditModel, PUVideoEditPluginDataSource, PUVideoEditPluginSession, PUVideoEditScrubberController, PUVideoEditScrubberImageSource, PUVideoEditViewControllerSpec, PUVideoPlayerView, UIAlertController, UIButton, UIView;
@protocol PUEditableAsset, PUVideoEditViewControllerPresentationDelegate, PUVideoEditViewControllerSessionDelegate;

@interface PUVideoEditViewController <PUEditPluginSessionDelegate, PUVideoPlayerViewDelegate, PXPhotoLibraryUIChangeObserver, UIPopoverPresentationControllerDelegate, PUVideoEditScrubberControllerDelegate, PUViewControllerSpecChangeObserver, PUViewModelChangeObserver, PUOneUpAssetTransitionViewController, ISChangeObserver, ISWrappedAVPlayerDelegate, PUPhotoEditToolbarDelegate>
{
    PUVideoEditPluginSession *_pluginSession;
    PUVideoEditPluginDataSource *_pluginDataSource;
    PUVideoEditViewControllerSpec *_videoEditSpec;
    PUVideoEditModel *_videoEditModel;
    unsigned long long _mainButtonAction;
    UIAlertController *_revertToOriginalActionSheet;
    UIAlertController *_trimTypeActionSheet;
    int _outstandingPlaceholderImageRequest;
    PUVideoEditScrubberImageSource *_scrubberImageSource;
    UIButton *_mainActionButton;
    UIButton *_secondaryActionButton;
    UIButton *_pluginButton;
    UIButton *_playButton;
    PUProgressIndicatorView *_videoDownloadProgressIndicator;
    NSArray *_videoDownloadProgressIndicatorConstraints;
    PUProgressIndicatorView *_saveOperationProgressIndicator;
    NSArray *_saveOperationProgressIndicatorConstraints;
    PUVideoPlayerView *_videoEditPlayerView;
    NSArray *_videoEditPlayerViewConstraints;
    PUPhotoEditToolbar *_mainToolbar;
    NSArray *_mainToolbarConstraints;
    UIView *_toolbarWrapper;
    NSArray *_toolbarWrapperConstraints;
    NSArray *_scrubberConstraints;
    PUVideoEditScrubberController *_scrubberController;
    _Bool _hasPendingTime;
    CDStruct_1b6d18a9 _pendingTime;
    unsigned long long _inUseScrubberHandle;
    id _playerObserver;
    struct {
        _Bool buttons;
        _Bool thumbVisibility;
    } _needsUpdateFlags;
    _Bool __isAwaitingSlomoUpdate;
    _Bool __isAwaitingVideoPlayerUpdate;
    _Bool __isSeeking;
    _Bool __playerIsPlaying;
    _Bool __interactivelyScrubbing;
    _Bool __thumbHidden;
    float __videoExportProgress;
    id <PUVideoEditViewControllerPresentationDelegate> _presentationDelegate;
    id <PUVideoEditViewControllerSessionDelegate> _sessionDelegate;
    id <PUEditableAsset> __videoAsset;
    PUEditableMediaProvider *__videoMediaProvider;
    PUMediaDestination *__videoMediaDestination;
    PHResourceDownloadRequest *__videoDownloadRequest;
    PUVideoEditMaker *__videoExporter;
    AVAsset *__avAsset;
    AVPlayerItem *__avPlayerItem;
    ISWrappedAVPlayer *__avPlayer;
    unsigned long long __loadingState;
    struct CGSize __layoutReferenceSize;
    CDStruct_1b6d18a9 __startingTime;
}

@property(nonatomic, setter=_setThumbHidden:) _Bool _thumbHidden; // @synthesize _thumbHidden=__thumbHidden;
@property(nonatomic, setter=_setInteractivelyScrubbing:) _Bool _interactivelyScrubbing; // @synthesize _interactivelyScrubbing=__interactivelyScrubbing;
@property(nonatomic, setter=_setPlayerIsPlaying:) _Bool _playerIsPlaying; // @synthesize _playerIsPlaying=__playerIsPlaying;
@property(nonatomic, setter=_setLoadingState:) unsigned long long _loadingState; // @synthesize _loadingState=__loadingState;
@property(nonatomic, setter=_setSeeking:) _Bool _isSeeking; // @synthesize _isSeeking=__isSeeking;
@property(nonatomic, setter=_setAwaitingVideoPlayerUpdate:) _Bool _isAwaitingVideoPlayerUpdate; // @synthesize _isAwaitingVideoPlayerUpdate=__isAwaitingVideoPlayerUpdate;
@property(nonatomic, setter=_setStartingTime:) CDStruct_1b6d18a9 _startingTime; // @synthesize _startingTime=__startingTime;
@property(nonatomic, setter=_setIsAwaitingSlomoUpdate:) _Bool _isAwaitingSlomoUpdate; // @synthesize _isAwaitingSlomoUpdate=__isAwaitingSlomoUpdate;
@property(nonatomic, setter=_setLayoutReferenceSize:) struct CGSize _layoutReferenceSize; // @synthesize _layoutReferenceSize=__layoutReferenceSize;
@property(retain, nonatomic, setter=_setAVPlayer:) ISWrappedAVPlayer *_avPlayer; // @synthesize _avPlayer=__avPlayer;
@property(retain, nonatomic, setter=_setAVPlayerItem:) AVPlayerItem *_avPlayerItem; // @synthesize _avPlayerItem=__avPlayerItem;
@property(retain, nonatomic, setter=_setAVAsset:) AVAsset *_avAsset; // @synthesize _avAsset=__avAsset;
@property(nonatomic, setter=_setVideoExportProgress:) float _videoExportProgress; // @synthesize _videoExportProgress=__videoExportProgress;
@property(retain, nonatomic, setter=_setVideoExporter:) PUVideoEditMaker *_videoExporter; // @synthesize _videoExporter=__videoExporter;
@property(retain, nonatomic, setter=_setVideoDownloadRequest:) PHResourceDownloadRequest *_videoDownloadRequest; // @synthesize _videoDownloadRequest=__videoDownloadRequest;
@property(readonly, nonatomic) PUMediaDestination *_videoMediaDestination; // @synthesize _videoMediaDestination=__videoMediaDestination;
@property(readonly, nonatomic) PUEditableMediaProvider *_videoMediaProvider; // @synthesize _videoMediaProvider=__videoMediaProvider;
@property(readonly, nonatomic) id <PUEditableAsset> _videoAsset; // @synthesize _videoAsset=__videoAsset;
@property(nonatomic) __weak id <PUVideoEditViewControllerSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(nonatomic) __weak id <PUVideoEditViewControllerPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)dismissAccessibilityHUDForPhotoEditToolbar:(id)arg1;
- (void)photoEditToolbar:(id)arg1 showAccessibilityHUDForItem:(id)arg2;
- (id)photoEditToolbar:(id)arg1 accessibilityHUDItemForButton:(id)arg2;
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)oneUpAssetTransitionDidEnd:(id)arg1;
- (void)oneUpAssetTransitionWillBegin:(id)arg1;
- (void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (id)_preferredStatusBarHideAnimationParameters;
- (_Bool)prefersStatusBarHidden;
- (void)scrubberController:(id)arg1 slomoRegionsDidChangeWithHandle:(unsigned long long)arg2;
- (void)scrubberControllerDidBeginEditingSlomoRegions:(id)arg1;
- (void)scrubberControllerDidEndEditingSlomoRegions:(id)arg1;
- (void)scrubberController:(id)arg1 didEndScrubbingWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(id)arg1 didBeginScrubbingWithHandle:(unsigned long long)arg2;
- (void)scrubberController:(id)arg1 editingEndValueDidChange:(double)arg2;
- (void)scrubberController:(id)arg1 editingStartValueDidChange:(double)arg2;
- (void)scrubberController:(id)arg1 valueDidChange:(double)arg2;
- (void)_seekToTime:(double)arg1;
- (void)_handleDidFinishSeekToPendingTime:(_Bool)arg1;
- (void)_updateFromPendingTime;
- (double)_videoDuration;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)editPluginSession:(id)arg1 didEndWithCompletionType:(unsigned long long)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)_createPluginSession;
- (void)_updateButtonsIfNeeded;
- (void)_invalidateButtons;
- (void)_updateThumbVisibilityIfNeeded;
- (void)_invalidateThumbVisibility;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (_Bool)_playerIsAtEnd;
- (void)_seekPlayerToBeginning;
- (void)_pausePlayer;
- (void)_playPlayer;
- (void)videoPlayerView:(id)arg1 isReadyForDisplayDidChange:(_Bool)arg2;
- (void)setPlaceholderImage:(id)arg1;
- (void)_updateEnabledStateForEditControls;
- (void)_updateSubviewOrdering;
- (void)_updateScrubberTime;
- (void)_updateScrubber;
- (void)_updateVideoEditPlayerView;
- (void)_updateSaveProgressIndicator;
- (void)_updateDownloadProgressIndicator;
- (void)_updateToolbar;
- (void)updateViewConstraints;
- (void)_handlePluginButton:(id)arg1;
- (void)_handleSecondaryActionButton:(id)arg1;
- (void)_handleMainActionButton:(id)arg1;
- (void)_handlePlayButton:(id)arg1;
- (void)_refetchPlaceholderImage;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_didFinishSavingWithSuccess:(_Bool)arg1 duplicatedAsset:(id)arg2;
- (void)_recordAggdStatsForSave;
- (void)_saveEditsWithInPlaceTrim:(_Bool)arg1;
- (void)_handleSaveButton:(id)arg1;
- (void)_revertToOriginal;
- (void)_handleRevertButton:(id)arg1;
- (void)_dismissWithChanges:(_Bool)arg1 duplicatedAsset:(id)arg2;
- (void)_updatePlayerItemEndFromModel;
- (void)_createNewPlayerItem;
- (void)_presentAlertForVideoLoadFailure;
- (void)_loadAVAssetValues;
- (void)_loadFallbackAdjustmentsIfNeeded;
- (void)_loadInitialVideoBuilderWithAdjustments:(id)arg1;
- (void)_didLoadContentEditingInput:(id)arg1;
- (void)_loadAVAsset;
- (void)_didFinishDownloadingVideoWithSuccess:(_Bool)arg1 canceled:(_Bool)arg2 error:(id)arg3;
- (void)_downloadVideo;
- (void)_loadVideo;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)_updateSlomoEditorFromModelTimes;
- (void)_updateSpec;
- (void)_presentErrorAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_presentErrorAlertWithTitle:(id)arg1 message:(id)arg2 additionalAction:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoAsset:(id)arg1 mediaProvider:(id)arg2 mediaDestination:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

