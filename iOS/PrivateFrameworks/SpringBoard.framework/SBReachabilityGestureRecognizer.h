//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class SBReachabilitySettings, SBTouchHistory, UITouch;

@interface SBReachabilityGestureRecognizer : UIGestureRecognizer
{
    _Bool _everTranslatedUpwards;
    _Bool _movedPastHysteresis;
    SBTouchHistory *_touchHistory;
    UITouch *_activeTouch;
    SBReachabilitySettings *_settings;
    struct CGPoint _initialTouchLocation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBReachabilitySettings *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool movedPastHysteresis; // @synthesize movedPastHysteresis=_movedPastHysteresis;
@property(nonatomic) _Bool everTranslatedUpwards; // @synthesize everTranslatedUpwards=_everTranslatedUpwards;
@property(nonatomic) struct CGPoint initialTouchLocation; // @synthesize initialTouchLocation=_initialTouchLocation;
@property(retain, nonatomic) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
