//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <ActivityAchievementsDaemon/HDNanoSyncEntity-Protocol.h>
#import <ActivityAchievementsDaemon/HDSyncEntity-Protocol.h>

@class NSString;

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>
{
}

+ (id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)propertyForSyncProvenance;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)syncEntityIdentifier;
+ (_Bool)supportsSyncStore:(id)arg1;
+ (id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)_insertTemplate:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id *)arg4;
+ (_Bool)_insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (id)allTemplatesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)removeTemplates:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id *)arg5;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (long long)protectionClass;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)createTableSQL;
+ (id)databaseTable;
+ (id)syncedTemplatesObserver;
+ (void)setSyncedTemplatesObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
