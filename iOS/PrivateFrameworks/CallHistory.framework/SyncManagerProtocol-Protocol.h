//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallHistory/NSObject-Protocol.h>

@class CHRecentCall, NSArray, NSDictionary, NSString;

@protocol SyncManagerProtocol <NSObject>
- (void)resetTimers;
- (double)timerLifetime;
- (double)timerOutgoing;
- (double)timerIncoming;
- (void)updateAllObjects:(NSDictionary *)arg1;
- (void)updateObjects:(NSDictionary *)arg1;
- (void)deleteObjectsWithLimits:(NSDictionary *)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(NSArray *)arg1;
- (void)deleteObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchObjectsWithLimits:(NSDictionary *)arg1;
- (CHRecentCall *)fetchObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchAllObjects;
- (void)insertRecordsWithoutTransactions:(NSArray *)arg1;
- (void)insertWithoutTransaction:(CHRecentCall *)arg1;
- (void)insert:(CHRecentCall *)arg1;
@end

