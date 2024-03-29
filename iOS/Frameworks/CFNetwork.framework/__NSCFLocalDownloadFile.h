//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;

@interface __NSCFLocalDownloadFile : NSObject
{
    struct stat _stat;
    NSObject<OS_dispatch_io> *_writeIO;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _finished;
    NSString *_path;
    _Bool _createdPlaceholder;
    _Bool _skipUnlink;
    _Bool _truncateFile;
    int _error;
    id <__NSCFLocalDownloadFileOpener> _fileProvider;
    CDUnknownBlockType _finishCompletion;
    NSString *_protectionType;
}

@property(retain) NSString *path; // @synthesize path=_path;
- (void)dealloc;

@end

