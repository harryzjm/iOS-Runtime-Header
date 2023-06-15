//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/PDXPCServiceExportedInterface-Protocol.h>

@class NSSet, NSString, PKAppletSubcredentialSharingInvitation, PKBarcodeEventMetadataRequest, PKPaymentPass, PKPaymentTransaction;

@protocol NPKNanoPassDaemonConnectionProtocol <PDXPCServiceExportedInterface>
- (void)fetchRelevantPassTuplesWithCompletion:(void (^)(NSArray *))arg1;
- (void)canNotifyAboutExpressModeWithCompletion:(void (^)(_Bool))arg1;
- (void)addUserNotificationOfType:(unsigned long long)arg1 passUniqueID:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)noteWillDeleteAccountsWithCompletion:(void (^)(void))arg1;
- (void)identityPassPrearmStatusWithCompletion:(void (^)(long long))arg1;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 shouldFetchAnonymizationSaltFromRemoteDevice:(_Bool)arg2 completion:(void (^)(PKPaymentPass *, NSError *))arg3;
- (void)startSubcredentialProvisioningOnRemoteDeviceForMailboxAddress:(NSString *)arg1 activationCode:(NSString *)arg2;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(PKAppletSubcredentialSharingInvitation *)arg1;
- (void)canAcceptInvitationOnRemoteDeviceForInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)handleApplicationRedirectRequestOnPairedDeviceForPaymentPass:(PKPaymentPass *)arg1 transaction:(PKPaymentTransaction *)arg2;
- (void)handleMetadataRequestOnPairedDevice:(PKBarcodeEventMetadataRequest *)arg1 withAssociatedApplicationIdentifiers:(NSSet *)arg2 completion:(void (^)(PKBarcodeEventMetadataResponse *, NSError *))arg3;
@end

