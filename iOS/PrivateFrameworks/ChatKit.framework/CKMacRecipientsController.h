//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKViewController.h"

@class CKConversation, CKDetailsContactsManager, CKManualUpdater, CNComposeRecipientTextView, NSString, STConversationContext, UIScrollView, UIView;
@protocol CKMacRecipientsControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKMacRecipientsController : CKViewController
{
    _Bool _allowedByScreenTime;
    CKConversation *_conversation;
    CNComposeRecipientTextView *_toField;
    UIView *_detailsPopoverPresentationSourceView;
    STConversationContext *_currentConversationContext;
    id <CKMacRecipientsControllerDelegate> _delegate;
    CKDetailsContactsManager *_contactsManager;
    UIScrollView *_toFieldScrollView;
    CKManualUpdater *_addressBookNotificationUpdater;
    unsigned long long _numberOfRowsInToField;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numberOfRowsInToField; // @synthesize numberOfRowsInToField=_numberOfRowsInToField;
@property(retain, nonatomic) CKManualUpdater *addressBookNotificationUpdater; // @synthesize addressBookNotificationUpdater=_addressBookNotificationUpdater;
@property(retain, nonatomic) UIScrollView *toFieldScrollView; // @synthesize toFieldScrollView=_toFieldScrollView;
@property(retain, nonatomic) CKDetailsContactsManager *contactsManager; // @synthesize contactsManager=_contactsManager;
@property(nonatomic) __weak id <CKMacRecipientsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool allowedByScreenTime; // @synthesize allowedByScreenTime=_allowedByScreenTime;
@property(retain, nonatomic) STConversationContext *currentConversationContext; // @synthesize currentConversationContext=_currentConversationContext;
@property(retain, nonatomic) UIView *detailsPopoverPresentationSourceView; // @synthesize detailsPopoverPresentationSourceView=_detailsPopoverPresentationSourceView;
@property(readonly, nonatomic) CNComposeRecipientTextView *toField; // @synthesize toField=_toField;
@property(nonatomic) __weak CKConversation *conversation; // @synthesize conversation=_conversation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateScreenTimePolicy;
- (id)handlesForScreenTimePolicyCheck;
- (void)_showContactCardForEntity:(id)arg1 sourceView:(id)arg2;
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;
- (id)composeRecipientView:(id)arg1 contextMenuConfigurationForAtom:(id)arg2;
- (_Bool)shouldShowVerifiedIconForRecipient:(id)arg1;
- (unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1;
- (void)_handleAddressBookPartialChangedNotification:(id)arg1;
- (void)_handleAddressBookChangedNotification:(id)arg1;
- (void)_notifyDelegatesToFieldHeightHasChanged;
- (void)reset;
- (void)addRecipients:(id)arg1;
- (id)recipients;
- (void)_reloadCurrentRecipientData;
- (void)_updateToFieldFrame;
- (struct CGRect)innermostToolbarItemFrame;
- (struct CGRect)faceTimeJoinCallToolbarItemFrame;
- (struct CGRect)faceTimeStartOrLaunchCallToolbarItemFrame;
- (struct CGRect)detailsToolbarItemFrame;
- (void)refreshRecipients;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (double)_toolbarHeightForNumberOfRows:(unsigned long long)arg1;
- (_Bool)_shouldEnableScrolling;
- (double)preferredMacToolbarHeight;
- (_Bool)isEditable;
- (id)initWithConversation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

