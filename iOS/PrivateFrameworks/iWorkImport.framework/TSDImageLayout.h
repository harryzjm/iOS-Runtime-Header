//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSDImageAdjustments, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDImageLayout
{
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    struct CGPath *mPathToStroke;
    struct CGAffineTransform mLayoutToImageTransform;
    struct CGAffineTransform mLayoutToMaskTransform;
    _Bool mMaskIntersectsImage;
    TSUBezierPath *mTracedPath;
    int mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    int mMaskEditMode;
    _Bool mScalingInMaskMode;
    _Bool mInInstantAlphaMode;
    _Bool mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}

- (void).cxx_destruct;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (_Bool)supportsRotation;
- (id)i_computeWrapPath;
- (struct CGRect)boundsInfluencingExteriorWrap;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (_Bool)isDynamicallyChangingImageAdjustments;
- (id)imageAdjustments;
- (id)maskLayout;
- (struct CGAffineTransform)imageDataToVisualSizeTransform;
- (struct CGAffineTransform)layoutToMaskTransform;
- (struct CGAffineTransform)layoutToImageTransform;
- (struct CGSize)sizeOfFrameRectIncludingCoverage;
- (struct CGPath *)pathToStroke;
- (_Bool)hasMaskingPath;
- (id)imageGeometryInRoot;
- (id)originalImageGeometry;
- (id)imageGeometry;
- (id)imageInfo;
- (struct CGRect)pathBoundsWithoutStroke;
- (id)smartPathSource;
- (void)p_calculateClampModelValuesAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)transferLayoutGeometryToInfo:(id)arg1;
- (_Bool)isInvisible;
- (_Bool)hasAlpha;
- (double)descentForInlineLayout;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (void)updateChildrenFromInfo;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)currentInfoGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

