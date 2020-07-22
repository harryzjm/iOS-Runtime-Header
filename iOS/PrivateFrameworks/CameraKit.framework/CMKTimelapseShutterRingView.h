//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface CMKTimelapseShutterRingView : UIView
{
    _Bool _animating;
    CALayer *__smallTickLayer;
    CALayer *__largeTickLayer;
    CAReplicatorLayer *__smallTickReplicatorLayer;
    CAReplicatorLayer *__largeTickReplicatorLayer;
    CALayer *__timerHandLayer;
    CALayer *__timerHandParentLayer;
}

@property(readonly, nonatomic) CALayer *_timerHandParentLayer; // @synthesize _timerHandParentLayer=__timerHandParentLayer;
@property(readonly, nonatomic) CALayer *_timerHandLayer; // @synthesize _timerHandLayer=__timerHandLayer;
@property(readonly, nonatomic) CAReplicatorLayer *_largeTickReplicatorLayer; // @synthesize _largeTickReplicatorLayer=__largeTickReplicatorLayer;
@property(readonly, nonatomic) CAReplicatorLayer *_smallTickReplicatorLayer; // @synthesize _smallTickReplicatorLayer=__smallTickReplicatorLayer;
@property(readonly, nonatomic) CALayer *_largeTickLayer; // @synthesize _largeTickLayer=__largeTickLayer;
@property(readonly, nonatomic) CALayer *_smallTickLayer; // @synthesize _smallTickLayer=__smallTickLayer;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (double)_rotationZFromTransform:(struct CATransform3D)arg1;
- (void)_addStopAnimations;
- (void)_addStartAnimations;
- (_Bool)_shouldUseAnimations;
- (void)_removeStopAnimations;
- (void)_removeStartAnimations;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
