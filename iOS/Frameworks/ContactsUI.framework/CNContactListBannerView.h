//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ContactsUI/UIDragInteractionDelegate-Protocol.h>

@class CALayer, CNContact, CNContactFormatter, CNContactListStyleApplier, CNContactStore, NSArray, NSLayoutConstraint, NSString, UIDragInteraction, UIGestureRecognizer, UILabel;
@protocol CNContactListBannerViewDelegate;

@interface CNContactListBannerView : UIView <UIDragInteractionDelegate>
{
    id <CNContactListBannerViewDelegate> _delegate;
    CNContactListStyleApplier *_contactListStyleApplier;
    UIView *_bottomSeparator;
    CNContactStore *_contactStore;
    CNContactFormatter *_formatter;
    CNContact *_meContact;
    UIGestureRecognizer *_longPress;
    UIView *_avatarView;
    UIView *_avatarViewContainer;
    UILabel *_titleLabel;
    UIView *_footnoteContainer;
    UILabel *_footnoteLabel;
    UILabel *_footnoteValueLabel;
    CALayer *_topSeparator;
    NSLayoutConstraint *_footnoteTitleToTitleVerticalConstraint;
    NSLayoutConstraint *_footnoteTitleToValueHorizontalSpaceConstraint;
    NSArray *_constraintsPendingActivation;
    UIDragInteraction *_dragInteraction;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(retain, nonatomic) NSArray *constraintsPendingActivation; // @synthesize constraintsPendingActivation=_constraintsPendingActivation;
@property(retain, nonatomic) NSLayoutConstraint *footnoteTitleToValueHorizontalSpaceConstraint; // @synthesize footnoteTitleToValueHorizontalSpaceConstraint=_footnoteTitleToValueHorizontalSpaceConstraint;
@property(retain, nonatomic) NSLayoutConstraint *footnoteTitleToTitleVerticalConstraint; // @synthesize footnoteTitleToTitleVerticalConstraint=_footnoteTitleToTitleVerticalConstraint;
@property(readonly, nonatomic) CALayer *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(readonly, nonatomic) UILabel *footnoteValueLabel; // @synthesize footnoteValueLabel=_footnoteValueLabel;
@property(readonly, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(readonly, nonatomic) UIView *footnoteContainer; // @synthesize footnoteContainer=_footnoteContainer;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *avatarViewContainer; // @synthesize avatarViewContainer=_avatarViewContainer;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) UIGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(readonly, nonatomic) CNContactFormatter *formatter; // @synthesize formatter=_formatter;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier; // @synthesize contactListStyleApplier=_contactListStyleApplier;
@property(nonatomic) __weak id <CNContactListBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cellWasSingleTapped:(id)arg1;
- (void)cellWasLongPressed:(id)arg1;
- (void)showMenu;
- (void)menuDidHide:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)configureDragInteraction;
- (void)setTopSeparatorWithInset:(double)arg1 andLength:(double)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3;
- (_Bool)displaysContactInfo;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateFontRelatedConstraints;
- (void)activatePendingConstraints;
- (void)applyStyle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
