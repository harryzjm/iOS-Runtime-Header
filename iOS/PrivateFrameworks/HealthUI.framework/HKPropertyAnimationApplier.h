//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;

@interface HKPropertyAnimationApplier : NSObject
{
    NSMutableDictionary *_animations;
    CADisplayLink *_displayLink;
}

- (void).cxx_destruct;
- (void)_cleanupCompletedAnimations;
- (void)_applyAnimations;
- (void)_displayLinkFired:(id)arg1;
- (void)_stopDisplayLinkIfNecessary;
- (void)_startDisplayLinkIfNecessary;
- (void)cancelAnimationsForProperty:(id)arg1;
- (void)applyAnimation:(id)arg1;
- (id)init;

@end
