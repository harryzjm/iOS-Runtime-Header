//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class BSAnimationSettings;

@interface UIViewController (BNHostedContentProvidingAdditions)
- (_Bool)bn_shouldAnimateViewTransitionToSize:(struct CGSize)arg1;
- (struct CGSize)preferredContentSizeWithPresentationSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;
@property(readonly, copy, nonatomic) BSAnimationSettings *bannerSizeTransitionAnimationSettings;
@property(readonly, nonatomic) struct UIEdgeInsets bannerContentOutsets;
@end

