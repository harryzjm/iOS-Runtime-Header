//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BCSPersistentStore : NSObject
{
    struct sqlite3 *_openedDatabase;
    long long _batchCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (const char *)debugQueueName;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct sqlite3 *openedDatabase; // @synthesize openedDatabase=_openedDatabase;
- (const char *)schema;
- (void)schemaVersionDidChangeForDatabase:(struct sqlite3 *)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 *)arg1 fromSchemaVersion:(long long)arg2 toSchemaVersion:(long long)arg3;
- (long long)schemaVersion;
- (id)databasePath;
- (void)endBatch;
- (void)beginBatch;
- (_Bool)deleteDatabaseFile;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

