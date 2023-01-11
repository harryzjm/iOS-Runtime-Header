//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSStringDrawingContext;

@interface PLLargeTextPlatterHeaderContentViewLayoutManager
{
    NSStringDrawingContext *_drawingContext;
    double _referenceWidth;
    struct CGSize _cachedTitleBoundingRectSize;
    unsigned long long _cachedTitleNumberOfLines;
}

+ (double)contentBaselineToBoundsBottomWithFont:(id)arg1 boundsWidth:(double)arg2 scale:(double)arg3;
- (void).cxx_destruct;
- (struct CGRect)_titleLabelBoundsThatFitsWidth:(double)arg1;
- (struct CGRect)_dateLabelBoundsThatFitsWidth:(double)arg1;
- (unsigned long long)_titleLabelNumberOfLinesThatFitsWidth:(double)arg1;
- (void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(double)arg1;
- (struct CGSize)_utilityViewSizeThatFitsWidth:(double)arg1;
- (double)_dateLabelBaselineOffset;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (double)_largeTextUtilityLabelBaselineOffset;
- (struct CGSize)_boundingRectSizeForLabel:(id)arg1 width:(double)arg2 numberOfLines:(inout unsigned long long *)arg3;
- (void)invalidateCachedSizeInfo;
- (id)_dateLabelFont;
- (double)_titleLabelBaselineOffset;
- (void)layoutDateLabelWithScale:(double)arg1;
- (void)layoutUtilityButtonWithScale:(double)arg1;
- (void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2;
- (void)layoutIconButtonsWithScale:(double)arg1;
- (double)contentBaseline;
- (double)headerHeightForWidth:(double)arg1;

@end
