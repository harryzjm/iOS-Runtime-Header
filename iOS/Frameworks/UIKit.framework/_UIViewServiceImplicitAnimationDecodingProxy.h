//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface-Protocol.h>

@class NSString, _UIViewAnimationAttributes;

__attribute__((visibility("hidden")))
@interface _UIViewServiceImplicitAnimationDecodingProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface>
{
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
    _Bool _animationsEnabled;
}

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;
- (void).cxx_destruct;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(_Bool)arg3;
- (void)forwardInvocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

