//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SKPaymentQueueClient, SKXPCConnection;
@protocol OS_dispatch_queue;

@interface SKPaymentQueueInternal : NSObject
{
    _Bool _checkedIn;
    SKPaymentQueueClient *_client;
    _Bool _isRefreshing;
    NSMutableArray *_localTransactions;
    NSMutableArray *_observerReferences;
    NSObject<OS_dispatch_queue> *_observerReferencesAccessQueue;
    SKXPCConnection *_requestConnection;
    SKXPCConnection *_responseConnection;
    _Bool _restoreFinishedDuringRefresh;
    _Bool _restoringCompletedTransactions;
    NSMutableArray *_transactions;
}

- (void).cxx_destruct;
- (void)dealloc;

@end

