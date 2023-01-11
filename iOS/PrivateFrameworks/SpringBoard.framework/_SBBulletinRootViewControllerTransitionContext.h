//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView, UIViewController;

@interface _SBBulletinRootViewControllerTransitionContext : NSObject
{
    _Bool _animated;
    _Bool _presenting;
    UIView *_containerView;
    UIViewController *_presentingViewController;
    UIViewController *_presentedViewController;
    CDUnknownBlockType _presentationCompletion;
    CDUnknownBlockType _dismissalCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(copy, nonatomic) CDUnknownBlockType presentationCompletion; // @synthesize presentationCompletion=_presentationCompletion;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;

@end
