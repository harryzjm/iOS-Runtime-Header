//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface UIView (PUAnimationGroup)
+ (void)_pu_animateViews:(id)arg1 withAnimationBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)pu_animateViews:(id)arg1 usingSpringWithDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 mass:(double)arg5 stiffness:(double)arg6 damping:(double)arg7 initialVelocity:(double)arg8 animations:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;
+ (void)pu_animateViews:(id)arg1 usingDefaultDampedSpringWithDelay:(double)arg2 initialSpringVelocity:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)pu_animateViews:(id)arg1 withDuration:(double)arg2 delay:(double)arg3 usingSpringWithDamping:(double)arg4 initialSpringVelocity:(double)arg5 options:(unsigned long long)arg6 animations:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)pu_animateViews:(id)arg1 withDuration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_pu_animationDictionary;
@end

