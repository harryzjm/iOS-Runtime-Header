//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, CKShare, HDCloudSyncDataUploadRequestRecord, HDCloudSyncMasterRecord, HDCloudSyncRegistryRecord, HDCloudSyncRepository, HDCloudSyncStore, HDCloudSyncStoreRecord, HDCloudSyncZoneIdentifier, NSArray, NSMutableArray, NSUUID;

@interface HDCloudSyncZone : NSObject
{
    NSMutableArray *_records;
    NSMutableArray *_storeRecords;
    NSMutableArray *_orphanedSequenceRecords;
    _Bool _hasLostIdentity;
    _Bool _hasFutureSchemaRecord;
    _Bool _validatedForSharing;
    HDCloudSyncRepository *_repository;
    HDCloudSyncZoneIdentifier *_zoneIdentifier;
    long long _zoneType;
    HDCloudSyncRegistryRecord *_registryRecord;
    long long _purpose;
    CKShare *_zoneShare;
    HDCloudSyncMasterRecord *_masterRecord;
    HDCloudSyncStore *_store;
    HDCloudSyncDataUploadRequestRecord *_dataUploadRequestRecord;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HDCloudSyncDataUploadRequestRecord *dataUploadRequestRecord; // @synthesize dataUploadRequestRecord=_dataUploadRequestRecord;
@property(retain, nonatomic) HDCloudSyncStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) HDCloudSyncMasterRecord *masterRecord; // @synthesize masterRecord=_masterRecord;
@property(nonatomic) _Bool validatedForSharing; // @synthesize validatedForSharing=_validatedForSharing;
@property(retain, nonatomic) CKShare *zoneShare; // @synthesize zoneShare=_zoneShare;
@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
@property(nonatomic) _Bool hasFutureSchemaRecord; // @synthesize hasFutureSchemaRecord=_hasFutureSchemaRecord;
@property(readonly, nonatomic) HDCloudSyncRegistryRecord *registryRecord; // @synthesize registryRecord=_registryRecord;
@property(nonatomic) _Bool hasLostIdentity; // @synthesize hasLostIdentity=_hasLostIdentity;
@property(readonly, nonatomic) long long zoneType; // @synthesize zoneType=_zoneType;
@property(readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(readonly, nonatomic) __weak HDCloudSyncRepository *repository; // @synthesize repository=_repository;
@property(readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier;
- (id)description;
@property(readonly, copy, nonatomic) CKRecordID *zoneShareRecordID;
- (_Bool)_addSubscriptionRecord:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) long long recordCount;
@property(readonly, copy, nonatomic) NSArray *recordNames;
@property(readonly, copy, nonatomic) NSArray *records;
@property(readonly, copy, nonatomic) NSArray *storeRecords;
- (void)removeRecord:(id)arg1;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasOrphanedSequenceRecords;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3;

@end
