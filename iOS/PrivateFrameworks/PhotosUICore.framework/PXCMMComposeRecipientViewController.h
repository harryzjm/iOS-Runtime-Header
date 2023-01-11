//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/CNContactViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXCMMComposeRecipientDataSourceManagerDelegate-Protocol.h>
#import <PhotosUICore/PXCMMComposeRecipientSelectionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXCMMComposeRecipientValidationManagerDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoRecipientViewControllerDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSMutableSet, NSProgress, NSString, PXCMMAddRecipientButton, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientDataSourceManager, PXCMMComposeRecipientSelectionManager, PXCMMComposeRecipientValidationManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSession, PXCMMSpecManager, PXPhotoRecipientViewController, PXUpdater, UIButton, UILabel, UITableView, UIVisualEffectView;
@protocol PXCMMActionControllerDelegate, PXCMMComposeRecipientViewControllerDelegate, PXCMMPersonSuggestion;

@interface PXCMMComposeRecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PXPhotoRecipientViewControllerDelegate, PXCMMComposeRecipientDataSourceManagerDelegate, PXCMMComposeRecipientSelectionManagerDelegate, PXCMMComposeRecipientValidationManagerDelegate, CNContactViewControllerDelegate>
{
    PXCMMSession *_session;
    id <PXCMMComposeRecipientViewControllerDelegate> _delegate;
    id <PXCMMActionControllerDelegate> _actionDelegate;
    PXCMMSpecManager *_specManager;
    PXUpdater *_updater;
    UITableView *_composeRecipientTableView;
    PXCMMAddRecipientButton *_addRecipientButton;
    UIVisualEffectView *_footerVisualEffectView;
    UILabel *_privacyMessageLabel;
    UIButton *_sendButton;
    NSProgress *_actionProgress;
    PXCMMComposeRecipientDataSourceManager *_recipientManager;
    PXCMMComposeRecipientDataSource *_recipientsDataSource;
    PXCMMComposeRecipientSelectionManager *_recipientsSelectionManager;
    PXCMMComposeRecipientValidationManager *_recipientsValidationManager;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    PXPhotoRecipientViewController *_bootstrapRecipientViewController;
    id <PXCMMPersonSuggestion> _personSuggestionForBootstrapping;
    PXPhotoRecipientViewController *_addPeopleRecipientViewController;
    double _maximumContentWidth;
    NSMutableSet *_transientRecipientSelection;
    UIButton *_tapToRadarButton;
}

@property(retain, nonatomic) UIButton *tapToRadarButton; // @synthesize tapToRadarButton=_tapToRadarButton;
@property(retain, nonatomic) NSMutableSet *transientRecipientSelection; // @synthesize transientRecipientSelection=_transientRecipientSelection;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(retain, nonatomic) PXPhotoRecipientViewController *addPeopleRecipientViewController; // @synthesize addPeopleRecipientViewController=_addPeopleRecipientViewController;
@property(retain, nonatomic) id <PXCMMPersonSuggestion> personSuggestionForBootstrapping; // @synthesize personSuggestionForBootstrapping=_personSuggestionForBootstrapping;
@property(retain, nonatomic) PXPhotoRecipientViewController *bootstrapRecipientViewController; // @synthesize bootstrapRecipientViewController=_bootstrapRecipientViewController;
@property(readonly, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider; // @synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider;
@property(retain, nonatomic) PXCMMComposeRecipientValidationManager *recipientsValidationManager; // @synthesize recipientsValidationManager=_recipientsValidationManager;
@property(retain, nonatomic) PXCMMComposeRecipientSelectionManager *recipientsSelectionManager; // @synthesize recipientsSelectionManager=_recipientsSelectionManager;
@property(retain, nonatomic) PXCMMComposeRecipientDataSource *recipientsDataSource; // @synthesize recipientsDataSource=_recipientsDataSource;
@property(retain, nonatomic) PXCMMComposeRecipientDataSourceManager *recipientManager; // @synthesize recipientManager=_recipientManager;
@property(retain, nonatomic) NSProgress *actionProgress; // @synthesize actionProgress=_actionProgress;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *privacyMessageLabel; // @synthesize privacyMessageLabel=_privacyMessageLabel;
@property(retain, nonatomic) UIVisualEffectView *footerVisualEffectView; // @synthesize footerVisualEffectView=_footerVisualEffectView;
@property(retain, nonatomic) PXCMMAddRecipientButton *addRecipientButton; // @synthesize addRecipientButton=_addRecipientButton;
@property(retain, nonatomic) UITableView *composeRecipientTableView; // @synthesize composeRecipientTableView=_composeRecipientTableView;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXCMMSpecManager *specManager; // @synthesize specManager=_specManager;
@property(nonatomic) __weak id <PXCMMActionControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) __weak id <PXCMMComposeRecipientViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PXCMMSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_contactViewController:(id)arg1 didSelectContact:(id)arg2;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)_bootstrapPersonSuggestion:(id)arg1 withContact:(id)arg2;
- (void)_dismissRecipientViewController:(id)arg1;
- (void)photoRecipientViewController:(id)arg1 didCompleteWithRecipients:(id)arg2;
- (void)photoRecipientViewControllerDidCancel:(id)arg1;
- (void)composeRecipientValidationManager:(id)arg1 didUpdateValidationWithChangedIndexes:(id)arg2;
- (void)composeRecipientSelectionManager:(id)arg1 didUpdateSelectionSnapshotWithChangeDetails:(id)arg2;
- (void)composeRecipientDataSourceManager:(id)arg1 didUpdateDataSourceWithChangeDetails:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_validationTextColorForComposeRecipient:(id)arg1;
- (void)_updateUserInteraction;
- (double)_headerHeight;
- (void)_updateTableView;
- (void)_updateFooter;
- (void)_setNeedsUpdate;
- (void)_tapToRadarTapped:(id)arg1;
- (void)_handleActionButton:(id)arg1;
- (void)_handleAddRecipient:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
