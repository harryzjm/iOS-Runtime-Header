//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CAAnimationGroup.h>

@interface CAAnimationGroup (TSDCAAnimationAdditions)
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (void)p_getValue:(id *)arg1 animation:(id *)arg2 animationPercent:(double *)arg3 forKeyPath:(id)arg4 atTime:(double)arg5 animationCache:(id)arg6;
- (_Bool)TSD_containsAnimationForKeyPath:(id)arg1;
@end

