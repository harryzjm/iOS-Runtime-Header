//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDelayedAction, UIView;
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer
{
    UIDelayedAction *_touchDelay;
    struct CGPoint _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}

+ (_Bool)_shouldDefaultToTouches;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)dealloc;
- (void)sendDelayedTouches;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)arg1;
- (void)sendTouchesShouldBeginForTouches:(id)arg1 withEvent:(id)arg2;
- (void)clearTimer;
- (id)_clientView;

@end
