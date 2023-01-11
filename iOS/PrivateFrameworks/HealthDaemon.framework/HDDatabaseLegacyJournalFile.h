//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDJournalChapter-Protocol.h>

@class NSFileHandle, NSString, NSURL;

@interface HDDatabaseLegacyJournalFile : NSObject <HDJournalChapter>
{
    NSURL *_URL;
    NSFileHandle *_fileHandle;
    unsigned int _version;
}

+ (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 error:(id *)arg7 handler:(CDUnknownBlockType)arg8;
+ (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void *)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 error:(id *)arg7 handler:(CDUnknownBlockType)arg8;
+ (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 fileHandle:(id)arg3 version:(unsigned int)arg4 mapping:(void *)arg5 length:(unsigned long long)arg6 error:(id *)arg7 handler:(CDUnknownBlockType)arg8;
+ (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 fileHandle:(id)arg3 version:(unsigned int)arg4 error:(id *)arg5 handler:(CDUnknownBlockType)arg6;
+ (_Bool)_loadJournalFromMapping:(void *)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id *)arg4 error:(id *)arg5;
+ (_Bool)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id *)arg2 error:(id *)arg3;
+ (id)_loadJournalEntry:(id)arg1;
+ (id)_fileHandleForFileName:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (_Bool)flushDataToDisk:(id *)arg1;
- (_Bool)appendData:(id)arg1 entryClass:(Class)arg2 error:(id *)arg3;
- (_Bool)canAppendData:(id)arg1;
- (_Bool)createAndOpenForWritingWithError:(id *)arg1;
- (id)_fullPath;
- (unsigned int)enumerateEntriesWithProfile:(id)arg1 transaction:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
- (unsigned int)readVersionWithError:(id *)arg1;
- (_Bool)removeWithError:(id *)arg1;
- (void)close;
- (_Bool)openForReadingWithError:(id *)arg1;
@property(readonly, nonatomic) double modificationTime;
@property(readonly, nonatomic) long long size;
@property(readonly, nonatomic) _Bool isOpen;
@property(readonly, copy, nonatomic) NSString *journalPath;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
