//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProductKit/NSObject-Protocol.h>

@class SCNScene;
@protocol SCNSceneRenderer;

@protocol SCNSceneRendererDelegate <NSObject>

@optional
- (void)renderer:(id <SCNSceneRenderer>)arg1 didRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 willRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didApplyConstraintsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 updateAtTime:(double)arg2;
@end

