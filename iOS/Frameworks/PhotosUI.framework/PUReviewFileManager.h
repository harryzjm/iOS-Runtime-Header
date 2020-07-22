//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUReviewFileManager : NSObject
{
    NSFileManager *__fileManager;
    NSObject<OS_dispatch_queue> *__fileManagementQueue;
    NSURL *__safePathURL;
}

+ (id)defaultManager;
@property(readonly, nonatomic) NSURL *_safePathURL; // @synthesize _safePathURL=__safePathURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_fileManagementQueue; // @synthesize _fileManagementQueue=__fileManagementQueue;
@property(readonly, nonatomic) NSFileManager *_fileManager; // @synthesize _fileManager=__fileManager;
- (void).cxx_destruct;
- (_Bool)_removeItemAtURL:(id)arg1 error:(id *)arg2 stackshot:(id)arg3;
- (_Bool)_allowedToDeleteItemAtURL:(id)arg1;
- (void)removeItemAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileManager:(id)arg1;

@end
