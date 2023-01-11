//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSArray, TSCHChartInfo, TSCHChartModel, TSCHChartRootLayoutItem;

__attribute__((visibility("hidden")))
@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent>
{
    TSCHChartLayoutItem *mParent;
    NSArray *mChildren;
    _Bool mTreeBuilt;
    struct CGPoint mOffset;
    struct CGSize mLayoutSize;
    _Bool mLayoutSizeSet;
    struct CGRect mDrawingRectCache;
    _Bool mDrawingRectCacheValid;
    struct CGSize mMinSizeCache;
    _Bool mMinSizeCacheValid;
    struct CGRect mOverhangRectCache;
    _Bool mOverhangRectCacheValid;
}

+ (id)chartLayoutWithChartInfo:(id)arg1;
@property(nonatomic) struct CGPoint layoutOffset; // @synthesize layoutOffset=mOffset;
@property(readonly, nonatomic) __weak TSCHChartLayoutItem *parent; // @synthesize parent=mParent;
- (void).cxx_destruct;
- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)hitChartElements:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)p_iterateChildrenWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)stopIteratingItemsContainingPoint:(struct CGPoint)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)description;
- (id)p_description;
- (double)overhangMagnitudeForEdge:(unsigned int)arg1;
- (id)renderersWithRep:(id)arg1;
- (void)layoutUsingMethod:(int)arg1;
- (void)p_layoutOutward;
- (void)p_layoutInward;
- (void)clearAll;
- (void)buildSubTree;
@property(readonly, nonatomic) struct CGSize startingSize;
@property(readonly, nonatomic) _Bool isInResize;
- (void)clearOverhangRect;
@property(readonly, nonatomic) struct CGRect overhangRect;
- (struct CGSize)overhangSize;
- (struct CGPoint)overhangOffset;
- (struct CGRect)calcOverhangRect;
@property(readonly, nonatomic) struct CGRect rootedDrawingRect;
- (void)clearDrawingRect;
@property(readonly, nonatomic) struct CGRect drawingRect;
@property(readonly, nonatomic) struct CGSize drawingSize;
@property(readonly, nonatomic) struct CGPoint drawingOffset;
- (struct CGRect)calcDrawingRect;
@property(readonly, nonatomic) struct CGRect rootedLayoutRect;
@property(nonatomic) struct CGRect layoutRect;
- (void)clearLayoutSize;
@property(nonatomic) struct CGSize layoutSize;
- (void)clearMinSize;
@property(readonly) struct CGSize minSize;
- (struct CGSize)calcMinSize;
@property(readonly, nonatomic) unsigned long long dataSetIndex;
@property(nonatomic) CDStruct_b1c75024 layoutSettings;
@property(readonly, nonatomic) TSCHChartModel *model;
@property(readonly, nonatomic) TSCHChartInfo *chartInfo;
@property(readonly, nonatomic) TSCHChartRootLayoutItem *root;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

