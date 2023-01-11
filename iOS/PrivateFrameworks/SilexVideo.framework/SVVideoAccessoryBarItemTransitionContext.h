//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemTransitionContext-Protocol.h>

@class NSString, UIView;

@interface SVVideoAccessoryBarItemTransitionContext : NSObject <SVVideoAccessoryItemTransitionContext>
{
    _Bool _transitionWasCancelled;
    UIView *_fromView;
    UIView *_toView;
    UIView *_containerView;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool transitionWasCancelled; // @synthesize transitionWasCancelled=_transitionWasCancelled;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
- (void)completeTransition:(_Bool)arg1;
- (id)initWithContainerView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
