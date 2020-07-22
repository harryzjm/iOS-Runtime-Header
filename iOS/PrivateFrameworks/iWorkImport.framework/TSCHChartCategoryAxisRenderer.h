//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TSCHChartCategoryAxisRenderer
{
}

- (struct CGRect)frameForEditingTextForSelectionPath:(id)arg1;
- (_Bool)canEditTextForSelectionPath:(id)arg1;
- (void)addSelection:(id)arg1 toCGPath:(struct CGPath *)arg2;
- (_Bool)p_doesSelectionPathReferToAxisSeriesLabel:(id)arg1;
- (_Bool)p_doesSelectionPathReferToAxisLabel:(id)arg1;
- (void)renderIntoContext:(struct CGContext *)arg1 selection:(id)arg2;
- (unsigned long long)p_seriesIndexForSelectionPath:(id)arg1;
- (unsigned long long)p_categoryIndexForSelectionPath:(id)arg1;
- (_Bool)canRenderSelectionPath:(id)arg1;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3;
- (void)p_drawIntoLayer:(int)arg1 inContext:(struct CGContext *)arg2 visible:(struct CGRect)arg3 limitRenderLabels:(int)arg4 limitLabelIndex:(unsigned long long)arg5 rangePtr:(struct _NSRange *)arg6;
- (id)transparencyLayers;
- (id)categoryAxisLayoutItem;

@end

