//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudDocs/NSProgressReporting-Protocol.h>

@class BRGlobalProgressProxy, BRUploadAllFilesForLogOutOperation, NSMutableArray, NSOperationQueue, NSString;

@interface BRDownloadAndUploadAllFilesForLogOutOperation <NSProgressReporting>
{
    BRGlobalProgressProxy *_progress;
    NSMutableArray *_fileCoordinators;
    CDUnknownBlockType _downloadAllFilesCompletionBlock;
    NSOperationQueue *_internalQueue;
    BRUploadAllFilesForLogOutOperation *_uploadOp;
}

@property(retain) BRGlobalProgressProxy *progress; // @synthesize progress=_progress;
@property(copy) CDUnknownBlockType downloadAllFilesCompletionBlock; // @synthesize downloadAllFilesCompletionBlock=_downloadAllFilesCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

