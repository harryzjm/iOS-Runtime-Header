//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class KCSharingGroup, NSArray;
@protocol SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFSharedAccountsGroupMessageInvitePreviewViewController : OBWelcomeController
{
    KCSharingGroup *_group;
    NSArray *_invitedGroupMemberData;
    id <SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *invitedGroupMemberData; // @synthesize invitedGroupMemberData=_invitedGroupMemberData;
@property(readonly, nonatomic) KCSharingGroup *group; // @synthesize group=_group;
- (void)_cancelButtonSelected;
- (void)_continueButtonSelected;
- (void)_addContinueAndCancelButtonsToButtonTray;
- (void)_setUpContentView;
- (void)viewDidLoad;
- (id)initWithGroup:(id)arg1 invitedGroupMemberData:(id)arg2;

@end

