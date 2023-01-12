//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIEditMenuInteractionDelegate-Protocol.h>

@class NSArray, UIEditMenuConfiguration, UIEditMenuInteraction, UIMenu, UIView;

@protocol _UIEditMenuInteractionDelegateInternal <UIEditMenuInteractionDelegate>

@optional
- (UIView *)_editMenuInteraction:(UIEditMenuInteraction *)arg1 titleViewForMenu:(UIMenu *)arg2 configuration:(UIEditMenuConfiguration *)arg3;
- (void)_editMenuInteraction:(UIEditMenuInteraction *)arg1 didTransitionMenuForConfiguration:(UIEditMenuConfiguration *)arg2;
- (void)_editMenuInteraction:(UIEditMenuInteraction *)arg1 menuForConfiguration:(UIEditMenuConfiguration *)arg2 suggestedActions:(NSArray *)arg3 completionHandler:(void (^)(UIMenu *))arg4;
@end

