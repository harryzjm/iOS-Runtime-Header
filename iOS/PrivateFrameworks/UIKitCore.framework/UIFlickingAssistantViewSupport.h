//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIInputViewSetPlacement, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIFlickingAssistantViewSupport
{
    UIPanGestureRecognizer *_panRecognizer;
    long long _position;
    long long _lastMinimizedPosition;
    long long _visualState;
    struct CGPoint _initalTouchPoint;
    _Bool _shouldNotifyCompletion;
    _Bool _isCompact;
    UIInputViewSetPlacement *_remotePlacement;
    long long _draggingState;
}

@property(nonatomic) long long draggingState; // @synthesize draggingState=_draggingState;
@property(retain, nonatomic) UIInputViewSetPlacement *remotePlacement; // @synthesize remotePlacement=_remotePlacement;
@property(nonatomic, setter=setCompact:) _Bool isCompact; // @synthesize isCompact=_isCompact;
- (void)_updateKeyboardLayoutGuideForAssistantFrame:(struct CGRect)arg1;
- (void)didUpdateTransition;
- (struct CGRect)assistantFrame;
- (unsigned long long)assistantPosition;
- (struct CGPoint)keyboardOriginFromAssistantViewPosition:(long long)arg1;
- (void)updateTransition:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (struct CGPoint)barOriginFromTouchPoint:(struct CGPoint)arg1;
- (struct CGPoint)projectedLandingPointForGestureRecognizerEnd:(id)arg1;
- (void)transitToDraggingVisualState:(long long)arg1 withTouchLocation:(struct CGPoint)arg2;
- (_Bool)isInputAssistantItemHidden;
- (void)panGestureHandler:(id)arg1;
- (void)_initalizePosition;
- (void)_updatedController;
- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)dealloc;

@end
