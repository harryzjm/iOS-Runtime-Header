//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface MSVXPCTransactionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMapTable *_openTransactions;
    _Bool _inTransaction;
    NSObject<OS_dispatch_source> *_signalUSR2DispatchSource;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_saveActiveTransactionsToFile;
- (void)_tearDownSignalHandler;
- (void)_setupSignalHandler;
- (void)_onQueueCleanupEndedTransactions;
- (void)_onQueueUpdateInternalTransactionState;
- (id)activeTransactions;
- (_Bool)isTransactionActive:(id)arg1;
- (void)removeActiveTransaction:(id)arg1;
- (void)addActiveTransaction:(id)arg1;
@property(readonly, nonatomic, getter=isInTransaction) _Bool inTransaction;
- (void)dealloc;
- (id)init;

@end
