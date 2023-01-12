//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDStyledLayout.h>

@class KNLiveVideoInfo;

@interface KNLiveVideoLayout : TSDStyledLayout
{
    struct CGRect _cachedAlignmentFrame;
    _Bool _isCachedAlignmentFrameValid;
    _Bool _shouldRenderFrameStroke;
    struct CGRect _videoMaskBounds;
}

@property(readonly, nonatomic) _Bool shouldRenderFrameStroke; // @synthesize shouldRenderFrameStroke=_shouldRenderFrameStroke;
@property(readonly, nonatomic) struct CGRect videoMaskBounds; // @synthesize videoMaskBounds=_videoMaskBounds;
- (id)p_makeRoundedRectangleMaskPathSource;
- (id)videoMaskPathForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isVideoMaskPathRectangular;
@property(readonly, nonatomic) double maskCornerRadius;
@property(readonly, nonatomic) long long effectiveMaskKind;
- (struct CGPoint)p_normalizedOffset;
@property(readonly, nonatomic) double scale;
- (id)stroke;
- (_Bool)isStrokeBeingManipulated;
- (_Bool)supportsRotation;
- (struct CGRect)videoBoundsForNaturalSize:(struct CGSize)arg1;
- (struct CGRect)p_computeAlignmentFrameInRoot:(_Bool)arg1;
- (void)p_invalidateAlignmentFrame;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGRect)alignmentFrame;
- (double)scaleForInlineClampingUnrotatedSize:(struct CGSize)arg1 withTransform:(struct CGAffineTransform)arg2;
- (struct CGRect)boundsForStandardKnobs;
- (void)setGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (void)processChangedProperty:(int)arg1;
@property(readonly, nonatomic) KNLiveVideoInfo *liveVideoInfo;
- (id)initWithInfo:(id)arg1;

@end
