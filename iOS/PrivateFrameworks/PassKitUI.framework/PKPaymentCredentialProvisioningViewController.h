//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPaymentProvisioningControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerCanHideSetupLaterButton-Protocol.h>
#import <PassKitUI/PKPaymentSetupViewControllerRequiresPreflightProtocol-Protocol.h>

@class NSString, PKPaymentCredential, PKPaymentCredentialMetadataTableController, PKPaymentSetupProduct, UIImage;

@interface PKPaymentCredentialProvisioningViewController <PKPaymentSetupViewControllerCanHideSetupLaterButton, PKPaymentSetupViewControllerRequiresPreflightProtocol, PKPaymentProvisioningControllerDelegate>
{
    UIImage *_passSnapshot;
    UIImage *_passSnapshotPlaceHolder;
    unsigned long long _credentialProvisioningType;
    unsigned long long _displayType;
    PKPaymentCredentialMetadataTableController *_metadataController;
    PKPaymentCredential *_paymentCredential;
    PKPaymentSetupProduct *_setupProduct;
    _Bool _allowsManualEntry;
}

+ (id)nextCredentialViewControllerWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 setupProduct:(id)arg4 allowsManualEntry:(_Bool)arg5;
- (void).cxx_destruct;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (_Bool)isComplete;
- (id)readonlyFieldIdentifiers;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (void)_performFinishWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performProvisionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performTermsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performRequirementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_preflightCredentialFieldsWithCompletion:(CDUnknownBlockType)arg1;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_updatePassSnapshotHeader;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_skipCard;
- (void)addDifferentCard:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

