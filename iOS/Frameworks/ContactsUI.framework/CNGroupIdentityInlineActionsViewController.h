//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactInlineActionsViewControllerDelegate_Internal-Protocol.h>
#import <ContactsUI/CNGroupIdentityActionItemDelegate-Protocol.h>
#import <ContactsUI/CNUIObjectViewControllerDelegate-Protocol.h>

@class CNContactInlineActionsViewController, CNGroupIdentity, CNGroupIdentityInlineActionsViewConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface CNGroupIdentityInlineActionsViewController : UIViewController <CNContactInlineActionsViewControllerDelegate_Internal, CNUIObjectViewControllerDelegate, CNGroupIdentityActionItemDelegate>
{
    CNGroupIdentity *_group;
    CNContactInlineActionsViewController *_inlineActionsViewController;
    CNGroupIdentityInlineActionsViewConfiguration *_configuration;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) CNContactInlineActionsViewController *inlineActionsViewController; // @synthesize inlineActionsViewController=_inlineActionsViewController;
@property(retain, nonatomic) CNGroupIdentity *group; // @synthesize group=_group;
- (void)groupIdentityActionItem:(id)arg1 didUpdateOverrideEnabledState:(_Bool)arg2;
- (void)groupIdentityActionItem:(id)arg1 didUpdateActionBlock:(CDUnknownBlockType)arg2;
- (id)hostingViewControllerForController:(id)arg1;
- (_Bool)contactInlineActionsViewController:(id)arg1 overrideEnabledStateForActionOfType:(id)arg2;
- (_Bool)contactInlineActionsViewController:(id)arg1 shouldOverrideEnabledStateForActionOfType:(id)arg2;
- (id)contactInlineActionsViewController:(id)arg1 overrideTitleForActionOfType:(id)arg2;
- (id)contactInlineActionsViewController:(id)arg1 overrideImageForActionOfType:(id)arg2;
- (_Bool)contactInlineActionsViewController:(id)arg1 shouldPresentDisambiguationUIForActionOfType:(id)arg2;
- (_Bool)contactInlineActionsViewController:(id)arg1 canPerformGroupActionOfType:(id)arg2;
- (void)contactInlineActionsViewController:(id)arg1 didSelectActionOfType:(id)arg2;
- (double)actionsViewHeightThatFits:(struct CGSize)arg1;
- (void)setupActionsView;
@property(readonly, nonatomic) long long style;
- (void)updateActionsViewForUpdatedActionItem:(id)arg1;
- (id)actionsView;
- (id)actionsContainerView;
- (id)viewForActionAtIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithGroupIdentity:(id)arg1 actionsViewConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
