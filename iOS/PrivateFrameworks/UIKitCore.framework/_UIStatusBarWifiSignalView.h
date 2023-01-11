//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarWifiSignalView
{
    _Bool _needsCycleAnimationUpdate;
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2;
+ (double)_totalWidthForIconSize:(long long)arg1;
+ (double)_interspaceForIconSize:(long long)arg1;
+ (double)_barThicknessAtIndex:(unsigned long long)arg1 iconSize:(long long)arg2;
@property(retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // @synthesize cycleAnimation=_cycleAnimation;
@property(nonatomic) _Bool needsCycleAnimationUpdate; // @synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (struct CGSize)intrinsicContentSize;
- (void)_iconSizeDidChange;
- (void)didMoveToWindow;
- (void)_updateFromMode:(long long)arg1;
- (void)_updateActiveBars;
- (void)_updateCycleAnimationNow;
- (void)_updateCycleAnimationIfNeeded;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_colorsDidChange;
- (void)layoutSubviews;
- (void)_updateBars;
- (double)_barCornerRadius;

@end

