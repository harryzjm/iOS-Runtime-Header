//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CADisplayLink, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UITouchDurationObservingGestureRecognizer
{
    CADisplayLink *_displayLink;
    double _minimumDurationRequired;
    double _allowableMovement;
    double _touchForce;
    double _touchStartTimestamp;
    UIDelayedAction *_delayedAction;
    struct CGPoint _originalCentroid;
}

@property(readonly, nonatomic) UIDelayedAction *delayedAction; // @synthesize delayedAction=_delayedAction;
@property(nonatomic) struct CGPoint originalCentroid; // @synthesize originalCentroid=_originalCentroid;
@property(nonatomic) double touchStartTimestamp; // @synthesize touchStartTimestamp=_touchStartTimestamp;
@property(readonly, nonatomic) double touchForce; // @synthesize touchForce=_touchForce;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumDurationRequired; // @synthesize minimumDurationRequired=_minimumDurationRequired;
- (void).cxx_destruct;
- (void)_cancelOrFail;
- (_Bool)_exceededNumberOfTouchesForEvent:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)_performDelayedBegin;
- (void)_displayLinkDidFire:(id)arg1;
@property(readonly, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) double touchDuration;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
