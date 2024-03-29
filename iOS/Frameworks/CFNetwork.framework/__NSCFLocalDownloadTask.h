//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, NSString, __NSCFLocalDownloadFile;
@protocol OS_dispatch_data;

@interface __NSCFLocalDownloadTask
{
    CDUnknownBlockType _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    long long _totalWrote;
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

+ (id)_expandResumeData:(id)arg1;
@property(retain) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createResumeInformation:(id)arg1;
- (void)terminateExtractorWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInitialization;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)dealloc;
- (struct __CFDictionary *)_copySocketStreamProperties;
- (void)set_keepDownloadTaskFile:(_Bool)arg1;
- (_Bool)_keepDownloadTaskFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

