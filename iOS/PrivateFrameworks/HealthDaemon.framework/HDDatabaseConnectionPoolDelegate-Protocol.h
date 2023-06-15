//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDDatabaseConnectionPool, NSArray;

@protocol HDDatabaseConnectionPoolDelegate <NSObject>
- (void)databasePool:(HDDatabaseConnectionPool *)arg1 didFlushConnections:(NSArray *)arg2;
- (id)newConnectionForPool:(HDDatabaseConnectionPool *)arg1 error:(id *)arg2;
@end

