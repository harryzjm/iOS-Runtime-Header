//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDCircleDelegate-Protocol.h>
#import <CoreCDPInternal/CDPDSecureBackupDelegate-Protocol.h>

@class CDPContext, CDPDCircleController, CDPDPCSController, CDPDSecureBackupController;
@protocol CDPStateUIProviderInternal;

@interface CDPDStateMachine : NSObject <CDPDSecureBackupDelegate, CDPDCircleDelegate>
{
    CDPContext *_context;
    id <CDPStateUIProviderInternal> _uiProvider;
    CDPDPCSController *_pcsController;
    CDPDCircleController *_circleController;
    CDPDSecureBackupController *_secureBackupController;
    _Bool _attemptedCDPEnable;
}

@property(nonatomic) _Bool attemptedCDPEnable; // @synthesize attemptedCDPEnable=_attemptedCDPEnable;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(retain, nonatomic) CDPContext *context; // @synthesize context=_context;
@property(retain, nonatomic) CDPDPCSController *pcsController; // @synthesize pcsController=_pcsController;
@property(retain, nonatomic) CDPDCircleController *circleController; // @synthesize circleController=_circleController;
@property(retain, nonatomic) CDPDSecureBackupController *secureBackupController; // @synthesize secureBackupController=_secureBackupController;
- (void).cxx_destruct;
- (id)secureChannelContextForController:(id)arg1;
- (id)contextForController:(id)arg1;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg2;
- (void)promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (void)_disableCloudDataProtectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetAccountCDPStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableSecureBackupWithCircleJoinResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postRecoveryEnableSecureBackupWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned long long)arg2 useCachedSecret:(_Bool)arg3 circleJoinResult:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned long long)arg2 useCachedSecret:(_Bool)arg3 circleJoinResult:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleInteractiveRecoveryFlowWithCircleJoinResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_recoverSecureBackupWithCircleJoinResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_confirmCDPEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_preflightAccountStateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldAllowCDPEnrollment;
- (void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshAndAuthenticateWithContext:(id)arg1;
- (void)_performInteractivelyAuthenticatedRepair:(CDUnknownBlockType)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)_predicateForRecordUpgradeCheck;
- (id)_predicateForRecordUpgradeCheckIgnoringBottled;
- (void)_authenticatedShouldPerformRepairWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldPerformRepairWithCompletion:(CDUnknownBlockType)arg1;
- (void)_attemptCDPEnable:(CDUnknownBlockType)arg1;
- (void)_handlePreflightError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleJoinResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRecoveryResetRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_enrollOrDisableCDPAfterEnabledStateVerified:(CDUnknownBlockType)arg1;
- (void)_handleiCDPStatusCheckError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;

@end

