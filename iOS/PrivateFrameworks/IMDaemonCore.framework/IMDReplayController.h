//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class IMDReplayStorageController, IMDReplayStorageIterationContext, NSDictionary;

@interface IMDReplayController : NSObject
{
    IMDReplayStorageController *_storageController;
    IMDReplayStorageController *_suspendedStorageController;
    _Bool _isRecordingReplayDB;
    NSDictionary *_syncTaskByServiceName;
    IMDReplayStorageIterationContext *_heldDeletionContext;
    CDUnknownBlockType _automationCompletionBlock;
}

+ (long long)batchSize;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType automationCompletionBlock; // @synthesize automationCompletionBlock=_automationCompletionBlock;
@property(retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext; // @synthesize heldDeletionContext=_heldDeletionContext;
@property(retain, nonatomic) NSDictionary *syncTaskByServiceName; // @synthesize syncTaskByServiceName=_syncTaskByServiceName;
@property(readonly, nonatomic) _Bool isRecordingReplayDB; // @synthesize isRecordingReplayDB=_isRecordingReplayDB;
- (void)replayMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)endRecordingReplayDatabase;
- (void)startRecordingReplayDatabase;
- (void)restoreDefaultStoreControllerInstance;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)arg1;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)scheduleSyncTaskForServices:(id)arg1;
- (void)replayMessages;
- (void)_processBatch:(id)arg1;
- (_Bool)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithStorageController:(id)arg1;
- (id)init;

@end

