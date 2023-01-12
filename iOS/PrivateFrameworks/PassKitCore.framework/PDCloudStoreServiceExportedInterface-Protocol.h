//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSArray, NSSet, NSString, PKCloudStoreZoneQueryConfiguration, PKPaymentTransaction;

@protocol PDCloudStoreServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)performAction:(long long)arg1 inContainerWithName:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)diagnosticSnapshotForContainerWithName:(NSString *)arg1 completion:(void (^)(PKCloudStoreContainerDiagnosticSnapshot *, NSError *))arg2;
- (void)diagnosticInfoForContainerWithName:(NSString *)arg1 completion:(void (^)(PKCloudStoreContainerDiagnostics *, NSError *))arg2;
- (void)shareForZoneName:(NSString *)arg1 containerName:(NSString *)arg2 qualityOfService:(long long)arg3 completion:(void (^)(PKCloudRecordArray *, NSError *))arg4;
- (void)createInvitationForRecipientHandle:(NSString *)arg1 zoneName:(NSString *)arg2 containerName:(NSString *)arg3 qualityOfService:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)declineInvitationForRecipientHandle:(NSString *)arg1 zoneName:(NSString *)arg2 containerName:(NSString *)arg3 qualityOfService:(long long)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)populateEvents:(NSArray *)arg1 forAccountIdentifier:(NSString *)arg2 completion:(void (^)(PKCloudRecordArray *, NSError *))arg3;
- (void)setupCloudDatabaseForContainerName:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)resetApplePayManateeViewWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)checkTLKsMissingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)cloudStoreStatusForContainer:(NSString *)arg1 completion:(void (^)(CKAccountInfo *, _Bool, NSError *))arg2;
- (void)createZone:(NSString *)arg1 containerName:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)deleteZone:(NSString *)arg1 containerName:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)recreateZone:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)uploadTransaction:(PKPaymentTransaction *)arg1 forTransactionSourceIdentifier:(NSString *)arg2 includeServerData:(_Bool)arg3 completion:(void (^)(PKCloudRecordArray *, NSError *))arg4;
- (void)generateRandomTransactionForTransactionSourceIdentifier:(NSString *)arg1 completion:(void (^)(PKCloudRecordArray *, NSError *))arg2;
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(NSString *)arg1 completion:(void (^)(PKCloudRecordArray *, NSError *))arg2;
- (void)simulateCloudStorePushForContainerIdentifier:(NSString *)arg1 completion:(void (^)(PKCloudRecordArray *, NSArray *, NSError *))arg2;
- (void)resetContainerWithIdentifier:(NSString *)arg1 zoneNames:(NSSet *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)cloudStoreRecordArrayWithConfiguration:(PKCloudStoreZoneQueryConfiguration *)arg1 completion:(void (^)(PKCloudRecordArray *, NSError *))arg2;
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(NSString *)arg2 qualityOfService:(long long)arg3 completion:(void (^)(PKCloudRecordArray *, NSError *))arg4;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(NSString *)arg2 qualityOfService:(long long)arg3 completion:(void (^)(PKCloudRecordObject *, NSError *))arg4;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(void (^)(PKCloudRecordArray *, NSError *))arg3;
- (void)removeRecordWithRecordName:(NSString *)arg1 zoneName:(NSString *)arg2 containerName:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)removeAllItems:(unsigned long long)arg1 inZoneName:(NSString *)arg2 containerName:(NSString *)arg3 storeLocally:(_Bool)arg4 completion:(void (^)(NSSet *, NSError *))arg5;
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(NSSet *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

