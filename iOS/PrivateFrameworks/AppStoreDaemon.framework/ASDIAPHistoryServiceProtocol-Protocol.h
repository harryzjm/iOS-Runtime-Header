//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber;

@protocol ASDIAPHistoryServiceProtocol
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 forActiveAccountWithReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)setSubscriptionEntitlementsWithDictionary:(NSDictionary *)arg1 forAccountID:(NSNumber *)arg2;
- (void)refreshIAPsForActiveAccountWithReplyHandler:(void (^)(NSError *))arg1;
- (void)getIAPsForActiveAccountWithAdamIDs:(NSArray *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)getAllIAPsForActiveAccountWithReplyHandler:(void (^)(NSArray *, NSError *))arg1;
@end
