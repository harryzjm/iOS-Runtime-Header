//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAKeyframeAnimation;

@interface CMKFocusLockView
{
    CAKeyframeAnimation *_lockBoundsAnimation;
}

- (void).cxx_destruct;
- (void)animateScaleDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateLock;
- (id)_createLockBoundsAnimation;
- (void)startAnimatingContents:(_Bool)arg1 bounds:(_Bool)arg2 fadeIn:(_Bool)arg3;
- (double)fadeInDuration;
- (id)_createBoundsAnimation;

@end

