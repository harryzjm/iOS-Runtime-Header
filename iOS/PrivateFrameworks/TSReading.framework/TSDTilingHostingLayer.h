//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, TSDInteractiveCanvasController;

@interface TSDTilingHostingLayer
{
    NSMutableSet *mDirtyTilingLayers;
    TSDInteractiveCanvasController *mController;
}

@property(nonatomic) TSDInteractiveCanvasController *controller; // @synthesize controller=mController;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)p_commonInit;

@end
