//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreBookkeeper/SBKSyncTransactionProcessing-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject, NSString, SBKSyncResponseData, SBKTransactionController;
@protocol OS_dispatch_queue;

@interface SBKSyncRequestHandler <SBKSyncTransactionProcessing>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_overrideResponseDomainVersion;
    SBKSyncResponseData *_responseData;
    NSMutableArray *_responseUpdatedKeys;
    NSMutableArray *_responseDeletedKeys;
    NSMutableArray *_responseConflictedKeys;
    NSMutableDictionary *_responseDataByKey;
    SBKTransactionController *_transactionController;
}

+ (long long)conflictDetectionType;
- (void).cxx_destruct;
@property(readonly) SBKTransactionController *transactionController; // @synthesize transactionController=_transactionController;
@property(readonly) SBKSyncResponseData *responseData; // @synthesize responseData=_responseData;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(_Bool *)arg3;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(_Bool)arg4 isDirty:(_Bool *)arg5;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)startTransactionWithSyncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 finishedBlock:(CDUnknownBlockType)arg4;
- (void)clearTransactionResponseData;
- (void)_onQueue_clearTransactionResponseData;
- (id)responseDataForResponseKey:(id)arg1;
@property(readonly) NSArray *responseConflictedKeys; // @synthesize responseConflictedKeys=_responseConflictedKeys;
@property(readonly) NSArray *responseDeletedKeys; // @synthesize responseDeletedKeys=_responseDeletedKeys;
@property(readonly) NSArray *responseUpdatedKeys; // @synthesize responseUpdatedKeys=_responseUpdatedKeys;
@property(copy) NSString *responseDomainVersion;
- (id)initWithBagContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
