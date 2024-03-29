//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class CNAvatarView, CNContact, CNContactFormatter, CNContactGridClippingView, CNQuickActionsManager, CNQuickActionsView, NSArray, NSDictionary, UILabel, UIView;
@protocol CNAvatarViewDelegate><CNQuickActionsViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactGridCell : UICollectionViewCell
{
    _Bool _showsContactOnTap;
    CNContactFormatter *_contactFormatter;
    id <CNAvatarViewDelegate><CNQuickActionsViewDelegate> _delegate;
    NSDictionary *_nameTextAttributes;
    NSArray *_actionCategories;
    CNQuickActionsManager *_actionsManager;
    CNAvatarView *_avatarView;
    CNContactGridClippingView *_actionsClippingView;
    UIView *_actionsContainerView;
    CNQuickActionsView *_actionsView;
    UILabel *_nameLabel;
    struct CGSize _avatarSize;
    struct UIEdgeInsets _avatarMargins;
}

+ (double)actionsLeftMargin;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) CNQuickActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property(retain, nonatomic) UIView *actionsContainerView; // @synthesize actionsContainerView=_actionsContainerView;
@property(retain, nonatomic) CNContactGridClippingView *actionsClippingView; // @synthesize actionsClippingView=_actionsClippingView;
@property(retain, nonatomic) CNAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(copy, nonatomic) NSArray *actionCategories; // @synthesize actionCategories=_actionCategories;
@property(nonatomic) _Bool showsContactOnTap; // @synthesize showsContactOnTap=_showsContactOnTap;
@property(copy, nonatomic) NSDictionary *nameTextAttributes; // @synthesize nameTextAttributes=_nameTextAttributes;
@property(nonatomic) struct UIEdgeInsets avatarMargins; // @synthesize avatarMargins=_avatarMargins;
@property(nonatomic) struct CGSize avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) __weak id <CNAvatarViewDelegate><CNQuickActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(readonly, nonatomic) double maximumActionsWidth;
- (void)_updateActionsMask;
- (CDUnknownBlockType)completionBlockForHidingActions;
- (CDUnknownBlockType)animationBlockForPreparingToShowActions;
@property(retain, nonatomic) CNContact *contact;
- (void)updateConstraints;
- (void)_createViewsIfNeeded;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;

@end

