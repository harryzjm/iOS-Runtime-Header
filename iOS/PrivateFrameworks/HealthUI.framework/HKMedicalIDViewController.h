//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <HealthUI/HKEmergencyCardContactUpdateDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardDeletionDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardPrimaryLanguageUpdateDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardRowHeightChangeDelegate-Protocol.h>
#import <HealthUI/HKEmergencyCardSelectionTableItemDelegate-Protocol.h>
#import <HealthUI/HKMedicalIDViewControllerDelegate-Protocol.h>
#import <HealthUI/UITableViewDataSource-Protocol.h>
#import <HealthUI/UITableViewDelegate-Protocol.h>

@class HKEmergencyCardContactsTableItem, HKEmergencyCardGroupTableItem, HKEmergencyCardNameAndPictureTableItem, HKEmergencyCardPrimaryLanguageTableItem, HKHealthStore, HKMedicalIDNavigationController, HKMedicalIDStore, HKProfileStore, NSArray, NSString, _HKMedicalIDData;
@protocol HKMedicalIDViewControllerDelegate;

@interface HKMedicalIDViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, HKMedicalIDViewControllerDelegate, HKEmergencyCardDeletionDelegate, HKEmergencyCardRowHeightChangeDelegate, HKEmergencyCardContactUpdateDelegate, HKEmergencyCardPrimaryLanguageUpdateDelegate, HKEmergencyCardSelectionTableItemDelegate>
{
    HKProfileStore *_profileStore;
    NSArray *_presentableTableItems;
    NSArray *_footers;
    NSArray *_headers;
    HKEmergencyCardGroupTableItem *_informationDataGroupItem;
    HKEmergencyCardNameAndPictureTableItem *_nameAndPictureItem;
    HKEmergencyCardContactsTableItem *_contactsItem;
    HKEmergencyCardPrimaryLanguageTableItem *_primaryLanguageItem;
    long long _tableViewStyle;
    _Bool _inBuddy;
    _Bool _inBridge;
    NSArray *_localeItems;
    NSArray *_accumulatedNumberOfRowsForItems;
    int _medicalIDChangedToken;
    HKMedicalIDNavigationController *_medicalIDEditor;
    NSArray *_organDonationItems;
    _Bool _organDonationSignupAvailable;
    _Bool _allowsEditing;
    _Bool _showsDismissButton;
    _Bool _showsDeleteButton;
    _Bool _modernAppearance;
    _Bool _shouldShowHints;
    _Bool _showsShowWhenLockedState;
    _Bool _showsEmergencyAccessState;
    _Bool _showsEditMedicalIDRowInViewMode;
    _Bool _isSecondaryProfileMedicalID;
    _Bool _inEditMode;
    _HKMedicalIDData *_medicalID;
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    id <HKMedicalIDViewControllerDelegate> _delegate;
    long long _internalAccessType;
    NSArray *_tableItems;
}

+ (_Bool)isSupportedOnThisDevice;
- (void).cxx_destruct;
@property(nonatomic) _Bool inEditMode; // @synthesize inEditMode=_inEditMode;
@property(retain, nonatomic) NSArray *tableItems; // @synthesize tableItems=_tableItems;
@property(nonatomic) _Bool isSecondaryProfileMedicalID; // @synthesize isSecondaryProfileMedicalID=_isSecondaryProfileMedicalID;
@property(nonatomic) long long internalAccessType; // @synthesize internalAccessType=_internalAccessType;
@property(nonatomic) __weak id <HKMedicalIDViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKMedicalIDStore *medicalIDStore; // @synthesize medicalIDStore=_medicalIDStore;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) _Bool inBridge; // @synthesize inBridge=_inBridge;
@property(nonatomic) _Bool showsEditMedicalIDRowInViewMode; // @synthesize showsEditMedicalIDRowInViewMode=_showsEditMedicalIDRowInViewMode;
@property(nonatomic) _Bool showsEmergencyAccessState; // @synthesize showsEmergencyAccessState=_showsEmergencyAccessState;
@property(nonatomic) _Bool showsShowWhenLockedState; // @synthesize showsShowWhenLockedState=_showsShowWhenLockedState;
@property(nonatomic) _Bool shouldShowHints; // @synthesize shouldShowHints=_shouldShowHints;
@property(nonatomic) _Bool modernAppearance; // @synthesize modernAppearance=_modernAppearance;
@property(nonatomic) _Bool showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
@property(nonatomic) _Bool showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(retain, nonatomic) _HKMedicalIDData *medicalID; // @synthesize medicalID=_medicalID;
- (void)_submitAccessAnalytic;
- (id)_formatMedicalIDAccessPoint:(long long)arg1;
- (void)_updateMedicalID;
- (void)_refreshMedicalIDInViewMode;
- (void)_forceDisableBiometricIfDeviceLocked;
- (void)_showMedicalIDPreviewAsNext;
- (void)_adjustTableViewContentOffsetForVisibleView:(id)arg1 visibleRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)tableItemDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)tableItemDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)tableItem:(id)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)selectionTableItemDidTap:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (long long)_rowIndexForTableItem:(id)arg1 atIndexPath:(id)arg2;
- (id)_tableItemForIndexPath:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (void)updatePrimaryLanguageTableItem;
- (void)updateEmergencyContactTableItem;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)_editable;
- (_Bool)_shouldShowOrganDonation;
- (void)_dismissMedicalIDEditor;
- (id)_newViewForHeaderInSection:(long long)arg1;
- (id)_newViewForFooterInSection:(long long)arg1;
- (void)_buildPresentableTableItems;
- (long long)_preferredOrganDonationOrganization;
- (id)_fetchProfileFirstName;
- (void)_buildViewModeTableItems;
- (void)_buildEditModeTableItems;
- (void)_buildTableItems;
- (void)_doneTapped:(id)arg1;
- (void)editOrganDonation:(id)arg1;
- (void)editMedicalID:(id)arg1;
- (void)_nextButtonTapped:(id)arg1;
- (void)_doneEditingTapped:(id)arg1;
- (void)_cancelEditingTapped:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (_Bool)_refreshEmergencyContacts:(_Bool)arg1;
- (void)_contactStoreDidChange:(id)arg1;
- (void)_reloadTableWithMedicalIDData:(id)arg1;
- (void)_updateMedicalIDNameWithDemographicsInformation:(id)arg1;
- (void)_fetchDemographicInformation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)timeZoneDidChange:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)updateNavigationBar;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initInEditMode:(_Bool)arg1;
- (id)initInEditMode:(_Bool)arg1 inBuddy:(_Bool)arg2 organDonationSignupAvailable:(_Bool)arg3;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
