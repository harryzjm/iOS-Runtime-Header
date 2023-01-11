//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIFocusEnvironmentPrivate-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusUpdateContext, _UIFocusGroup;
@protocol UIFocusEnvironment, UIFocusItem, _UIFocusRegionContainer;

@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>

@optional
@property(readonly, nonatomic, getter=_focusMapContainer) __weak id <_UIFocusRegionContainer> focusMapContainer;
- (id <UIFocusItem>)_primaryFocusItemForFocusGroup:(_UIFocusGroup *)arg1;
- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (void)_willUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (_Bool)_shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (id <UIFocusEnvironment>)_overridingPreferredFocusEnvironment;
@end
