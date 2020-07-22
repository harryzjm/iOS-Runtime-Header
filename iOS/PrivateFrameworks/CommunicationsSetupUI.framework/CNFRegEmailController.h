//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSTimer, PSSpecifier;

@interface CNFRegEmailController
{
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    NSString *_pendingAlias;
    _Bool _validating;
}

@property(copy, nonatomic) NSString *pendingAlias; // @synthesize pendingAlias=_pendingAlias;
- (void).cxx_destruct;
- (void)_setupEventHandlers;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)validationTimeout:(id)arg1;
- (void)startValidationTimeoutTimer;
- (void)stopValidationTimeoutTimer;
- (double)timeoutDuration;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;
- (id)pendingAliasForSpecifier:(id)arg1;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (_Bool)emailFieldIsEmpty;
- (id)emailTextField;
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateControllerState;
- (void)_updateUI;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)_handleValidationModeCancelled;
- (void)checkMailTapped:(id)arg1;
- (void)_returnKeyPressed;
- (void)nextTapped;
- (void)_failValidationWithError:(id)arg1;
- (void)_stopValidationModeAnimated:(_Bool)arg1;
- (void)_finishValidation;
- (_Bool)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (id)selectedAliases;
- (void)setAliasSelected:(id)arg1;
- (id)_createSpecifierForAlias:(id)arg1;
- (id)aliasSpecifiers;
- (_Bool)_phoneNumberInAliases:(id)arg1;
- (_Bool)shouldShowAllVettedAliases;
- (id)titleString;
- (void)_showCheckMailButton:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)showActionSpecifier:(id)arg1 animated:(_Bool)arg2;
- (id)_rightButtonItem;
- (id)logName;
- (id)specifierList;
- (id)bundle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

