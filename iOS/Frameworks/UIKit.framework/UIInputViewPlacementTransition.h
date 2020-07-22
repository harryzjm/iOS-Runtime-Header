//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIInputViewAnimationStyle, UIInputViewSetNotificationInfo, UIInputViewSetPlacement;
@protocol NSObject, UIInputViewAnimationController;

__attribute__((visibility("hidden")))
@interface UIInputViewPlacementTransition : NSObject
{
    _Bool cancelled;
    int animationState;
    UIInputViewSetPlacement *fromPlacement;
    UIInputViewSetPlacement *toPlacement;
    UIInputViewAnimationStyle *animationStyle;
    UIInputViewSetNotificationInfo *notificationInfo;
    unsigned long long notifications;
    id <NSObject> animationContext;
    id <UIInputViewAnimationController> animationController;
}

+ (id)transitionFromPlacement:(id)arg1 toPlacement:(id)arg2 withAnimationStyle:(id)arg3;
@property(retain, nonatomic) id <UIInputViewAnimationController> animationController; // @synthesize animationController;
@property(retain, nonatomic) id <NSObject> animationContext; // @synthesize animationContext;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled;
@property(nonatomic) int animationState; // @synthesize animationState;
@property(nonatomic) unsigned long long notifications; // @synthesize notifications;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *notificationInfo; // @synthesize notificationInfo;
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle; // @synthesize animationStyle;
@property(retain, nonatomic) UIInputViewSetPlacement *toPlacement; // @synthesize toPlacement;
@property(retain, nonatomic) UIInputViewSetPlacement *fromPlacement; // @synthesize fromPlacement;
- (void)dealloc;
- (_Bool)didAdvanceAnimationToState:(int)arg1;

@end

