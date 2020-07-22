//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileWrapper, NSURL;

@interface QLZipArchive : NSObject
{
    struct archive *_archive;
    NSURL *_url;
    NSData *_data;
    NSFileWrapper *_fileWrapper;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)fileWrapper;
- (void)enumerateEntriesWithHandler:(CDUnknownBlockType)arg1;
- (id)readCurrentDataWithEntry:(struct archive_entry *)arg1 error:(id *)arg2;
- (_Bool)_reopenWithError:(id *)arg1;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (id)libarchiveError;

@end

