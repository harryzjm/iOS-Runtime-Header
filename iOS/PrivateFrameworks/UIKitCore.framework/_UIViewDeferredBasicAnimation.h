//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIViewAnimationFrame;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredBasicAnimation
{
    _UIViewAnimationFrame *_finalValue;
}

- (void).cxx_destruct;
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;
- (void)addAnimationFrameForValue:(id)arg1;
- (id)_animationFrames;
- (_Bool)isEmpty;

@end
