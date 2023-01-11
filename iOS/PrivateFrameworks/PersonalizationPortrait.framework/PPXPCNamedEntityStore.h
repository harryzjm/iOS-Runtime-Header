//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMapTable;

@interface PPXPCNamedEntityStore
{
    NSMapTable *_recordLoadingDelegates;
    NSDate *_lastCallDate;
}

- (void).cxx_destruct;
- (_Bool)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;
- (void)_loadNamedEntityRecordsWithDelegate:(id)arg1;
- (void)_sendChangesToDelegates;
- (void)_sendResetToDelegates;
- (void)_resetNamedEntityRecordsWithDelegate:(id)arg1;
- (_Bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 error:(id *)arg3;
- (void)feedbackNamedEntitiesOverallEngagement:(id)arg1;
- (void)feedbackEngagedNamedEntities:(id)arg1;
- (void)feedbackUsedNamedEntities:(id)arg1;
- (_Bool)clearWithError:(id *)arg1;
- (_Bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id *)arg2;
- (_Bool)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (_Bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 error:(id *)arg4;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 error:(id *)arg3;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 error:(id *)arg3;
- (_Bool)flushDonationsWithError:(id *)arg1;
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 error:(id *)arg6;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)_getLastCallDate;
- (void)_setLastCallDate;
- (id)_init;

@end

