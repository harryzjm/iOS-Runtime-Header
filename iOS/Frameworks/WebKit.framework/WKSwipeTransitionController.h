//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/_UINavigationInteractiveTransitionBaseDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate>
{
    struct ViewGestureController *_gestureController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _backTransitionController;
    struct RetainPtr<_UINavigationInteractiveTransitionBase> _forwardTransitionController;
    struct WeakObjCPtr<UIView> _gestureRecognizerView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isNavigationSwipeGestureRecognizer:(id)arg1;
- (id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
- (_Bool)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3;
- (_Bool)shouldBeginInteractiveTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (int)directionForTransition:(id)arg1;
- (void)invalidate;
- (id)initWithViewGestureController:(struct ViewGestureController *)arg1 gestureRecognizerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

