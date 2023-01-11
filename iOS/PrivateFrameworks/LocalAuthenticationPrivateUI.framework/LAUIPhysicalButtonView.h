//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol UICoordinateSpace;

@interface LAUIPhysicalButtonView : UIView
{
    id <UICoordinateSpace> _fixedCoordinateSpace;
    id <UICoordinateSpace> _coordinateSpace;
    unsigned int _edge;
    _Bool _onScreen;
    UIView *_containerView;
    UILabel *_instructionLabel;
    UIView *_buttonView;
    _Bool _animating;
    double _animationLength;
    NSString *_periodicAnimationKey;
    long long _style;
    NSString *_instruction;
}

@property(copy, nonatomic) NSString *instruction; // @synthesize instruction=_instruction;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_setOnScreen:(_Bool)arg1;
- (void)_removePeriodicAnimationForKey:(id)arg1 fromLayer:(id)arg2;
- (void)_endAnimationIfNecessary;
- (void)_animateWithLength:(double)arg1 delay:(double)arg2;
- (void)_animateWithLength:(double)arg1;
- (void)_beginAnimationIfNecessaryWithDelay:(double)arg1;
- (void)_beginAnimationIfNecessary;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateFrame;
- (void)didMoveToWindow;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

