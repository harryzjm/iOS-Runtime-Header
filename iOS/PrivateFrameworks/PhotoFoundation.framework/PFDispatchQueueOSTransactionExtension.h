//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PFDispatchQueue;
@protocol OS_os_transaction;

@interface PFDispatchQueueOSTransactionExtension
{
    PFDispatchQueue *_queue;
    NSObject<OS_os_transaction> *_currentTransaction;
    unsigned long long _transactionUseCount;
    struct os_unfair_lock_s _lock;
}

- (void).cxx_destruct;
- (void)dispatchTransactionName:(id)arg1 asyncWithCurrentQOS:(CDUnknownBlockType)arg2;
- (void)dispatchTransactionName:(id)arg1 qos:(unsigned int)arg2 async:(CDUnknownBlockType)arg3;
- (void)dispatchTransactionName:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)_blockCompleted;
- (id)newBlockInfo;
- (void)installOnQueue:(id)arg1;
- (id)description;
- (id)init;

@end

