//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSQLiteEntity-Protocol.h>

@class HDDatabaseTransaction, HDSQLiteDatabase, NSNumber;

@protocol HDSeriesEntity <HDSQLiteEntity>
+ (NSNumber *)hasSeriesDataForHFDKey:(NSNumber *)arg1 transaction:(HDDatabaseTransaction *)arg2 error:(id *)arg3;
- (NSNumber *)HFDKeyWithDatabase:(HDSQLiteDatabase *)arg1 error:(id *)arg2;
@end
