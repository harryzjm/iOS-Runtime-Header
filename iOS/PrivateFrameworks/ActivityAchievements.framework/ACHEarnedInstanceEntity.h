//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <ActivityAchievements/HDNanoSyncEntity-Protocol.h>
#import <ActivityAchievements/HDSyncEntity-Protocol.h>

@class NSString;

@interface ACHEarnedInstanceEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>
{
}

+ (id)codableEarnedInstanceForEarnedInstanceInDatabase:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)propertyForSyncProvenance;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)syncEntityIdentifier;
+ (_Bool)supportsSyncStore:(id)arg1;
+ (id)_insertEarnedInstance:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)_insertEarnedInstances:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (id)_earnedInstancesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)removeAllEarnedInstancesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)removeEarnedInstances:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)allEarnedInstancesWithProfile:(id)arg1 error:(id *)arg2;
+ (id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)protectionClass;
+ (id)columnsDefinition;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)syncedEarnedInstancesObserver;
+ (void)setSyncedEarnedInstancesObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

