//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentCredential;

@protocol PKPaymentSetupCredentialsSectionControllerDelegate <NSObject>
- (void)setShowNoResultsView:(_Bool)arg1;
- (void)showCredentialDeletionError;
- (void)showUnableToDeleteSafariCredentialError;
- (void)showUnableToDeleteCredentialError;
- (void)showDeleteConfirmationWithCompletion:(void (^)(_Bool))arg1;
- (void)showMaxSelectionAlertForCredential:(PKPaymentCredential *)arg1;
- (void)credentialSelectionDidChange:(_Bool)arg1;
- (void)presentUnavailableDetailsForCredential:(PKPaymentCredential *)arg1;
- (void)presentRefundFlowForCredential:(PKPaymentCredential *)arg1;
@end

