//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSWPEquationFloatingLayout, TSWPEquationInfo;

@interface TSWPEquationRep
{
    _Bool _layerContentsAreFlipped;
}

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3;
@property(nonatomic) _Bool layerContentsAreFlipped; // @synthesize layerContentsAreFlipped=_layerContentsAreFlipped;
- (id)resizedGeometryForTransform:(struct CGAffineTransform)arg1;
- (_Bool)canDrawShadowInOneStepWithChildren:(_Bool)arg1;
- (_Bool)p_drawsInOneStep;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 forLayer:(_Bool)arg6 forShadow:(_Bool)arg7 forHitTest:(_Bool)arg8;
- (_Bool)p_shouldFlipShadowsInContext:(struct CGContext *)arg1 forLayer:(_Bool)arg2;
- (_Bool)canDrawInParallel;
- (id)imageOfStroke:(struct CGRect *)arg1;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 strokeDrawOptions:(unsigned long long)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (struct CGRect)clipRect;
- (_Bool)canPasteDataFromPhysicalKeyboard:(id)arg1;
- (_Bool)shouldAllowReplacementFromPaste;
- (void)willBeRemoved;
- (_Bool)isPlaceholder;
@property(readonly, nonatomic) TSWPEquationFloatingLayout *equationLayout;
@property(readonly, nonatomic) TSWPEquationInfo *equationInfo;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

