//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView, _UIPopoverShapeLayerMaskView;

__attribute__((visibility("hidden")))
@interface _UIPopoverShapeLayerChromeView
{
    UIVisualEffectView *_blurView;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    _Bool _popoverBackgroundColorIsOpaque;
    _Bool _arrowVisible;
    _UIPopoverShapeLayerMaskView *_shapeLayerMaskView;
}

+ (double)cornerRadius;
+ (double)arrowBase;
+ (double)arrowHeight;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_loadNecessaryViews;
- (void)_updateBackgroundStyle;
- (long long)_resolvedBackgroundStyle;
- (void)setBackgroundStyle:(long long)arg1;
- (long long)backgroundStyle;
- (id)backgroundEffect;
- (void)_removeEffectView;
- (void)_configureEffectView;
- (void)_updateShapeLayerPath;
- (void)_generateRightArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;
- (void)_generateLeftArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;
- (void)_generateBottomArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;
- (void)_generateTopArrowShapeInPath:(id)arg1 bounds:(struct CGRect)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5 isPinned:(_Bool)arg6;
- (void)_addArrowCurveToPath:(id)arg1 direction:(unsigned long long)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 peakPoint:(struct CGPoint)arg5;
- (void)_addLineWithSlightTrailingAndLeadingCurveToPath:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 leadingEdge:(_Bool)arg4 isVertical:(_Bool)arg5;
- (double)_leftAndRightStartYLocationForBounds:(struct CGRect)arg1;
- (double)_upAndDownStartingXLocationForBounds:(struct CGRect)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)_shadowPath;
- (struct CGSize)_shadowOffset;
- (double)_shadowRadius;
- (double)_shadowOpacity;
- (struct UIEdgeInsets)_shadowInsets;
- (_Bool)usesImagesForShapeMasking;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (id)initWithFrame:(struct CGRect)arg1;

@end

