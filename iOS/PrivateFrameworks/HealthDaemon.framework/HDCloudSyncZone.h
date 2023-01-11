//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDCloudSyncMasterRecord, HDCloudSyncRepository, HDCloudSyncStore, HDCloudSyncStoreRecord, HDCloudSyncZoneIdentifier, NSMutableArray, NSUUID;

@interface HDCloudSyncZone : NSObject
{
    NSMutableArray *_sequenceRecords;
    _Bool _hasFutureSchemaRecord;
    HDCloudSyncRepository *_repository;
    HDCloudSyncZoneIdentifier *_zoneIdentifier;
    long long _zoneType;
    HDCloudSyncStoreRecord *_storeRecord;
    HDCloudSyncMasterRecord *_masterRecord;
    HDCloudSyncStore *_store;
    long long _purpose;
}

@property(nonatomic) long long purpose; // @synthesize purpose=_purpose;
@property(retain, nonatomic) HDCloudSyncStore *store; // @synthesize store=_store;
@property(nonatomic) _Bool hasFutureSchemaRecord; // @synthesize hasFutureSchemaRecord=_hasFutureSchemaRecord;
@property(readonly, nonatomic) HDCloudSyncMasterRecord *masterRecord; // @synthesize masterRecord=_masterRecord;
@property(readonly, nonatomic) HDCloudSyncStoreRecord *storeRecord; // @synthesize storeRecord=_storeRecord;
@property(readonly, nonatomic) long long zoneType; // @synthesize zoneType=_zoneType;
@property(readonly, copy, nonatomic) HDCloudSyncZoneIdentifier *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(readonly, nonatomic) __weak HDCloudSyncRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (id)description;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _Bool hasOrphanedSequenceRecords;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, copy, nonatomic) NSUUID *storeIdentifier;
- (id)initForZoneIdentifier:(id)arg1 repository:(id)arg2 type:(long long)arg3;

@end

