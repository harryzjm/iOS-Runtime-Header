//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSharedProfileAnimationGenerator : NSObject
{
}

- (void)applyBlurFilterToLayer:(id)arg1 inputRadius:(double)arg2;
- (id)springAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3 stiffness:(double)arg4 damping:(double)arg5 mass:(double)arg6;
- (id)peekABooFinalSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (id)peekABooIntermediateSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (id)coinFlipSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;
- (void)performPeekABooAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toAvatarImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toContact:(id)arg2 rightToLeft:(_Bool)arg3 avatarSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

