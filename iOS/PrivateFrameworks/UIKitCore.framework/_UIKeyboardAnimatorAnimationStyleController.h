//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIKeyboardAnimator;

__attribute__((visibility("hidden")))
@interface _UIKeyboardAnimatorAnimationStyleController : NSObject
{
    _UIKeyboardAnimator *_animator;
}

- (void).cxx_destruct;
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (id)initWithAnimator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

