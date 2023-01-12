//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEONavdCacheDBReader, GEONavdCacheDBWriter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdCachePersistenceManager : NSObject
{
    GEONavdCacheDBWriter *_writer;
    GEONavdCacheDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)_removeAllEntries;
- (long long)_numberOfEntries;
- (void)_enumerateAllForCacheEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_enumerateAllEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_deleteFromDiskWithKey:(id)arg1;
- (void)_deleteRowWithRowId:(long long)arg1;
- (id)_readValueWithKey:(id)arg1;
- (long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2;
- (id)_entryWithRowId:(long long)arg1;
- (long long)_rowIdOfKey:(id)arg1;
- (long long)_threadUnsafeRowIdOfKey:(id)arg1;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1;
- (double)_nextTimeStampForRefreshTimer;
- (void)_removeLegacyCacheFromPath:(id)arg1;
- (void)_removeOldFormatCacheFromPath:(id)arg1;
- (void)_removeFileIfItExistsAtPath:(id)arg1;
- (void)tearDown;
- (id)initWithPath:(id)arg1 legacyPath:(id)arg2;
- (id)init;

@end

