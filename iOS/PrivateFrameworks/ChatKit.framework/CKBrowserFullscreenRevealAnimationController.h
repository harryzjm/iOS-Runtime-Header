//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface CKBrowserFullscreenRevealAnimationController : NSObject
{
    _Bool _presenting;
    UIViewPropertyAnimator *_ascentDescentAnimator;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(retain, nonatomic) UIViewPropertyAnimator *ascentDescentAnimator; // @synthesize ascentDescentAnimator=_ascentDescentAnimator;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithDirection:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

