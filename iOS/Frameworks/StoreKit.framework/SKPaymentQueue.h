//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, SKPaymentQueueClient;

@interface SKPaymentQueue : NSObject
{
    id _internal;
}

+ (_Bool)canMakePayments;
+ (id)defaultQueue;
- (void).cxx_destruct;
- (void)_updatePaymentsForMessage:(id)arg1;
- (void)_updateDownloadsForMessage:(id)arg1;
- (void)_setTransactionsWithReply:(id)arg1;
- (void)_sendAppEnteredForegroundMessage;
- (void)_sendCommand:(long long)arg1 forDownloads:(id)arg2;
- (void)_removePaymentsForMessage:(id)arg1;
- (void)_removeNilTransactionObservers;
- (void)_removeLocalTransaction:(id)arg1;
- (void)_refreshPaymentsWithPolicy:(long long)arg1;
- (void)_processUpdates:(id)arg1 trimUnmatched:(_Bool)arg2 sendUpdatedDownloads:(_Bool)arg3;
- (void)_notifyObserversAboutPurchaseIntentsForProducts:(id)arg1;
- (void)_notifyObserversRestoreTransactionsFinished;
- (void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1;
- (void)_notifyObserversAboutRemovals:(id)arg1;
- (void)_notifyObserversAboutDownloadChanges:(id)arg1;
- (void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(_Bool)arg2;
- (void)_handleMessage:(id)arg1 connection:(id)arg2;
- (void)_handleConnectionDisconnect;
- (void)_finishRefreshPayments;
- (void)_establishConnectionIfNeeded;
- (void)_establishConnection;
- (id)_copyTransactionsFromXPCArray:(id)arg1;
- (id)_copyRemovalsFromUnmergedIndexSet:(id)arg1;
- (id)_copyDownloadIDsForDownloads:(id)arg1;
- (void)_sendAppStorePendingPaymentsRequestForMessage:(id)arg1;
- (void)_completeRestoreWithMessage:(id)arg1;
- (id)_applyDownloadChangeset:(id)arg1;
- (void)_daemonLaunchedNotification;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
@property(readonly, nonatomic) SKPaymentQueueClient *paymentQueueClient;
- (id)initWithPaymentQueueClient:(id)arg1;
@property(readonly, nonatomic) NSArray *transactions;
- (void)startDownloads:(id)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
- (void)restoreCompletedTransactions;
- (void)removeTransactionObserver:(id)arg1;
- (void)pauseDownloads:(id)arg1;
- (void)finishTransaction:(id)arg1;
- (void)cancelDownloads:(id)arg1;
- (void)addTransactionObserver:(id)arg1;
- (void)addPayment:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_initSKPaymentQueue;

@end

