//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class NSArray, PKDrawing, PKInk, PKStroke, PKTiledCanvasView, UITouch, UIView;
@protocol UICoordinateSpace;

@protocol PKTiledCanvasViewDelegate <NSObject>

@optional
- (id <UICoordinateSpace>)canvasViewContentCoordinateSpace:(PKTiledCanvasView *)arg1;
- (_Bool)canvasViewShouldCombineStrokes:(PKTiledCanvasView *)arg1;
- (_Bool)canvasView:(PKTiledCanvasView *)arg1 shouldDelayDrawingBeganWithTouch:(UITouch *)arg2;
- (struct CGAffineTransform)canvasView:(PKTiledCanvasView *)arg1 transformForStroke:(PKStroke *)arg2;
- (PKInk *)canvasView:(PKTiledCanvasView *)arg1 inkForStroke:(PKStroke *)arg2;
- (void)replayCanvasViewDrawingMoved:(PKTiledCanvasView *)arg1 inputPoint:(CDStruct_f37d75ce)arg2;
- (_Bool)canvasViewShouldDisableShapeRecognition:(PKTiledCanvasView *)arg1;
- (void)canvasViewInvalidateTiles:(PKTiledCanvasView *)arg1;
- (void)canvasView:(PKTiledCanvasView *)arg1 didPresentWithCanvasOffset:(struct CGPoint)arg2;
- (UIView *)canvasViewTouchView:(PKTiledCanvasView *)arg1;
- (void)canvasView:(PKTiledCanvasView *)arg1 registerUndoCommands:(NSArray *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 registerMultiStepUndoCommands:(NSArray *)arg2;
- (void)_canvasViewDidEraseStrokes:(NSArray *)arg1;
- (_Bool)canvasView:(PKTiledCanvasView *)arg1 shouldBeginDrawingWithTouch:(UITouch *)arg2;
- (void)_canvasView:(PKTiledCanvasView *)arg1 didFinishRenderingNewStrokes:(NSArray *)arg2 inDrawing:(PKDrawing *)arg3 forPreview:(_Bool)arg4;
- (void)canvasViewHasVisibleStrokesChanged:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidFinishAnimatingStrokes:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidEndDrawing:(PKTiledCanvasView *)arg1;
- (void)canvasViewDrawingMoved:(PKTiledCanvasView *)arg1 withTouch:(UITouch *)arg2;
- (void)canvasViewDidBeginDrawing:(PKTiledCanvasView *)arg1;
- (void)_canvasViewWillBeginDrawing:(PKTiledCanvasView *)arg1;
- (void)canvasView:(PKTiledCanvasView *)arg1 endedStroke:(PKStroke *)arg2 shapeStrokes:(NSArray *)arg3;
- (void)canvasView:(PKTiledCanvasView *)arg1 endedStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 cancelledStroke:(PKStroke *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 beganStroke:(PKStroke *)arg2;
- (void)canvasViewWillBeginNewStroke:(PKTiledCanvasView *)arg1 withTouch:(UITouch *)arg2 location:(struct CGPoint)arg3;
- (void)canvasView:(PKTiledCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
@end

