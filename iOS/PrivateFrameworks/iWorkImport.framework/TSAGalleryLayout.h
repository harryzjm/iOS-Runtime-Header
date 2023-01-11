//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iWorkImport/TSWPColumnMetrics-Protocol.h>
#import <iWorkImport/TSWPLayoutParent-Protocol.h>

@class NSArray, NSMapTable, TSAGalleryItem, TSDLayoutGeometry, TSUBezierPath, TSWPLayout, TSWPPadding;

__attribute__((visibility("hidden")))
@interface TSAGalleryLayout <TSWPLayoutParent, TSWPColumnMetrics>
{
    struct CGRect _imageRectInImageContainer;
    TSWPLayout *_galleryCaptionLayout;
    NSMapTable *_captionLayoutsForItems;
    NSArray *_captionLayouts;
    _Bool _isInvalidatingSize;
    TSUBezierPath *_cachedPathForClippingConnectionLines;
    TSAGalleryItem *_currentItem;
    struct CGRect _imageContainerRect;
    struct CGRect _pageControlBoundingRect;
}

+ (double)p_constrainedDimensionForDimension:(double)arg1 min:(double)arg2 max:(double)arg3;
@property(readonly, nonatomic) struct CGRect pageControlBoundingRect; // @synthesize pageControlBoundingRect=_pageControlBoundingRect;
@property(readonly, nonatomic) struct CGRect imageContainerRect; // @synthesize imageContainerRect=_imageContainerRect;
@property(retain, nonatomic) TSAGalleryItem *currentItem; // @synthesize currentItem=_currentItem;
- (void).cxx_destruct;
- (id)additionalGuides;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
- (struct CGSize)adjustedInsetsForTarget:(id)arg1;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double *)arg4 outGap:(double *)arg5;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (id)interiorClippingPath;
- (Class)repClassForTextLayout:(id)arg1;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (int)verticalAlignmentForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (id)pathForClippingConnectionLines;
- (struct CGRect)boundsForStandardKnobs;
- (id)infoGeometryForFittingInFrame:(struct CGRect)arg1;
- (struct CGRect)imageFrameInRootWithDragOffset:(struct CGPoint)arg1;
- (struct CGRect)imageRectInImageContainerForItem:(id)arg1;
@property(readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property(readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property(readonly, nonatomic) struct CGRect imageRect;
@property(readonly, nonatomic) TSDLayoutGeometry *imageContainerGeometry;
- (struct CGSize)p_maximumLayoutSize;
- (struct CGSize)minimumSize;
- (double)p_minScaleForItem:(id)arg1;
- (struct CGRect)p_imageRectInImageContainerForItem:(id)arg1 dragOffset:(struct CGPoint)arg2;
- (id)computeLayoutGeometry;
- (void)invalidateExteriorWrap;
- (void)invalidateSize;
- (void)updateChildrenFromInfo;
- (id)children;
@property(readonly, nonatomic) TSWPLayout *currentCaptionLayout;
- (id)p_galleryInfo;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) double textScaleFactor;

@end

