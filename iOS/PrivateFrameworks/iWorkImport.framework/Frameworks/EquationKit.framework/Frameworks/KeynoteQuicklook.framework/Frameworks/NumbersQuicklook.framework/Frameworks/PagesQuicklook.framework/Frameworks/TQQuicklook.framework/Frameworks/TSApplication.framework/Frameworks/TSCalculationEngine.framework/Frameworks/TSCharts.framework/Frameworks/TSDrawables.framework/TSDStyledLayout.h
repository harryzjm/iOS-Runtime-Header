//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TSDStyledLayout
{
    _Bool mIsUpdatingOpacity;
    double mDynamicOpacity;
    _Bool _suppressesShadowsAndReflections;
}

@property(nonatomic) _Bool suppressesShadowsAndReflections; // @synthesize suppressesShadowsAndReflections=_suppressesShadowsAndReflections;
- (_Bool)isInvisible;
@property(readonly, nonatomic) double opacity;
- (struct CGRect)frameForCullingWithBaseFrame:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;
- (struct CGRect)baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)reflectionFrameForSubRect:(struct CGRect)arg1;
- (struct CGRect)reflectionFrame;
- (struct CGRect)i_baseFrame;
- (struct CGRect)reflectionBoundsForRect:(struct CGRect)arg1;
- (struct CGRect)shadowedNaturalBoundsWithoutOffset;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;
- (double)scaleToApplyToPathSourceNaturalSizeApplyingLayoutTransform:(struct CGAffineTransform)arg1 withStartingPathSource:(id)arg2;
- (id)styledInfo;

@end
