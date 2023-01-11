//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, _OSLogCollectionReference, _OSLogEventStoreMetadata;

__attribute__((visibility("hidden")))
@interface _OSLogIndex : NSObject
{
    NSMutableArray *_fileq;
    _OSLogCollectionReference *_lcr;
    NSString *_file;
    CDStruct_42ec109f _metadata;
    _Bool _metadataValid;
    _OSLogEventStoreMetadata *_metadata2;
    struct _os_timesync_db_s *_tsdb;
}

@property(readonly, nonatomic) struct _os_timesync_db_s *timesync; // @synthesize timesync=_tsdb;
- (void).cxx_destruct;
- (void)enumerateFilesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateEntriesInRange:(struct os_timesync_range_s *)arg1 options:(unsigned int)arg2 usingCatalogFilter:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateEntriesInRange:(struct os_timesync_range_s *)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateEntriesFromLastBootWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEntriesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long endWalltime;
@property(readonly, nonatomic) unsigned long long specialStartWalltime;
@property(readonly, nonatomic) unsigned long long persistStartWalltime;
- (_Bool)_buildSingleFileIndex:(id *)arg1;
- (_Bool)_buildFileIndex:(id *)arg1;
- (void)insertIndexFile:(id)arg1;
- (void)insertChunkStore:(id)arg1;
- (void)_foreachIndexFile:(CDUnknownBlockType)arg1;
- (_Bool)_addFileToIndex:(const char *)arg1 error:(id *)arg2;
- (_Bool)addReferenceToIndex:(id)arg1 error:(id *)arg2;
- (_Bool)_openTimesyncDatabase:(id *)arg1;
- (_Bool)_readArchiveMetadata:(id *)arg1;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 error:(id *)arg2;
- (id)initWithCollection:(id)arg1 timesync:(struct _os_timesync_db_s *)arg2 metadata:(id)arg3;
- (id)initWithCollection:(id)arg1 buildLocalIndex:(_Bool)arg2 error:(id *)arg3;
- (id)init;

@end

