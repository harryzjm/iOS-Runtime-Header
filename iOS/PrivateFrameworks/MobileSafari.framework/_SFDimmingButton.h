//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSValue, UIColor;

@interface _SFDimmingButton
{
    UIColor *_cachedDimmedBackgroundColor;
    _Bool _alwaysUsesUIMenuOrdering;
    double _normalImageAlpha;
    double _highlightedImageAlpha;
    double _highlightAnimationDuration;
    UIColor *_dimmableBackgroundColor;
    NSValue *_tapTargetSideMargins;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool alwaysUsesUIMenuOrdering; // @synthesize alwaysUsesUIMenuOrdering=_alwaysUsesUIMenuOrdering;
@property(retain, nonatomic) NSValue *tapTargetSideMargins; // @synthesize tapTargetSideMargins=_tapTargetSideMargins;
@property(retain, nonatomic) UIColor *dimmableBackgroundColor; // @synthesize dimmableBackgroundColor=_dimmableBackgroundColor;
@property(nonatomic) double highlightAnimationDuration; // @synthesize highlightAnimationDuration=_highlightAnimationDuration;
@property(nonatomic) double highlightedImageAlpha; // @synthesize highlightedImageAlpha=_highlightedImageAlpha;
@property(nonatomic) double normalImageAlpha; // @synthesize normalImageAlpha=_normalImageAlpha;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
@property(retain, nonatomic) NSNumber *tapTargetSideMargin;
- (void)_updateBackgroundColor;
- (void)_updateImageAlpha;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end
