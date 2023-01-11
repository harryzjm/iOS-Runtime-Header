//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKDrawing, PKStroke, PKTiledCanvasView, UITouch;

@protocol PKTiledCanvasViewDelegate <NSObject>

@optional
- (void)_canvasView:(PKTiledCanvasView *)arg1 didFinishRenderingStrokeOnRenderQueue:(PKStroke *)arg2 inDrawing:(PKDrawing *)arg3;
- (void)canvasViewDidEndStroke:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidCancelStroke:(PKTiledCanvasView *)arg1;
- (void)canvasViewDidBeginNewStroke:(PKTiledCanvasView *)arg1;
- (void)canvasViewWillBeginNewStroke:(PKTiledCanvasView *)arg1 withTouch:(UITouch *)arg2;
- (void)canvasView:(PKTiledCanvasView *)arg1 drawingDidChange:(PKDrawing *)arg2;
@end

