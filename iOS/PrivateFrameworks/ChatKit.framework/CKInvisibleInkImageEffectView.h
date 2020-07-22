//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CAAnimationDelegate-Protocol.h>

@class CAEmitterLayer, CALayer, NSString;

@interface CKInvisibleInkImageEffectView <CAAnimationDelegate>
{
    CALayer *_blurredImageLayer;
    CALayer *_blurredImageContainerLayer;
    CALayer *_drawEmitterContainerLayer;
    CAEmitterLayer *_drawEmitterLayer;
    CALayer *_dustEmitterContainerLayer;
    CAEmitterLayer *_dustEmitterLayer;
}

@property(retain, nonatomic) CAEmitterLayer *dustEmitterLayer; // @synthesize dustEmitterLayer=_dustEmitterLayer;
@property(retain, nonatomic) CALayer *dustEmitterContainerLayer; // @synthesize dustEmitterContainerLayer=_dustEmitterContainerLayer;
@property(retain, nonatomic) CAEmitterLayer *drawEmitterLayer; // @synthesize drawEmitterLayer=_drawEmitterLayer;
@property(retain, nonatomic) CALayer *drawEmitterContainerLayer; // @synthesize drawEmitterContainerLayer=_drawEmitterContainerLayer;
@property(retain, nonatomic) CALayer *blurredImageContainerLayer; // @synthesize blurredImageContainerLayer=_blurredImageContainerLayer;
@property(retain, nonatomic) CALayer *blurredImageLayer; // @synthesize blurredImageLayer=_blurredImageLayer;
- (void).cxx_destruct;
- (void)setPaused:(_Bool)arg1;
- (void)setSuspended:(_Bool)arg1;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)endDustEmitterFingerEffects;
- (void)setRandomAttractorsEnabled:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)endDrawEmitterEffects;
- (void)disableBlending;
- (void)enableBlending;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)addDustRandomEmitterAnimationsWithSize:(struct CGSize)arg1;
- (void)setupDustEmitter;
- (void)setupDrawEmitter;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
