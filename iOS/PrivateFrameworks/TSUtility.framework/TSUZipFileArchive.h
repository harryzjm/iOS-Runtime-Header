//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSURL;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSUZipFileArchive
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _archiveLength;
    id <TSUReadChannel> _archiveReadChannel;
    NSURL *_temporaryDirectoryURL;
}

+ (void)readArchiveFromURL:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)readChannel;
- (unsigned long long)archiveLength;
- (_Bool)copyToTemporaryLocationRelativeToURL:(id)arg1;
- (_Bool)reopenWithTemporaryURL:(id)arg1;
- (void)removeTemporaryDirectory;
- (void)createTemporaryDirectoryRelativeToURL:(id)arg1;
- (void)dealloc;
- (id)initWithWriter:(id)arg1 atURL:(id)arg2;
- (_Bool)openWithURL:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
