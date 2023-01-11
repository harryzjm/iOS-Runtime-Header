//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PDFPageLayerSelectionEffect
{
}

- (id)_createSelectionLollipop:(double)arg1 isLeftSide:(_Bool)arg2;
- (void)_generateSelectionIsFirstPage:(_Bool)arg1 isLastPage:(_Bool)arg2;
- (void)_updateHandleGraphics;
- (void)_updateGraphics;
- (void)enableTextSelectionHandles;
- (void)clearTextSelectionHandles;
- (struct CGImage *)_createTextMagnifierContentsImageAtPagePoint:(struct CGPoint)arg1 forLoupeType:(int)arg2 forSize:(struct CGSize)arg3;
- (void)_processloupeRenderRequest;
- (void)_updateMagnificationLoupeLayer:(int)arg1 withPagePoint:(struct CGPoint)arg2;
- (id)_createMagnificationLoupeLayer:(int)arg1;
- (void)setLollipopMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearLollipopMagnifier;
- (void)setTextSelectionMagnifierPagePoint:(struct CGPoint)arg1;
- (void)clearTextSelectionMagnifier;
- (id)_activeColor;
- (void)_generateRects;
- (void)setSelection:(id)arg1;
- (void)update;
- (id)selection;
- (void)dealloc;
- (id)initWithPDFPageLayer:(id)arg1;

@end
