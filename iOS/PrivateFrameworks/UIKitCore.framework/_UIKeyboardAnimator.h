//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject
{
    _UIKeyboardAnimatorAnimationStyle *_style;
}

- (void).cxx_destruct;
- (void)completeAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)applyToKeyboardOperations:(CDUnknownBlockType)arg1;
- (id)init;

@end
