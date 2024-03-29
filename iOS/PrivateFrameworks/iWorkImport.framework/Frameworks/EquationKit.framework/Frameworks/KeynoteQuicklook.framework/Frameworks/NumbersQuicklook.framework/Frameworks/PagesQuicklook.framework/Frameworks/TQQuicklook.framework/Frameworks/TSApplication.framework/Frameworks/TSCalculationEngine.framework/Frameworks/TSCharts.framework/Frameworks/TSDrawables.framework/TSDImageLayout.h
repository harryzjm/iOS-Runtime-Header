//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSDMediaLayout.h"

@class TSDImageAdjustments, TSDImageInfo, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout;

@interface TSDImageLayout : TSDMediaLayout
{
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    struct CGPath *mPathToStroke;
    struct CGAffineTransform mLayoutToImageTransform;
    struct CGAffineTransform mLayoutToMaskTransform;
    _Bool mMaskIntersectsImage;
    struct CGSize mLastParentLimitedSize;
    unsigned long long mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    long long mMaskEditMode;
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
@property(readonly, nonatomic) TSDMaskLayout *maskLayout;
@property(readonly, nonatomic) struct CGAffineTransform imageDataToVisualSizeTransform;
@property(readonly, nonatomic) struct CGAffineTransform layoutToMaskTransform;
@property(readonly, nonatomic) struct CGAffineTransform layoutToImageTransform;
- (struct CGSize)sizeOfFrameRectIncludingCoverage;
@property(readonly, nonatomic) struct CGPath *pathToStroke;
@property(readonly, nonatomic) _Bool hasMaskingPath;
@property(readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property(readonly, nonatomic) TSDLayoutGeometry *originalImageGeometry;
@property(readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property(readonly, nonatomic) TSDImageInfo *imageInfo;
- (struct CGRect)pathBoundsWithoutStroke;
- (id)smartPathSource;
- (void)p_calculateClampModelValuesWithAdditionalTransform:(struct CGAffineTransform)arg1 andPerformBlock:(CDUnknownBlockType)arg2;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(_Bool)arg3;
- (_Bool)isInvisible;
- (_Bool)hasAlpha;
- (double)descentForInlineLayout;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (struct CGRect)computeAlignmentFrameInRoot:(_Bool)arg1;
- (void)updateChildrenFromInfo;
- (id)childInfosForChildLayouts;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withTransform:(struct CGAffineTransform)arg2;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
@property(readonly, nonatomic) TSDInfoGeometry *currentInfoGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

