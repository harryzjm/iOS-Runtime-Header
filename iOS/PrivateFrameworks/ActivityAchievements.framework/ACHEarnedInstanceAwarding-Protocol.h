//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievements/NSObject-Protocol.h>

@class HDDatabaseTransactionContext, NSDateInterval, NSSet, NSString;

@protocol ACHEarnedInstanceAwarding <NSObject>
@property(readonly, nonatomic) NSString *uniqueName;
- (NSSet *)earnedInstancesForHistoricalInterval:(NSDateInterval *)arg1 databaseContext:(HDDatabaseTransactionContext *)arg2;
@end

