//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView
{
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

@property(retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // @synthesize cycleAnimation=_cycleAnimation;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (struct CGSize)intrinsicContentSize;
- (void)_updateCycleAnimationVisibility;
- (void)_visibilityDidChange;
- (void)didMoveToWindow;
- (void)_updateFromMode:(long long)arg1;
- (void)_updateActiveBars;
- (void)_colorsDidChange;
- (void)layoutSubviews;
- (void)_updateCycleAnimation;
- (void)_updateBars;
- (double)_interspace;
- (double)_barCornerRadius;
- (double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2;
- (double)_heightForBarAtIndex:(long long)arg1;
- (double)_barWidth;

@end

