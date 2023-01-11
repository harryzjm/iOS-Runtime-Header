//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIPanGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface _TVNonFocusSwipeUpCapture : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_initiallyFocusedView;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    UIPanGestureRecognizer *_gestureRecognizer;
    id _target;
    SEL _action;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)_onPan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
