//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSKChangeSourceObserver-Protocol.h>
#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>
#import <iWorkImport/TSWPStorageObserver-Protocol.h>

@class NSString, TSDWrapSegments, TSWPLayout, TSWPPadding, TSWPStorage;
@protocol TSWPShapeLayoutDelegate;

__attribute__((visibility("hidden")))
@interface TSWPShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver, TSKChangeSourceObserver>
{
    TSDWrapSegments *_cachedInteriorWrapSegments;
    _Bool _observingStorage;
    TSWPStorage *_observedStorage;
    TSWPLayout *_containedLayout;
    id <TSWPShapeLayoutDelegate> _delegate;
}

@property(nonatomic) __weak id <TSWPShapeLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TSWPLayout *containedLayout; // @synthesize containedLayout=_containedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (_Bool)parentAutosizes;
- (void)setGeometry:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (id)pathSource;
- (struct CGPoint)autosizePositionOffsetForFixedWidth:(_Bool)arg1 height:(_Bool)arg2;
- (struct CGPoint)autosizePositionOffset;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1;
- (struct CGAffineTransform)autosizedTransform;
- (struct CGAffineTransform)computeLayoutTransform;
- (id)dependentLayouts;
- (_Bool)textLayoutShouldLayoutVertically:(id)arg1;
- (_Bool)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
@property(readonly, nonatomic) _Bool autosizes;
- (id)interiorClippingPath;
- (id)textWrapper;
- (id)interiorWrapPath;
- (id)interiorWrapSegments;
- (void)updateChildrenFromInfo;
- (void)createContainedLayoutForEditing;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (_Bool)isInvisibleAutosizingShape;
- (void)createContainedLayoutForInstructionalText;
- (_Bool)p_isEmptyParagraphWithFillOrBorders;
- (_Bool)p_isEmptyList;
- (_Bool)p_hasVisibleContents;
- (void)invalidatePath;
- (void)invalidateSize;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (void)setChildren:(id)arg1;
- (id)children;
- (void)willBeRemovedFromLayoutController:(id)arg1;
- (void)willBeAddedToLayoutController:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (double)maxAutoGrowWidthForTextLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double textScaleFactor;

@end

