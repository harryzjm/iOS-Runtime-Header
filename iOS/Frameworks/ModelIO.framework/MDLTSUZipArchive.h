//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface MDLTSUZipArchive : NSObject
{
    unsigned long long _options;
    NSMutableDictionary *_entriesMap;
    NSMutableOrderedSet *_entries;
    long long _endOfLastEntry;
}

@property(readonly, nonatomic) long long endOfLastEntry; // @synthesize endOfLastEntry=_endOfLastEntry;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValid;
- (id)newArchiveReadChannel;
@property(readonly, nonatomic) unsigned long long archiveLength;
- (void)collapseCommonRootDirectory;
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)entryForName:(id)arg1;
- (id)normalizeEntryName:(id)arg1;
- (id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;
- (id)streamReadChannelForEntry:(id)arg1;
- (id)readChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;
- (id)readChannelForEntry:(id)arg1;
- (void)addEntry:(id)arg1;
- (_Bool)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id *)arg3;
- (void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 previousEntry:(id)arg3 seekAttempts:(unsigned int)arg4 seekForward:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)readFileCommentFromBuffer:(const void **)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)readZip64ExtraFieldFromBuffer:(const void *)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id *)arg4;
- (_Bool)readExtraFieldsFromBuffer:(const void **)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)readFilenameFromBuffer:(const void **)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)readCentralFileHeaderWithBuffer:(const void **)arg1 dataSize:(unsigned long long *)arg2 error:(id *)arg3;
- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)readArchiveWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool hasNonEmptyEntries;
@property(readonly, nonatomic) unsigned long long entriesCount;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

