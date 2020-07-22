//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class PKDrawing, PKStroke, UITouch;

@protocol PKInternalDrawingViewDelegate <NSObject>
- (void)drawingCancelled;
- (void)didFinishRenderingStroke:(PKStroke *)arg1 inDrawing:(PKDrawing *)arg2;
- (void)willBeginDrawingWithTouch:(UITouch *)arg1;
- (_Bool)canBeginDrawingWithTouch:(UITouch *)arg1;
- (void)renderingDidFinish;
- (void)drawingDidChange:(PKDrawing *)arg1;
- (void)setIsDrawing:(_Bool)arg1;
@end

