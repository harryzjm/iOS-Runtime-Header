//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPinchGestureRecognizer.h>

@interface OKSynopsisGestureRecognizer : UIPinchGestureRecognizer
{
    double _lastScale;
    unsigned long long _currentType;
    id _target;
    SEL _action;
    unsigned long long _gestureType;
}

@property(readonly, nonatomic) unsigned long long gestureType; // @synthesize gestureType=_gestureType;
@property(readonly, nonatomic) double progress;
- (void)handle:(id)arg1;
- (_Bool)shouldCompleteGesture;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

