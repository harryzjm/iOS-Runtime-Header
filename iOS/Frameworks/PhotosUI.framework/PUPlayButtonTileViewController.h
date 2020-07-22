//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PUAssetViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, PUBrowsingVideoPlayer, PUBrowsingViewModel, UIView;
@protocol PUPlayButtonTileViewControllerDelegate, PXVideoOverlayButton;

__attribute__((visibility("hidden")))
@interface PUPlayButtonTileViewController <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUAssetViewModelChangeObserver>
{
    struct {
        _Bool respondsToDidTapButton;
        _Bool respondsToDelayForButtonAnimation;
    } _delegateFlags;
    _Bool __shouldShowPlayButton;
    id <PUPlayButtonTileViewControllerDelegate> _delegate;
    PUBrowsingViewModel *_browsingViewModel;
    PUAssetViewModel *_assetViewModel;
    PUBrowsingVideoPlayer *__browsingVideoPlayer;
    UIView<PXVideoOverlayButton> *__playButton;
}

+ (struct CGSize)playButtonTileSize;
@property(nonatomic, setter=_setShouldShowPlayButton:) _Bool _shouldShowPlayButton; // @synthesize _shouldShowPlayButton=__shouldShowPlayButton;
@property(retain, nonatomic, setter=_setPlayButton:) UIView<PXVideoOverlayButton> *_playButton; // @synthesize _playButton=__playButton;
@property(retain, nonatomic, setter=_setBrowsingVideoPlayer:) PUBrowsingVideoPlayer *_browsingVideoPlayer; // @synthesize _browsingVideoPlayer=__browsingVideoPlayer;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property(nonatomic) __weak id <PUPlayButtonTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_setShouldShowPlayButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateButtonVisibilityAnimated:(_Bool)arg1;
- (void)_playButtonTapped:(id)arg1;
- (void)becomeReusable;
- (void)dealloc;
- (id)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

