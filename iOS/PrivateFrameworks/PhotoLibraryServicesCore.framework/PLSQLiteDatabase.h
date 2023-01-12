//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLSQLiteDatabase : NSObject
{
    struct sqlite3 *_database;
}

+ (struct sqlite3 *)_openSQLiteDatabaseAtPath:(const char *)arg1 capabilities:(id)arg2;
+ (id)openDatabaseAtPath:(id)arg1 capabilities:(id)arg2;
+ (int)dataProtectionOpenFlagForCapabilities:(id)arg1;
+ (int)dataProtectionOpenFlagForPath:(id)arg1;
- (_Bool)_execute:(id)arg1;
- (struct sqlite3_stmt *)_prepareStatement:(id)arg1;
- (_Bool)prepareStatement:(id)arg1 andStepThroughResultsWithBlock:(CDUnknownBlockType)arg2;
- (_Bool)prepareAndEvaluateStatement:(id)arg1;
- (_Bool)rollbackTransaction;
- (_Bool)commitTransaction;
- (_Bool)beginExclusiveTransaction;
- (_Bool)beginDeferredTransaction;
- (_Bool)close;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 *)arg1;

@end
