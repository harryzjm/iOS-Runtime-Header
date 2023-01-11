//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayUI/BNBannerTransitioningDelegate-Protocol.h>

@class NSString;

@interface CPUIBannerTransitioningDelegate : NSObject <BNBannerTransitioningDelegate>
{
}

- (Class)_bannerTransitionAnimatorClassForAnimationStyle:(long long)arg1;
- (id)animationControllerForDismissedController:(id)arg1 userInfo:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 userInfo:(id)arg4;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isResizeAnimationCustomizationPermitted) _Bool resizeAnimationCustomizationPermitted;
@property(readonly) Class superclass;

@end
