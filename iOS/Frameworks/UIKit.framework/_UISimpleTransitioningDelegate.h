//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UINavigationControllerDelegate-Protocol.h>
#import <UIKit/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface _UISimpleTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
    id <UIViewControllerAnimatedTransitioning> _animator;
    _Bool __suppressCrossFadeNavigationBarAnimation;
}

@property(nonatomic, setter=_setSuppressCrossFadeNavigationBarAnimation:) _Bool _suppressCrossFadeNavigationBarAnimation; // @synthesize _suppressCrossFadeNavigationBarAnimation=__suppressCrossFadeNavigationBarAnimation;
- (void).cxx_destruct;
- (_Bool)_navigationControllerShouldCrossFadeNavigationBar:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithAnimator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
