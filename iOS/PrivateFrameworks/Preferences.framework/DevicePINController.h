//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSNumber, NSString, UIBarButtonItem;
@protocol DevicePINControllerDelegate;

@interface DevicePINController
{
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    _Bool _success;
    id _pinDelegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
    _Bool _hasBeenDismissed;
    long long _sepOnceToken;
    NSDictionary *_sepLockInfo;
    _Bool _useSEPLockInfo;
    NSNumber *_requiresKeyboard;
    NSNumber *_pinLength;
    NSNumber *_simplePIN;
    NSNumber *_numericPIN;
    _Bool _hidesNavigationButtons;
    _Bool _hidesCancelButton;
    _Bool _shouldDismissWhenDone;
    _Bool _allowOptionsButton;
    NSString *_doneButtonTitle;
}

+ (_Bool)settingEnabled;
@property(nonatomic) _Bool allowOptionsButton; // @synthesize allowOptionsButton=_allowOptionsButton;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(nonatomic) _Bool shouldDismissWhenDone; // @synthesize shouldDismissWhenDone=_shouldDismissWhenDone;
@property(nonatomic) _Bool hidesCancelButton; // @synthesize hidesCancelButton=_hidesCancelButton;
@property(nonatomic) _Bool hidesNavigationButtons; // @synthesize hidesNavigationButtons=_hidesNavigationButtons;
@property(nonatomic) __weak id <DevicePINControllerDelegate> pinDelegate; // @synthesize pinDelegate=_pinDelegate;
- (void).cxx_destruct;
- (void)setSuccess:(_Bool)arg1;
- (_Bool)success;
- (id)title;
- (void)setPane:(id)arg1;
- (id)pinPane;
- (void)showPasscodeOptions:(id)arg1;
- (id)passcodeOptionsAlertController;
- (void)_setPINPaneToSimple:(_Bool)arg1 simpleLength:(int)arg2 numeric:(_Bool)arg3 requiresKeyboard:(int)arg4;
- (_Bool)_shouldShowOptionsButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)pinInstructionsPromptFont;
- (id)pinInstructionsPrompt;
- (void)cancelButtonTapped;
- (_Bool)_shouldCheckForWeakness;
- (void)_preflightPasswordForWeakness:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_removePinWithOldPassword:(id)arg1;
- (void)pinEntered:(id)arg1;
- (_Bool)_asyncSetPinCompatible;
- (void)_slidePasscodeFieldLeft:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (_Bool)completedInputIsValid:(id)arg1;
- (void)adjustButtonsForPasswordLength:(unsigned long long)arg1;
- (void)_updatePINButtons;
- (_Bool)showSimplePINCancelButtonOnLeft;
- (void)_showPINConfirmationError;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (void)_updateUI;
- (void)_updateErrorTextAndFailureCount:(_Bool)arg1;
- (void)_showFailedAttempts;
- (void)suspend;
- (void)performActionAfterPINRemove;
- (void)performActionAfterPINSet;
- (void)performActionAfterPINEntry;
- (_Bool)attemptValidationWithPIN:(id)arg1;
- (void)_adjustUnblockTime;
- (double)_secondsToBlockForFailedAttempts:(long long)arg1;
- (void)_setUnblockTime:(double)arg1;
- (_Bool)isBlocked;
- (double)blockedTimeRemaining;
- (double)unblockTime;
- (void)_clearBlockedState;
- (void)_setNumberOfFailedAttempts:(long long)arg1;
- (long long)numberOfFailedAttempts;
- (void)_rereadBlockedState;
- (void)_invalidateSEPLockInfo;
- (id)_sepLockInfo;
- (_Bool)_useSEPLockInfo;
@property(nonatomic, getter=isNumericPIN) _Bool numericPIN;
- (_Bool)isCreatingPasscode;
@property(nonatomic) int pinLength;
@property(nonatomic) _Bool simplePIN;
@property(nonatomic) _Bool requiresKeyboard;
- (int)_simplePasscodeType;
- (int)_getScreenType;
- (struct __CFString *)blockedStateKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)defaultsID;
- (_Bool)useProgressiveDelays;
- (_Bool)validatePIN:(id)arg1;
- (id)_createAndShowAnimatedNavBarSpinner;
- (void)setPIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPIN:(id)arg1;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)setLastEntry:(id)arg1;
- (void)setOldPassword:(id)arg1;
- (void)dealloc;
- (id)stringsBundle;
- (id)stringsTable;
- (void)_dismiss;
- (struct CGSize)overallContentSizeForViewInPopover;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)setSpecifier:(id)arg1;
- (id)init;
- (void)willUnlock;

@end

