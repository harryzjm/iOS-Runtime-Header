//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNContactFormatter, CNGroupAvatarViewController, CNGroupIdentity, CNGroupIdentityInlineActionsViewConfiguration, CNGroupIdentityInlineActionsViewController, NSLayoutConstraint, NSString, UIButton, UIFont, UILabel;
@protocol CNGroupIdentityHeaderViewControllerDelegate;

@interface CNGroupIdentityHeaderViewController : UIViewController
{
    NSString *_actionButtonTitle;
    id <CNGroupIdentityHeaderViewControllerDelegate> _delegate;
    CNGroupIdentity *_group;
    CNGroupIdentityInlineActionsViewConfiguration *_actionsViewConfiguration;
    UILabel *_titleLabel;
    UIFont *_titleLabelFont;
    UIFont *_titleLabelWrappedFont;
    UIButton *_actionButton;
    NSLayoutConstraint *_actionButtonHeightConstraint;
    double _actionsViewTopMargin;
    CNGroupAvatarViewController *_groupAvatarViewController;
    CNGroupIdentityInlineActionsViewController *_actionsViewController;
    CNContactFormatter *_contactFormatter;
    struct CGSize _previousSize;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize previousSize; // @synthesize previousSize=_previousSize;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(retain, nonatomic) CNGroupIdentityInlineActionsViewController *actionsViewController; // @synthesize actionsViewController=_actionsViewController;
@property(retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController; // @synthesize groupAvatarViewController=_groupAvatarViewController;
@property(nonatomic) double actionsViewTopMargin; // @synthesize actionsViewTopMargin=_actionsViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *actionButtonHeightConstraint; // @synthesize actionButtonHeightConstraint=_actionButtonHeightConstraint;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIFont *titleLabelWrappedFont; // @synthesize titleLabelWrappedFont=_titleLabelWrappedFont;
@property(retain, nonatomic) UIFont *titleLabelFont; // @synthesize titleLabelFont=_titleLabelFont;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration; // @synthesize actionsViewConfiguration=_actionsViewConfiguration;
@property(retain, nonatomic) CNGroupIdentity *group; // @synthesize group=_group;
@property(nonatomic) __weak id <CNGroupIdentityHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
- (id)displayNameForGroupIdentity;
- (struct CGSize)sizeForLayoutInContainerSize:(struct CGSize)arg1;
- (id)viewForActionAtIndex:(unsigned long long)arg1;
- (void)didTapActionButton;
- (void)groupIdentityDidUpdate:(id)arg1;
- (void)updateTitleLabelFont;
- (void)updateTitleLabel;
- (void)updateActionButton;
- (void)setupPopulatedActionsView;
- (void)setupEmptyActionsView;
- (void)setupActionsView;
- (void)setupActionButton;
- (void)setupTitleLabel;
- (void)setupAvatarView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2 avatarViewControllerSettings:(id)arg3;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2;
- (id)initWithGroupIdentity:(id)arg1;

@end
