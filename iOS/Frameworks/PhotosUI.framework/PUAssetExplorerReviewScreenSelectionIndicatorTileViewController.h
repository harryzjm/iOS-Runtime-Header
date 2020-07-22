//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, PUAssetActionManager, PUAssetReference, PUBrowsingViewModel, UIButton;

__attribute__((visibility("hidden")))
@interface PUAssetExplorerReviewScreenSelectionIndicatorTileViewController <PXChangeObserver>
{
    _Bool __performingChanges;
    _Bool __needsUpdateButton;
    _Bool __buttonVisible;
    PUBrowsingViewModel *_browsingViewModel;
    PUAssetReference *_assetReference;
    PUAssetActionManager *_actionManager;
    UIButton *__button;
}

@property(nonatomic, getter=_isButtonVisible, setter=_setButtonVisible:) _Bool _buttonVisible; // @synthesize _buttonVisible=__buttonVisible;
@property(retain, nonatomic, setter=_setButton:) UIButton *_button; // @synthesize _button=__button;
@property(nonatomic, setter=_setNeedsUpdateButton:) _Bool _needsUpdateButton; // @synthesize _needsUpdateButton=__needsUpdateButton;
@property(nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) _Bool _performingChanges; // @synthesize _performingChanges=__performingChanges;
@property(retain, nonatomic) PUAssetActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateButtonIfNeeded;
- (void)_invalidateButton;
- (_Bool)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_handleButton:(id)arg1;
- (id)_selectionManager;
- (id)_reviewActionManager;
- (void)becomeReusable;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

