//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIEditMenuInteractionDelegate-Protocol.h>

@class NSArray, UIEditMenuConfiguration, UIEditMenuInteraction, UIMenu, UIResponder, UIView;
@protocol UIMenuLeaf;

@protocol _UIEditMenuInteractionDelegateInternal <UIEditMenuInteractionDelegate>

@optional
- (void)_editMenuInteraction:(UIEditMenuInteraction *)arg1 didPerformMenuLeaf:(id <UIMenuLeaf>)arg2 target:(id)arg3;
- (UIResponder *)_editMenuInteraction:(UIEditMenuInteraction *)arg1 firstResponderTargetForConfiguration:(UIEditMenuConfiguration *)arg2;
- (UIView *)_editMenuInteraction:(UIEditMenuInteraction *)arg1 titleViewForMenu:(UIMenu *)arg2 configuration:(UIEditMenuConfiguration *)arg3;
- (void)_editMenuInteraction:(UIEditMenuInteraction *)arg1 didTransitionMenuForConfiguration:(UIEditMenuConfiguration *)arg2;
- (void)_editMenuInteraction:(UIEditMenuInteraction *)arg1 menuForConfiguration:(UIEditMenuConfiguration *)arg2 suggestedActions:(NSArray *)arg3 completionHandler:(void (^)(UIMenu *))arg4;
@end

