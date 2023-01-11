//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PPDKStorage : NSObject
{
}

+ (id)sharedInstance;
- (void)_registerForSyncNotifications;
- (void)removeObserver:(id)arg1;
- (id)registerForTopicsRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
- (id)registerForTopicsRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
- (id)registerForNamedEntitiesRemoteDeletionWithBlock:(CDUnknownBlockType)arg1;
- (id)registerForNamedEntitiesRemoteAdditionWithBlock:(CDUnknownBlockType)arg1;
- (id)eventForTopicRecord:(id)arg1 sourceDeviceID:(id)arg2;
- (id)topicRecordFromEvent:(id)arg1;
- (id)eventForNamedEntityRecord:(id)arg1 sourceDeviceID:(id)arg2;
- (id)namedEntityRecordFromEvent:(id)arg1;
- (_Bool)_isFutureCompatibilityVersionAttachedToEvent:(id)arg1;
- (_Bool)deleteAllEventsInEventStream:(id)arg1 matchingPredicate:(id)arg2 error:(id *)arg3;
- (_Bool)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (_Bool)deleteEvents:(id)arg1 error:(id *)arg2;
- (_Bool)saveEvents:(id)arg1 error:(id *)arg2;
- (_Bool)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 readMetaData:(_Bool)arg5 error:(id *)arg6 block:(CDUnknownBlockType)arg7;
- (_Bool)iterEventBatchesMatchingPredicate:(id)arg1 streams:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 error:(id *)arg5 block:(CDUnknownBlockType)arg6;
- (id)_readWriteKnowledgeStore;
- (id)tombstoneStream;
- (id)topicStream;
- (id)entityStream;
- (double)namedEntityWriteBatchInterval;
- (unsigned int)namedEntityWriteBatchSize;
- (double)topicWriteBatchInterval;
- (unsigned int)topicWriteBatchSize;
- (unsigned int)readBatchSize;

@end
