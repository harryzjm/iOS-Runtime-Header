//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface OKDocumentsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_documentsAccessQueue;
}

+ (id)defaultManager;
- (_Bool)deleteFileURL:(id)arg1 error:(id *)arg2;
- (id)renameFileURL:(id)arg1 toFileName:(id)arg2 error:(id *)arg3;
- (id)duplicateFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)duplicateFileURL:(id)arg1 error:(id *)arg2;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 copy:(_Bool)arg3 error:(id *)arg4;
- (id)importFileURL:(id)arg1 toDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)importFileURL:(id)arg1 error:(id *)arg2;
- (id)uniqueFileURLForFileName:(id)arg1 error:(id *)arg2;
- (id)uniqueFileURLForFileName:(id)arg1 inDirectoryURL:(id)arg2 error:(id *)arg3;
- (id)documentURLsAtDirectoryURL:(id)arg1 error:(id *)arg2;
- (id)documentURLs:(id *)arg1;
- (id)documentsDirectoryURL;
- (id)localDocumentsDirectoryURL;
- (void)_performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)performAsynchronousFileAccessUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

