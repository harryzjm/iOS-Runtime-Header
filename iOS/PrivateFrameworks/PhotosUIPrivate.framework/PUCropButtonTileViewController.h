//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, NSTimer, PUAssetViewModel, PUBrowsingViewModel, PUOneUpCropButton;
@protocol PUCropButtonTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCropButtonTileViewController : PUTileViewController
{
    _Bool _showingButton;
    id <PUCropButtonTileViewControllerDelegate> _delegate;
    PUAssetViewModel *_assetViewModel;
    PUBrowsingViewModel *_browsingViewModel;
    PUOneUpCropButton *_button;
    NSTimer *_invisibilityTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *invisibilityTimer; // @synthesize invisibilityTimer=_invisibilityTimer;
@property(nonatomic, getter=isShowingButton) _Bool showingButton; // @synthesize showingButton=_showingButton;
@property(retain, nonatomic) PUOneUpCropButton *button; // @synthesize button=_button;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(nonatomic) __weak id <PUCropButtonTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)oneUpCropButtonDidDismissMenu:(id)arg1;
- (struct CGSize)oneUpCropButtonOriginalAspectRatio:(id)arg1;
- (struct CGSize)oneUpCropButtonCurrentAspectRatio:(id)arg1;
- (struct CGSize)oneUpCropButtonBoundingSize:(id)arg1;
- (void)oneUpCropButton:(id)arg1 didSelectAspectRatio:(struct CGSize)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_didChangeCurrentAsset;
- (void)_didChangeChromeVisible:(_Bool)arg1;
- (void)_dismissButtonAfterDelay;
- (void)_didChangeModelTileTransform:(id)arg1;
- (_Bool)_hasUserZoomedIn;
- (_Bool)_canShowButton;
- (void)_invalidateTimers;
- (void)_showButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_createButtonIfNeeded;
- (void)dealloc;
- (void)_layoutSubviews;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

