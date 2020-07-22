//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;
@protocol _MKUserInteractionGestureRecognizerTouchObserver;

__attribute__((visibility("hidden")))
@interface _MKUserInteractionGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    id <_MKUserInteractionGestureRecognizerTouchObserver> _touchObserver;
}

@property(nonatomic) __weak id <_MKUserInteractionGestureRecognizerTouchObserver> touchObserver; // @synthesize touchObserver=_touchObserver;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

