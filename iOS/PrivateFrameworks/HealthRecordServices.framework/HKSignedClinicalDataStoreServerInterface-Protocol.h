//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthRecordServices/NSObject-Protocol.h>

@class HKMedicalRecord, HKSignedClinicalDataRecord, HKSignedClinicalDataSource, NSArray, NSNumber, NSString, NSURL, NSUUID;

@protocol HKSignedClinicalDataStoreServerInterface <NSObject>
- (void)remote_triggerDownloadPublicKeysForCatalogURL:(NSURL *)arg1 shouldPersist:(_Bool)arg2 completion:(void (^)(NSArray *, NSNumber *, NSError *))arg3;
- (void)remote_triggerDownloadIssuerRegistryForCatalogURL:(NSURL *)arg1 shouldPersist:(_Bool)arg2 completion:(void (^)(NSArray *, NSNumber *, NSError *))arg3;
- (void)remote_removePublicKeyEntriesWithKeyIDs:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchPublicKeyEntriesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_fetchPublicKeyWithKeyID:(NSString *)arg1 completion:(void (^)(HKSignedClinicalDataRegistryPublicKeyFetchResult *, NSError *))arg2;
- (void)remote_insertOrReplacePublicKeyEntries:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setRegistryPublicKeyContentVersion:(NSNumber *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchCurrentRegistryPublicKeyContentVersionWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)remote_insertOrReplaceIssuerRegistryEntries:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setRegistryIssuerContentVersion:(NSNumber *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchCurrentRegistryIssuerContentVersionWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)remote_reextractSignedClinicalDataRecordsForAccountWithIdentifier:(NSUUID *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_reverifySignatureForRecord:(HKSignedClinicalDataRecord *)arg1 completion:(void (^)(_Bool, long long, NSError *))arg2;
- (void)remote_deleteSignedClinicalDataRecord:(HKSignedClinicalDataRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchSignedClinicalDataGroupBackingMedicalRecord:(HKMedicalRecord *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HKSignedClinicalDataGroup *, NSError *))arg3;
- (void)remote_storeSignedClinicalData:(HKSignedClinicalDataSource *)arg1 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg2;
- (void)remote_parseSignedClinicalData:(HKSignedClinicalDataSource *)arg1 options:(long long)arg2 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg3;
@end

