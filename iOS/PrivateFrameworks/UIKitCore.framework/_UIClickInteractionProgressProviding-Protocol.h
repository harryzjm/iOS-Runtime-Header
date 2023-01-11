//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIView;
@protocol _UIClickInteractionProgressProvidingDelegate;

@protocol _UIClickInteractionProgressProviding <NSObject>
@property(readonly, nonatomic) long long currentState;
@property(retain, nonatomic) UIView *view;
@property(nonatomic) __weak id <_UIClickInteractionProgressProvidingDelegate> delegate;
- (void)cancelInteraction;
- (_Bool)shouldInvokeActionWhenTransitioningFromState:(long long)arg1 toState:(long long)arg2;
@end

