//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/NSObject-Protocol.h>

@class NSArray, UIEditMenuConfiguration, UIEditMenuInteraction, UIMenu;
@protocol UIEditMenuInteractionAnimating;

@protocol UIEditMenuInteractionDelegate <NSObject>

@optional
- (void)editMenuInteraction:(UIEditMenuInteraction *)arg1 willDismissMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (void)editMenuInteraction:(UIEditMenuInteraction *)arg1 willPresentMenuForConfiguration:(UIEditMenuConfiguration *)arg2 animator:(id <UIEditMenuInteractionAnimating>)arg3;
- (struct CGRect)editMenuInteraction:(UIEditMenuInteraction *)arg1 targetRectForConfiguration:(UIEditMenuConfiguration *)arg2;
- (UIMenu *)editMenuInteraction:(UIEditMenuInteraction *)arg1 menuForConfiguration:(UIEditMenuConfiguration *)arg2 suggestedActions:(NSArray *)arg3;
@end

