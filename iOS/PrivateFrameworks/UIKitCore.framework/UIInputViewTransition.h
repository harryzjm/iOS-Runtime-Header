//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIInputViewSet;

__attribute__((visibility("hidden")))
@interface UIInputViewTransition : NSObject
{
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
}

- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;
- (id)newSet;
@property(readonly, nonatomic) UIInputViewSet *oldSet;

@end
