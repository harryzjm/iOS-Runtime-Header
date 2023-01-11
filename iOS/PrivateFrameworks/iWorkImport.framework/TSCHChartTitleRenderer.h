//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHChartTitleRenderer
{
    struct CGRect mStartingEditingFrame;
}

+ (id)defaultParagraphStyleForCenteredTitleEllipsisWithChartInfo:(id)arg1 originalParagraphStyle:(id)arg2 scaleTextPercent:(double)arg3 titleRootedLayoutRect:(struct CGRect)arg4;
- (id)textLayoutPropertiesWithWrapWidth:(double)arg1;
- (_Bool)shouldPlaceTitleAtCenter;
- (double)frameHeightChangeForPath:(id)arg1;
- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (_Bool)canEditTextForSelectionPath:(id)arg1;
- (struct CGRect)p_rawFrameForEditingTextForSelectionPath:(id)arg1;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2 useWrapWidth:(_Bool)arg3;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (_Bool)canRenderSelectionPath:(id)arg1;
- (void)p_renderIntoContext:(struct CGContext *)arg1 visible:(struct CGRect)arg2;
- (void)p_debugRenderRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 withColor:(id)arg3;
- (void)p_drawTitle:(struct CGContext *)arg1 rangePtr:(struct _NSRange *)arg2;
- (void)useEditedString:(id)arg1;

@end

