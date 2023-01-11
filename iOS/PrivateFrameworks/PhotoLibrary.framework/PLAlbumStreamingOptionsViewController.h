//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotoLibrary/PLComposeRecipientViewControllerDelegate-Protocol.h>
#import <PhotoLibrary/PLInvitationRecordsObserver-Protocol.h>
#import <PhotoLibrary/UITableViewDataSource-Protocol.h>
#import <PhotoLibrary/UITableViewDelegate-Protocol.h>

@class AAUIProfilePictureStore, ACAccountStore, NSArray, NSMutableDictionary, NSOperationQueue, NSString, PLCloudSharedAlbum, PLCloudSharedAlbumInvitationRecord, PLComposeRecipientViewController, UIBarButtonItem, UISwitch, UITableView;
@protocol PLAlbumStreamingOptionsViewControllerDelegate;

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLInvitationRecordsObserver, UITableViewDataSource, UITableViewDelegate>
{
    NSString *_visiblePublicURL;
    _Bool _showShareLink;
    PLCloudSharedAlbum *_album;
    id <PLAlbumStreamingOptionsViewControllerDelegate> _delegate;
    PLComposeRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UITableView *_optionsTableView;
    UISwitch *_wantsPublicWebsiteSwitch;
    UISwitch *_wantsMultipleContributorsSwitch;
    UISwitch *_wantsAcceptCloudNotificationSwitch;
    _Bool _adjustedInsetsForKeyboard;
    unsigned long long _addSubscribersRow;
    NSOperationQueue *_familyRequestQueue;
    ACAccountStore *_familyAccountStore;
    NSArray *_familyMembers;
    AAUIProfilePictureStore *_familyMemberPictureStore;
    NSMutableDictionary *_familyProfilePictures;
    _Bool _isPresentedModally;
    _Bool _streamOwner;
    _Bool __shouldScrollToTopOnNextViewLayout;
    _Bool _albumIsFamilyStream;
    NSString *_albumName;
    NSArray *_sharedAlbumSubscribers;
    PLCloudSharedAlbumInvitationRecord *__selectedSubscriberInvitationRecord;
    NSString *__lastPublicURLSectionFooterTitle;
    NSString *__lastMultiContributorsSectionFooterTitle;
}

@property(nonatomic) _Bool albumIsFamilyStream; // @synthesize albumIsFamilyStream=_albumIsFamilyStream;
@property(copy, nonatomic, setter=_setLastMultiContributorsSectionFooterTitle:) NSString *_lastMultiContributorsSectionFooterTitle; // @synthesize _lastMultiContributorsSectionFooterTitle=__lastMultiContributorsSectionFooterTitle;
@property(copy, nonatomic, setter=_setLastPublicURLSectionFooterTitle:) NSString *_lastPublicURLSectionFooterTitle; // @synthesize _lastPublicURLSectionFooterTitle=__lastPublicURLSectionFooterTitle;
@property(nonatomic, setter=_setShouldScrollToTopOnNextViewLayout:) _Bool _shouldScrollToTopOnNextViewLayout; // @synthesize _shouldScrollToTopOnNextViewLayout=__shouldScrollToTopOnNextViewLayout;
@property(retain, nonatomic, setter=_setSelectedSubscriberInvitationRecord:) PLCloudSharedAlbumInvitationRecord *_selectedSubscriberInvitationRecord; // @synthesize _selectedSubscriberInvitationRecord=__selectedSubscriberInvitationRecord;
@property(nonatomic) _Bool streamOwner; // @synthesize streamOwner=_streamOwner;
@property(retain, nonatomic) NSArray *sharedAlbumSubscribers; // @synthesize sharedAlbumSubscribers=_sharedAlbumSubscribers;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) _Bool isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property(retain, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
@property(nonatomic) id <PLAlbumStreamingOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (void)_removeSelectedSubscriber;
- (void)_displayConfirmationForRemovalOfSelectedSubscriber;
- (void)_resendInvitationToSelectedSubscriber;
- (id)_personViewControllerSubscriberInfo:(id)arg1 canResendInvitation:(_Bool)arg2 canRemoveSubscriber:(_Bool)arg3;
- (void)_updateMultipleContributorsState;
- (void)_updatePublicURLStateIfNecessaryAnimated:(_Bool)arg1;
- (void)_setShowingMultipleContributorSpinner:(_Bool)arg1;
- (void)_setShowingPublicURLActivitySpinner:(_Bool)arg1;
- (_Bool)_shouldShowPublicURLActivitySpinner;
- (_Bool)_multipleContributorsEnabled;
- (_Bool)_publicURLEnabled;
- (void)_displayActivitySheet;
- (void)_displayDeleteConfirmation:(id)arg1;
- (void)_displayConfirmationWithMessage:(id)arg1 destructiveTitle:(id)arg2 actionHandler:(CDUnknownBlockType)arg3;
- (void)_deletePhotoStream;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_changeWantsMultipleContributors:(id)arg1;
- (void)_changeWantsAcceptCloudNotification:(id)arg1;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_handleCompletionWithReason:(int)arg1;
- (id)_suppressionContexts;
- (_Bool)_appAllowsSupressionOfAlerts;
- (struct CGSize)contentSizeForViewInPopover;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)_updateWantsMultipleContributorsField;
- (void)_updateWantsAcceptCloudNotificationField;
- (void)_updateWantsPublicWebsiteField;
- (void)_updateAllControls;
- (void)dealloc;
- (id)initWithAlbum:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

