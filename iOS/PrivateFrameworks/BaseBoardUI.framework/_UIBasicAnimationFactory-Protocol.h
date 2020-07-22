//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoardUI/NSObject-Protocol.h>

@class CABasicAnimation, CAMediaTimingFunction, NSString, UIView;

@protocol _UIBasicAnimationFactory <NSObject>
- (CABasicAnimation *)_basicAnimationForView:(UIView *)arg1 withKeyPath:(NSString *)arg2;

@optional
- (_Bool)_shouldAnimateAdditivelyForView:(UIView *)arg1 withKeyPath:(NSString *)arg2;
- (CAMediaTimingFunction *)_timingFunctionForAnimationInView:(UIView *)arg1 withKeyPath:(NSString *)arg2;
- (CAMediaTimingFunction *)_timingFunctionForAnimation;
@end

