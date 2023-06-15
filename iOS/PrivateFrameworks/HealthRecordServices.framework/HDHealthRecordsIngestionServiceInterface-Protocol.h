//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDHRSOriginalSignedClinicalDataRecord, HKClinicalGatewayFeature, HKClinicalIngestionContext, HKSignedClinicalDataRecord, HKSignedClinicalDataSource, NSArray, NSURL, NSUUID;

@protocol HDHealthRecordsIngestionServiceInterface
- (void)remote_triggerDownloadPublicKeysForCatalogURL:(NSURL *)arg1 shouldPersist:(_Bool)arg2 completion:(void (^)(NSArray *, NSNumber *, NSError *))arg3;
- (void)remote_triggerDownloadIssuerRegistryForCatalogURL:(NSURL *)arg1 shouldPersist:(_Bool)arg2 completion:(void (^)(NSArray *, NSNumber *, NSError *))arg3;
- (void)remote_willDeleteSignedClinicalDataRecordWithSyncIdentifier:(NSUUID *)arg1;
- (void)remote_didUpdateSignedClinicalDataRecord:(HKSignedClinicalDataRecord *)arg1;
- (void)remote_addCardToWalletForRecord:(HKSignedClinicalDataRecord *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_reverifySignatureForRecord:(HDHRSOriginalSignedClinicalDataRecord *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg3;
- (void)remote_processOriginalSignedClinicalDataRecords:(NSArray *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg3;
- (void)remote_handleSignedClinicalDataFeature:(HKClinicalGatewayFeature *)arg1 context:(HKClinicalIngestionContext *)arg2 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg3;
- (void)remote_parseSignedClinicalData:(HKSignedClinicalDataSource *)arg1 options:(unsigned long long)arg2 completion:(void (^)(HKSignedClinicalDataParsingResult *, NSError *))arg3;
@end

