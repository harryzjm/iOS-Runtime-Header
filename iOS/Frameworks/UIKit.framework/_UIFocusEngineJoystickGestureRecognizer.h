//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIFocusEngineJoystickGestureRecognizer
{
    struct CGPoint _stickPosition;
    struct CGPoint _previousStickPosition;
}

@property(readonly, nonatomic) struct CGPoint previousStickPosition; // @synthesize previousStickPosition=_previousStickPosition;
@property(readonly, nonatomic) struct CGPoint stickPosition; // @synthesize stickPosition=_stickPosition;
- (void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldReceivePress:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

