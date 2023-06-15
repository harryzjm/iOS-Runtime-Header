//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSWPEquationInlineLayout
{
    _Bool _disableXHeightMatching;
    double _fontSizeAdjustedForXHeight;
}

+ (double)fontSizeThatMatchesXHeightForFontName:(id)arg1 fontSize:(double)arg2;
@property(readonly, nonatomic) double fontSizeAdjustedForXHeight; // @synthesize fontSizeAdjustedForXHeight=_fontSizeAdjustedForXHeight;
@property(nonatomic) _Bool disableXHeightMatching; // @synthesize disableXHeightMatching=_disableXHeightMatching;
- (id)p_layoutTarget;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (void)willLayoutInlineWithMaximumSize:(struct CGSize)arg1 textScale:(double)arg2;
- (struct CGSize)unconstrainedSize;
- (id)p_newLayoutContextWithMaximumSize:(struct CGSize)arg1 textScale:(double)arg2 returnFontSizeAdjustedForXHeight:(double *)arg3;
- (id)p_textPropertiesForLayout;
- (id)computeLayoutGeometry;
- (_Bool)p_textIsVertical;
- (double)p_textScale;
- (struct CGSize)invalidEquationSize;
- (id)layoutGeometryFromInfo;
- (double)descentForInlineLayout;
- (void)invalidateTextScalePercent;
- (_Bool)wantsRoundedInlinePosition;

@end

