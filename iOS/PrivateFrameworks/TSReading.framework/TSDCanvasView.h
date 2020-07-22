//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class TSDCanvasLayer, TSDInteractiveCanvasController, TSKScrollView;
@protocol TSDCanvasLayerHosting;

@interface TSDCanvasView : UIView
{
    TSDInteractiveCanvasController *mController;
    id <TSDCanvasLayerHosting> mLayerHost;
}

+ (Class)layerClass;
@property(nonatomic) TSDInteractiveCanvasController *controller; // @synthesize controller=mController;
@property(nonatomic) id <TSDCanvasLayerHosting> layerHost; // @synthesize layerHost=mLayerHost;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) TSDCanvasView *rootCanvasView;
@property(readonly) TSKScrollView *enclosingScrollView;
@property(readonly, nonatomic) TSDCanvasLayer *canvasLayer;
- (void)teardown;

@end
