//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSDrawables/TSDStyledRep.h>

@class KNLiveVideoInfo, KNLiveVideoLayout, TSDFrameRep, _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper;

@interface KNLiveVideoRep : TSDStyledRep
{
    TSDFrameRep *_frameRep;
    _TtC16KeynoteQuicklook36KNLiveVideoSourceSymbolDrawingHelper *_symbolDrawingHelper;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
+ (id)p_sourceSymbolDrawingHelperForSource:(id)arg1 reusingSourceSymbolDrawingHelperIfPossible:(id)arg2;
- (void).cxx_destruct;
- (void)calculateTextureClipBounds:(struct CGRect *)arg1 andOffset:(struct CGPoint *)arg2 withTransform:(struct CGAffineTransform *)arg3 andRectOnCanvas:(struct CGRect *)arg4 textureDescription:(id)arg5 isUsingImageTexture:(_Bool)arg6;
- (_Bool)p_shouldUseImageTexture;
- (id)newVideoBackgroundFillTextureWithClipBounds:(struct CGRect)arg1 offset:(struct CGPoint)arg2 transform:(struct CGAffineTransform)arg3 contentRect:(struct CGRect)arg4;
- (struct CGImage *)newTextureMaskImageForViewScale:(double)arg1 includeFrameMask:(_Bool)arg2 maskRect:(struct CGRect *)arg3;
- (id)textureForDescription:(id)arg1;
- (void)p_drawBackgroundFillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)p_hasBackgroundFill;
- (_Bool)p_shouldRenderStroke:(id)arg1;
- (_Bool)p_shouldRenderFrameStroke;
- (void)p_updateFrameRep;
- (struct CGRect)p_antialiasingDefeatedRectForRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)p_posterImageProvider;
- (id)p_effectiveColorSet;
- (struct CGRect)p_antialiasingDefeatedVideoMaskBoundsInContext:(struct CGContext *)arg1;
- (void)p_drawSymbolInContext:(struct CGContext *)arg1;
- (void)p_drawPosterImageWithProvider:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)p_drawShadowOrHitTestImageInContext:(struct CGContext *)arg1;
- (void)p_drawOffStateRepresentationInContext:(struct CGContext *)arg1 forShadowOrHitTest:(_Bool)arg2;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 opacity:(double)arg4 withMask:(_Bool)arg5 forShadowOrHitTest:(_Bool)arg6;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (_Bool)isPlaceholder;
- (void)willBeRemoved;
@property(readonly, nonatomic) KNLiveVideoLayout *liveVideoLayout;
@property(readonly, nonatomic) KNLiveVideoInfo *liveVideoInfo;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

