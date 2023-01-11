//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCHChartAxisLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

@interface TSCHChartAreaLayoutItem
{
    TSCHChartAxisLayoutItem *mTopHorizontalAxis;
    TSCHChartAxisLayoutItem *mBottomHorizontalAxis;
    TSCHChartAxisLayoutItem *mLeftVerticalAxis;
    TSCHChartAxisLayoutItem *mRightVerticalAxis;
    unsigned long long mRelayoutDepth;
    _Bool mInOutwardLayout;
}

- (void).cxx_destruct;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)p_updateMinHitSizes;
- (struct CGRect)i_currentBufferAreaUnitRect;
- (id)renderersWithRep:(id)arg1;
- (void)p_layoutOutward;
- (void)p_layoutInward;
- (void)buildSubTree;
- (double)p_dataSetNameLabelPadding;
- (void)p_arrangeSizedChildren;
- (Class)p_axisLayoutItemClassForAxisID:(id)arg1;
- (struct CGRect)titleFrame;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *topRefLineLabels;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *rightRefLineLabels;

@end
