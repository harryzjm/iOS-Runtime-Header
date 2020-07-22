//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSArray, NSError, SSPurchaseRequest, SUPurchaseBatch, SUPurchaseManager;

@protocol SUPurchaseManagerDelegate <NSObject>

@optional
- (SUPurchaseBatch *)purchaseManager:(SUPurchaseManager *)arg1 purchaseBatchForPurchases:(NSArray *)arg2;
- (SUPurchaseBatch *)purchaseManager:(SUPurchaseManager *)arg1 purchaseBatchForItems:(NSArray *)arg2;
- (void)purchaseManagerWillBeginUpdates:(SUPurchaseManager *)arg1;
- (void)purchaseManagerDidEndUpdates:(SUPurchaseManager *)arg1;
- (void)purchaseManager:(SUPurchaseManager *)arg1 didFinishPurchaseRequest:(SSPurchaseRequest *)arg2 withError:(NSError *)arg3;
- (void)purchaseManager:(SUPurchaseManager *)arg1 willAddPurchases:(NSArray *)arg2;
- (void)purchaseManager:(SUPurchaseManager *)arg1 failedToAddPurchases:(NSArray *)arg2;
- (void)purchaseManager:(SUPurchaseManager *)arg1 didAddPurchases:(NSArray *)arg2;
@end

