//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIBarButtonItemViewOwner-Protocol.h>

@class NSString, UIView, _UIBarBackground, _UIToolbarContentView;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProviderModernIOS <_UIBarButtonItemViewOwner>
{
    _UIBarBackground *_barBackgroundView;
    UIView *_customBackgroundView;
    _UIToolbarContentView *_contentView;
    NSString *_backdropViewLayerGroupName;
}

@property(retain, nonatomic, getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:) NSString *backdropViewLayerGroupName; // @synthesize backdropViewLayerGroupName=_backdropViewLayerGroupName;
- (void).cxx_destruct;
- (_Bool)toolbarIsSmall;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (id)_currentCustomBackground;
- (void)updateBarBackground;
- (void)updateBarForStyle:(long long)arg1;
- (struct CGRect)backgroundFrame;
- (id)currentBackgroundView;
- (void)setCustomBackgroundView:(id)arg1;
- (void)updateBarBackgroundSize;
- (struct CGRect)_backgroundFrame;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)_updateContentView;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
