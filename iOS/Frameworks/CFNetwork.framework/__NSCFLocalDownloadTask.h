//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSURLSessionDownloadTaskSubclass-Protocol.h>
#import <CFNetwork/__NSCFLocalDownloadFileOpener-Protocol.h>

@class NSDictionary, NSObject, NSString, __NSCFLocalDownloadFile;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface __NSCFLocalDownloadTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener>
{
    CDUnknownBlockType _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    unsigned long long _totalWrote;
    CDUnknownBlockType _resumeCallback;
    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long _transientWriteProgress;
    CDUnknownBlockType _afterDidReportProgressOnQueue;
    CDUnknownBlockType _dataAckCompletion;
    int _seqNo;
    _Bool _canWrite;
    _Bool _suppressProgress;
    _Bool _needFinish;
    _Bool _didIssueNeedFinish;
}

+ (id)_requestFromResumeDataDictionary:(id)arg1;
+ (id)_requestFromResumeDataDictionary:(id)arg1 key:(id)arg2;
+ (id)_expandResumeData:(id)arg1;
@property(copy) CDUnknownBlockType dataAckCompletion; // @synthesize dataAckCompletion=_dataAckCompletion;
@property(copy) CDUnknownBlockType _afterDidReportProgressOnQueue; // @synthesize _afterDidReportProgressOnQueue;
@property(copy) CDUnknownBlockType resumeCallback; // @synthesize resumeCallback=_resumeCallback;
@property(retain) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
@property(copy) CDUnknownBlockType fileCompletion; // @synthesize fileCompletion=_fileCompletion;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_task_onqueue_didFinish;
- (void)_supplyExtractorWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkWrite;
- (void)_private_fileCompletion;
- (void)_private_errorCompletion;
- (id)createResumeInformation:(id)arg1;
- (void)suspendExtractor;
- (void)terminateExtractorWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeAndResume;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_private_posixError:(int)arg1;
- (void)reportProgress:(unsigned long long)arg1;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInitialization;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)dealloc;
- (id)initWithTask:(id)arg1;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned long long)arg3;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned long long)arg3;
- (_Bool)setupForNewDownload:(id)arg1;
- (id)explicitDownloadDirectory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

