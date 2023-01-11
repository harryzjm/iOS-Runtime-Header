//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDWrappableParent-Protocol.h>

@class NSOrderedSet, TSDLayoutGeometry, TSUBezierPath;

@interface TSDGroupLayout <TSDWrappableParent>
{
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect mBoundsForStandardKnobs;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    NSOrderedSet *mCachedGroupedChildren;
    _Bool mHasInvalidated;
}

- (void).cxx_destruct;
- (id)p_groupedChildren;
- (void)p_invalidateParentForWrap;
- (void)p_destroyDynamicCopies;
- (void)setDynamicGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (_Bool)descendentWrappablesContainsWrappable:(id)arg1;
- (id)descendentWrappables;
- (struct CGRect)alignmentFrameForCaptionEdgeInsetsCalculation;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(_Bool)arg3;
- (struct CGRect)rectInRootForCalculatingActivityLineEndpoint;
- (id)pathForClippingConnectionLines;
- (id)i_wrapPathIncludingTitleAndCaption;
- (id)i_wrapPath;
- (id)i_computeWrapPath;
- (id)p_childWrapPathsFrom:(id)arg1 inDescendents:(id)arg2 includingTitleAndCaption:(_Bool)arg3;
- (_Bool)supportsParentFlipping;
- (_Bool)supportsFlipping;
- (_Bool)canFlip;
- (_Bool)supportsRotation;
- (_Bool)supportsInspectorPositioning;
- (_Bool)allowsConnections;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)providesGuidesForChildLayouts;
- (void)dragBy:(struct CGPoint)arg1;
- (_Bool)isDraggable;
- (void)invalidateExteriorWrap;
- (void)updateChildrenFromInfo;
- (void)invalidate;
- (void)i_clearInvalidationCache;
- (void)endDynamicOperation;
- (struct CGSize)minimumSize;
- (_Bool)resizeMayChangeAspectRatio;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (id)computeInfoGeometryDuringResize;
- (void)beginDynamicOperation;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (_Bool)shouldBeIncludedInParentFrameForCulling;
- (struct CGRect)alignmentFrame;
- (void)updateLayoutGeometryInPreparationForPartitioning;
- (struct CGRect)clipRect;
- (struct CGRect)frameForCaptionPositioning;
- (struct CGRect)boundsForStandardKnobs;
- (void)processChangedProperty:(int)arg1;
- (struct CGRect)rectInRootForSelectionPath:(id)arg1;
- (id)computeLayoutGeometry;
- (struct CGRect)computeBoundsForStandardKnobs;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (id)reliedOnLayouts;
- (id)layoutGeometryFromInfo;
- (id)childInfosForChildLayouts;
- (id)visibleGeometries;
- (id)p_groupInfo;

@end
