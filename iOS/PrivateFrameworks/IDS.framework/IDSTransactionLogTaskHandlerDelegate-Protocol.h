//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSTransactionLogTaskHandler, NSArray, NSSet;
@protocol NSSecureCoding;

@protocol IDSTransactionLogTaskHandlerDelegate
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 accountInfoForAliases:(NSSet *)arg2 completion:(void (^)(IDSTransactionLogTaskHandlerAccountInfo *, NSError *))arg3;
- (void)persistedTokenForTaskHandler:(IDSTransactionLogTaskHandler *)arg1 completion:(void (^)(id <NSSecureCoding>, NSError *))arg2;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 persistToken:(id <NSSecureCoding>)arg2 completion:(void (^)(NSError *))arg3;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 messagesFromToken:(id <NSSecureCoding>)arg2 completion:(void (^)(NSArray *, id <NSSecureCoding>, _Bool, NSError *))arg3;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 participantsWithDestinations:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 groupsWithGroupIDs:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
@end

