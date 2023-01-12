//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKInvisibleInkEffectView.h"

@class CAEmitterLayer, CALayer, NSString, UITextView;

__attribute__((visibility("hidden")))
@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView
{
    _Bool _blendingEnabled;
    UITextView *_textView;
    CALayer *_emojiContainerLayer;
    CALayer *_emojiLayer;
    CAEmitterLayer *_drawEmitterLayer;
    CALayer *_dustContainerLayer;
    CAEmitterLayer *_dustEmitterLayer;
    CALayer *_blurredEmojiLayer;
    CALayer *_maskLayer;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool blendingEnabled; // @synthesize blendingEnabled=_blendingEnabled;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *blurredEmojiLayer; // @synthesize blurredEmojiLayer=_blurredEmojiLayer;
@property(retain, nonatomic) CAEmitterLayer *dustEmitterLayer; // @synthesize dustEmitterLayer=_dustEmitterLayer;
@property(retain, nonatomic) CALayer *dustContainerLayer; // @synthesize dustContainerLayer=_dustContainerLayer;
@property(retain, nonatomic) CAEmitterLayer *drawEmitterLayer; // @synthesize drawEmitterLayer=_drawEmitterLayer;
@property(retain, nonatomic) CALayer *emojiLayer; // @synthesize emojiLayer=_emojiLayer;
@property(retain, nonatomic) CALayer *emojiContainerLayer; // @synthesize emojiContainerLayer=_emojiContainerLayer;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setSuspended:(_Bool)arg1;
- (void)setPaused:(_Bool)arg1;
- (void)endEmittersForTouchesCancelled:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)endEmittersForTouchesEnded:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)moveEmittersForTouchesMoved:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)moveEmittersForTouchesBegan:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)endTouches;
- (void)endDustEmitterLayerFingerEffects;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)reset;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)endDrawEmitterEffects;
- (void)disableBlending;
- (void)enableBlending;
- (void)detachFromBalloonView;
- (void)attachToBalloonView:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)layoutSubviews;
- (void)createDrawEmitter;
- (void)createDustEmitter;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

