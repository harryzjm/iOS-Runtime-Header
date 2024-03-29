//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NSArray, NSObject, NSString, PSSpecifier, STAllowance, UIColor;
@protocol STAllowanceDetailListControllerDelegate, STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STAllowanceDetailListController : PSListController
{
    _Bool _isSetupController;
    _Bool _useBackButton;
    _Bool _creatingNewAllowance;
    _Bool _didDeleteAllowance;
    id <STAllowanceDetailListControllerDelegate> _delegate;
    STAllowance *_allowance;
    NSObject<STRootViewModelCoordinator> *_coordinator;
    PSSpecifier *_timeGroupSpecifier;
    PSSpecifier *_timeSpecifier;
    PSSpecifier *_timePickerSpecifier;
    PSSpecifier *_customizeDaysSpecifier;
    PSSpecifier *_selectedTimeSpecifier;
    NSArray *_budgetedItemSpecifiers;
    UIColor *_defaultTimeCellDetailTextColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *defaultTimeCellDetailTextColor; // @synthesize defaultTimeCellDetailTextColor=_defaultTimeCellDetailTextColor;
@property _Bool didDeleteAllowance; // @synthesize didDeleteAllowance=_didDeleteAllowance;
@property(retain, nonatomic) NSArray *budgetedItemSpecifiers; // @synthesize budgetedItemSpecifiers=_budgetedItemSpecifiers;
@property(retain, nonatomic) PSSpecifier *selectedTimeSpecifier; // @synthesize selectedTimeSpecifier=_selectedTimeSpecifier;
@property(retain, nonatomic) PSSpecifier *customizeDaysSpecifier; // @synthesize customizeDaysSpecifier=_customizeDaysSpecifier;
@property(retain, nonatomic) PSSpecifier *timePickerSpecifier; // @synthesize timePickerSpecifier=_timePickerSpecifier;
@property(retain, nonatomic) PSSpecifier *timeSpecifier; // @synthesize timeSpecifier=_timeSpecifier;
@property(retain, nonatomic) PSSpecifier *timeGroupSpecifier; // @synthesize timeGroupSpecifier=_timeGroupSpecifier;
@property(readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) _Bool creatingNewAllowance; // @synthesize creatingNewAllowance=_creatingNewAllowance;
@property _Bool useBackButton; // @synthesize useBackButton=_useBackButton;
@property(nonatomic) _Bool isSetupController; // @synthesize isSetupController=_isSetupController;
@property(copy, nonatomic) STAllowance *allowance; // @synthesize allowance=_allowance;
@property(nonatomic) __weak id <STAllowanceDetailListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)customizeDaysListController:(id)arg1 didFinishEditingTimeByDay:(id)arg2;
- (id)datePickerForSpecifier:(id)arg1;
- (void)datePickerChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)atEndOfLimitFooterText;
- (id)_allowanceEnabled:(id)arg1;
- (void)_setAllowanceEnabled:(id)arg1 specifier:(id)arg2;
- (id)_askForMoreTime:(id)arg1;
- (void)_setAskForMoreTime:(id)arg1 specifier:(id)arg2;
- (id)_categoryDetailText:(id)arg1;
- (id)createBudgetedItemSpecifiers;
- (void)deleteAllowance:(id)arg1;
- (void)confirmDeletion:(id)arg1;
- (void)_editListButtonPressed:(id)arg1;
- (void)showCustomizeDaysController:(id)arg1;
- (id)timeFooterText;
- (id)budgetTime;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)arg1 highlight:(_Bool)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (_Bool)hasSetBudgetTimeOrCustomSchedule;
- (_Bool)hasSetBudgetTime;
- (void)showOrHideCustomizeDaysSpecifier;
- (void)updateSaveButton;
- (void)saveButtonTapped:(id)arg1;
- (void)willResignActive;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableViewStyle;
- (void)loadView;
- (_Bool)canBeShownFromSuspendedState;
- (id)initWithCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

