//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIDynamicAnimator;

__attribute__((visibility("hidden")))
@interface UIDynamicAnimatorTicker : NSObject
{
    UIDynamicAnimator *_animator;
}

- (void).cxx_destruct;
@property __weak UIDynamicAnimator *animator; // @synthesize animator=_animator;
- (void)_uiUpdateSequenceTick:(double)arg1;
- (void)_displayLinkTick:(id)arg1;

@end

