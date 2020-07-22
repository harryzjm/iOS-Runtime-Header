//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SSRequestDelegate-Protocol.h>

@class NSError, SSPurchase, SSPurchaseRequest;

@protocol SSPurchaseRequestDelegate <SSRequestDelegate>

@optional
- (void)purchaseRequest:(SSPurchaseRequest *)arg1 purchaseDidSucceed:(SSPurchase *)arg2;
- (void)purchaseRequest:(SSPurchaseRequest *)arg1 purchaseDidFail:(SSPurchase *)arg2 withError:(NSError *)arg3;
@end

