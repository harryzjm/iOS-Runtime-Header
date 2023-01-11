//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PKCanvasView;

@interface PKCanvasAttachmentView
{
    _Bool __wantsFullyRenderedNotification;
    PKCanvasView *_canvasView;
    double _drawingWidth;
    NSMutableArray *_fullyRenderedCompletionBlocks;
}

@property(retain, nonatomic) NSMutableArray *fullyRenderedCompletionBlocks; // @synthesize fullyRenderedCompletionBlocks=_fullyRenderedCompletionBlocks;
@property(nonatomic) double drawingWidth; // @synthesize drawingWidth=_drawingWidth;
@property(nonatomic) _Bool _wantsFullyRenderedNotification; // @synthesize _wantsFullyRenderedNotification=__wantsFullyRenderedNotification;
@property(nonatomic) __weak PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
- (void).cxx_destruct;
- (double)drawingScale;
- (_Bool)disableTileAnimations;
- (void)fullyRendered;
- (_Bool)wantsFullyRendered;
- (void)drawingDidChange;

@end
