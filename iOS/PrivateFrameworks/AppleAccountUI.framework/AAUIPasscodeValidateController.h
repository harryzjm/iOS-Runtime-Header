//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/DevicePINControllerDelegate-Protocol.h>

@class AAUICDPHelper, AAUIDevicePINController, NSString, PSSetupController;
@protocol AAUIPasscodeValidationDelegate;

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate>
{
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    AAUIDevicePINController *_pinController;
    CDUnknownBlockType _passcodeValidationCompletion;
    struct os_unfair_lock_s _completionLock;
    id <AAUIPasscodeValidationDelegate> _delegate;
}

+ (id)stingrayControllerWithPresenter:(id)arg1 forceInline:(_Bool)arg2;
+ (id)stingrayControllerWithPresenter:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AAUIPasscodeValidationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)devicePINController:(id)arg1 canCancelWithCompletion:(CDUnknownBlockType)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
- (void)didCancelEnteringPIN;
- (void)dismissFlowWithLocalSecret:(id)arg1 error:(id)arg2;
- (void)didAcceptEnteredPIN:(id)arg1;
- (id)_specifierForMode:(int)arg1;
- (void)_setupNavController;
- (id)_presentingViewController;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (void)createPasscodeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)validatePasscodeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateStingrayPasscodeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setPasscodeValidationCompletion:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)passcodeValidationCompletion;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
