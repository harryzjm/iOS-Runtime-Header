//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIToolbarVisualProvider.h"

@class UIView, _UIBarBackground, _UIBarBackgroundLayoutLegacy;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider
{
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayoutLegacy *_backgroundViewLayout;
    UIView *_customBackgroundView;
}

- (void).cxx_destruct;
- (_Bool)toolbarIsSmall;
- (double)_edgeMarginForBorderedItem:(_Bool)arg1 isText:(_Bool)arg2;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect)arg1;
- (id)_currentCustomBackground;
- (void)updateBackgroundGroupName;
- (void)updateBarBackground;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateBarBackgroundSize;
- (struct CGRect)backgroundFrame;
- (id)currentBackgroundView;
- (void)setCustomBackgroundView:(id)arg1;
- (void)customViewChangedForButtonItem:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(_Bool)arg3 actuallyRepositionButtons:(_Bool)arg4;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;
- (void)layoutSubviews;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id *)arg2 withHitRects:(id *)arg3 buttonIndexes:(id *)arg4 textButtonIndexes:(id *)arg5;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)_createViewsForItems:(id)arg1;

@end

