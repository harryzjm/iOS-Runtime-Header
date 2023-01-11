//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class CNAvatarView, CNContact, NSArray, NSString, UIViewController;

@protocol CNAvatarViewDelegate <NSObject>
- (UIViewController *)presentingViewControllerForAvatarView:(CNAvatarView *)arg1;

@optional
- (void)didUpdateContentForAvatarView:(CNAvatarView *)arg1;
- (void)didDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (void)willDismissActionsForAvatarView:(CNAvatarView *)arg1;
- (void)willBeginPreviewInteractionForAvatarView:(CNAvatarView *)arg1;
- (_Bool)avatarView:(CNAvatarView *)arg1 shouldShowContact:(CNContact *)arg2;
- (NSArray *)avatarView:(CNAvatarView *)arg1 orderedPropertiesForProperties:(NSArray *)arg2 category:(NSString *)arg3;
- (_Bool)shouldShowActionsForAvatarView:(CNAvatarView *)arg1;
@end

