//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PencilKit/NSObject-Protocol.h>

@class CAEAGLLayer, PKDrawing;

@protocol PKControllerDelegate <NSObject>
- (void)drawingChanged:(PKDrawing *)arg1;
- (CAEAGLLayer *)glLayer;
- (_Bool)setNeedsDrawingDisplay;
- (void)setAllowLiveInteraction:(_Bool)arg1;
@end

