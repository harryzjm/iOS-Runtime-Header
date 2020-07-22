//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSCHChartAxisID, TSCHChartAxisLineLayoutItem, TSCHChartAxisPaddingLayoutItem, TSCHChartAxisTickMarksLayoutItem, TSCHChartAxisTitleLayoutItem, TSCHChartReferenceLineLabelPaddingLayoutItem, TSCHChartReferenceLineLabelsLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartAxisLayoutItem
{
    TSCHChartAxisID *mAxisID;
    int mAxisPosition;
    TSCHChartAxisTitleLayoutItem *mAxisTitle;
    TSCHChartAxisPaddingLayoutItem *mAxisPadding;
    TSCHChartAxisTickMarksLayoutItem *mTickMarks;
    TSCHChartAxisLineLayoutItem *mAxisLine;
    TSCHChartReferenceLineLabelPaddingLayoutItem *mRefLineLabelPadding;
    TSCHChartReferenceLineLabelsLayoutItem *mRefLineLabels;
    struct CGSize mChartBodySize;
    TSCHChartAxisID *mReferenceLineLabelAxisID;
}

@property(retain, nonatomic) TSCHChartAxisID *referenceLineLabelAxisID; // @synthesize referenceLineLabelAxisID=mReferenceLineLabelAxisID;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelsLayoutItem *refLineLabels; // @synthesize refLineLabels=mRefLineLabels;
@property(readonly, nonatomic) TSCHChartReferenceLineLabelPaddingLayoutItem *refLineLabelPadding; // @synthesize refLineLabelPadding=mRefLineLabelPadding;
@property(nonatomic) struct CGSize chartBodySize; // @synthesize chartBodySize=mChartBodySize;
@property(readonly, nonatomic) TSCHChartAxisPaddingLayoutItem *axisPaddingLayoutItem; // @synthesize axisPaddingLayoutItem=mAxisPadding;
@property(readonly, nonatomic) TSCHChartAxisLineLayoutItem *axisLineLayoutItem; // @synthesize axisLineLayoutItem=mAxisLine;
@property(readonly, nonatomic) TSCHChartAxisTickMarksLayoutItem *axisTickMarksLayoutItem; // @synthesize axisTickMarksLayoutItem=mTickMarks;
@property(readonly, nonatomic) TSCHChartAxisTitleLayoutItem *axisTitleLayoutItem; // @synthesize axisTitleLayoutItem=mAxisTitle;
@property(readonly, nonatomic) int axisPosition; // @synthesize axisPosition=mAxisPosition;
@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1;
- (struct CGRect)protected_layoutSpaceRectForAllLabels;
- (void)p_layoutLabelsNow;
- (void)p_layoutOutward;
- (void)p_layoutInward;
- (id)p_description;
- (id)renderersWithRep:(id)arg1;
- (struct CGRect)calcOverhangRect;
- (struct CGSize)calcMinSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisPosition:(int)arg2;

@end

