//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSQLiteEntitySchema-Protocol.h>

@class HDProfile, NSArray, NSDate, NSNumber, NSString, _HKBehavior;

@protocol HDHealthEntitySchema <HDSQLiteEntitySchema>
+ (NSArray *)triggersWithBehavior:(_HKBehavior *)arg1;
+ (NSArray *)indicesWithBehavior:(_HKBehavior *)arg1;
+ (NSString *)createTableSQLWithBehavior:(_HKBehavior *)arg1;
+ (long long)protectionClass;

@optional
+ (NSNumber *)pruneWithProfile:(HDProfile *)arg1 nowDate:(NSDate *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
@end

