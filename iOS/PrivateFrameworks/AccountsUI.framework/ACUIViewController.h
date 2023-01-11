//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <AccountsUI/ACUIAccountOperationsDelegate-Protocol.h>
#import <AccountsUI/UIActionSheetDelegate-Protocol.h>

@class ACAccountStore, ACUIAccountOperationsHelper, NSString, UIBarButtonItem, UIProgressHUD;
@protocol ACUIViewControllerAccountChangeObserver;

@interface ACUIViewController : PSListController <UIActionSheetDelegate, ACUIAccountOperationsDelegate>
{
    _Bool _addedToTaskList;
    _Bool _activityInProgress;
    CDUnknownBlockType _confirmationViewCompletion;
    UIProgressHUD *_hud;
    _Bool _validationInProgress;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    ACAccountStore *_accountStore;
    ACUIAccountOperationsHelper *_accountOperationsHelper;
    id <ACUIViewControllerAccountChangeObserver> _accountChangeObserver;
}

+ (id)acuiAccountStore;
+ (_Bool)shouldPresentAsModalSheet;
@property(nonatomic) _Bool validationInProgress; // @synthesize validationInProgress=_validationInProgress;
@property(nonatomic) __weak id <ACUIViewControllerAccountChangeObserver> accountChangeObserver; // @synthesize accountChangeObserver=_accountChangeObserver;
@property(retain, nonatomic) ACUIAccountOperationsHelper *accountOperationsHelper; // @synthesize accountOperationsHelper=_accountOperationsHelper;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
- (void).cxx_destruct;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (_Bool)isShowingActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (void)hideActivityInProgressUI;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)setTaskCompletionAssertionEnabled:(_Bool)arg1;
- (id)_effectiveParentController;
- (void)removeParentSpecifier;
- (void)reloadAllParentSpecifiersAnimated:(_Bool)arg1;
- (void)reloadAllParentSpecifiers;
- (void)reloadParentSpecifier;
- (void)setCellsChecked:(_Bool)arg1;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(_Bool)arg2;
- (void)updateValidationPrompt:(id)arg1;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(_Bool)arg2;
- (void)startValidationWithPrompt:(id)arg1;
- (id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(_Bool)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 forceAlert:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (void)doneButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (_Bool)isPresentedAsModalSheet;
- (_Bool)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

