//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <ToneKit/TKVibrationPickerTableViewCellDelegate-Protocol.h>
#import <ToneKit/TKVibrationRecorderViewControllerDelegate-Protocol.h>
#import <ToneKit/UINavigationControllerDelegate-Protocol.h>

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, NSTimer, TKVibratorController, TLVibrationManager;
@protocol TKVibrationPickerStyleProvider, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate;

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate>
{
    long long _alertType;
    _Bool _showsDefault;
    _Bool _showsUserGenerated;
    _Bool _showsNone;
    _Bool _showsNothingSelected;
    _Bool _showsEditButtonAtRightSideOfCurrentNavigationController;
    _Bool _allowsDeletingDefaultVibration;
    NSString *_noneString;
    _Bool _canEnterEditingMode;
    _Bool _viewHasAppearedAtLeastOnce;
    _Bool _isCallingParentViewController;
    _Bool _swipeToDeleteMode;
    _Bool _skipNextUserGeneratedVibrationsDidChangeNotification;
    _Bool _defaultVibrationIdentifierWasExplicitlySet;
    _Bool _showsSynchronized;
    NSString *_synchronizedVibrationIdentifier;
    TLVibrationManager *_vibrationManager;
    TKVibratorController *_vibratorController;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    NSIndexPath *_indexPathOfCellBeingDeleted;
    NSMutableDictionary *_sectionHeaderViews;
    _Bool _showsEditButtonInNavigationBar;
    NSString *_topic;
    id <TKVibrationPickerViewControllerDelegate> _delegate;
    NSString *_defaultVibrationIdentifier;
    NSString *_correspondingToneIdentifier;
    NSString *_selectedVibrationIdentifier;
    id <TKVibrationPickerStyleProvider> _styleProvider;
    id <TKVibrationPickerViewControllerDelegate> __additionalDelegate;
    id <TKVibrationPickerViewControllerDismissalDelegate> __dismissalDelegate;
}

@property(nonatomic, setter=_setDismissalDelegate:) __weak id <TKVibrationPickerViewControllerDismissalDelegate> _dismissalDelegate; // @synthesize _dismissalDelegate=__dismissalDelegate;
@property(nonatomic, setter=_setAdditionalDelegate:) __weak id <TKVibrationPickerViewControllerDelegate> _additionalDelegate; // @synthesize _additionalDelegate=__additionalDelegate;
@property(retain, nonatomic) id <TKVibrationPickerStyleProvider> styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) _Bool showsEditButtonInNavigationBar; // @synthesize showsEditButtonInNavigationBar=_showsEditButtonInNavigationBar;
@property(nonatomic) _Bool allowsDeletingDefaultVibration; // @synthesize allowsDeletingDefaultVibration=_allowsDeletingDefaultVibration;
@property(retain, nonatomic) NSString *selectedVibrationIdentifier; // @synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier;
@property(nonatomic) _Bool showsNothingSelected; // @synthesize showsNothingSelected=_showsNothingSelected;
@property(copy, nonatomic) NSString *noneString; // @synthesize noneString=_noneString;
@property(nonatomic) _Bool showsNone; // @synthesize showsNone=_showsNone;
@property(nonatomic) _Bool showsUserGenerated; // @synthesize showsUserGenerated=_showsUserGenerated;
@property(copy, nonatomic) NSString *correspondingToneIdentifier; // @synthesize correspondingToneIdentifier=_correspondingToneIdentifier;
@property(copy, nonatomic) NSString *defaultVibrationIdentifier; // @synthesize defaultVibrationIdentifier=_defaultVibrationIdentifier;
@property(nonatomic) _Bool showsDefault; // @synthesize showsDefault=_showsDefault;
@property(nonatomic) __weak id <TKVibrationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) long long alertType; // @synthesize alertType=_alertType;
- (void).cxx_destruct;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_presentVibrationRecorderViewController;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (void)_stopVibrating;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)_sectionForNoneGroup;
- (long long)_sectionForUserGeneratedGroup;
- (long long)_sectionForSystemGroup;
- (long long)_sectionForSynchronizedGroup;
- (long long)_sectionForDefaultGroup;
- (id)_customHeaderViewForHeaderInSection:(long long)arg1;
- (id)_localizationIdentifierForHeaderInSection:(long long)arg1;
- (void)_updateVisibilityOfSynchronizedGroup;
- (void)_updateCheckedStateOfAllVisibleCells;
- (void)_updateSectionVisibilityFlagToValue:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2 sectionIndexGetter:(CDUnknownBlockType)arg3;
- (void)_handleError:(id)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (void)_updateEditButtonItemWithAnimation:(_Bool)arg1;
- (void)_updateEditButtonItem;
- (id)_navigationItem;
- (void)_processCurrentVibrationSelection;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
- (id)_sortedUserGeneratedVibrationIdentifiers;
- (id)_sortedVibrationIdentifiers;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(_Bool)arg2;
- (id)_selectedVibrationIndexPath;
- (id)_sanitizeVibrationIdentifierForPlayback:(id)arg1;
- (id)_sanitizedDefaultVibrationIdentifier;
- (id)_sanitizedCorrespondingToneIdentifier;
- (CDStruct_3d581f42)_cellAccessoriesDescriptorForRowAtIndexPath:(id)arg1;
- (void)applicationWillSuspend;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_showsOnlyEditableSections;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
@property(readonly, nonatomic) _Bool canEnterEditingMode;
- (void)dealloc;
- (id)initWithAlertType:(long long)arg1;
- (id)initWithStyle:(long long)arg1;
@property(copy, nonatomic) NSString *accountIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

