//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCInterestToken, FCMutexLock, NSDate, NSError, NSHashTable, NSString, NSURL;
@protocol FCAssetHandleDelegate, FCOperationCanceling><FCOperationPrioritizing, OS_dispatch_group;

@interface FCAssetHandle : NSObject
{
    NSString *_filePath;
    NSError *_downloadError;
    id <FCOperationCanceling><FCOperationPrioritizing> _fetchOperation;
    NSHashTable *_downloadRequests;
    NSObject<OS_dispatch_group> *_fetchGroup;
    unsigned long long _countOfPenalizedDownloadAttempts;
    NSDate *_dateOfLastDownloadAttempt;
    FCMutexLock *_stateMutex;
    NSURL *_remoteURL;
    id <FCAssetHandleDelegate> _delegate;
    FCInterestToken *_holdToken;
    NSString *_assetKey;
    long long _lifetimeHint;
}

@property(nonatomic) long long lifetimeHint; // @synthesize lifetimeHint=_lifetimeHint;
@property(copy, nonatomic) NSString *assetKey; // @synthesize assetKey=_assetKey;
@property(retain, nonatomic) FCInterestToken *holdToken; // @synthesize holdToken=_holdToken;
@property(nonatomic) __weak id <FCAssetHandleDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *remoteURL; // @synthesize remoteURL=_remoteURL;
@property(retain, nonatomic) FCMutexLock *stateMutex; // @synthesize stateMutex=_stateMutex;
@property(retain) NSDate *dateOfLastDownloadAttempt; // @synthesize dateOfLastDownloadAttempt=_dateOfLastDownloadAttempt;
@property unsigned long long countOfPenalizedDownloadAttempts; // @synthesize countOfPenalizedDownloadAttempts=_countOfPenalizedDownloadAttempts;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(retain, nonatomic) NSHashTable *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
@property(retain, nonatomic) id <FCOperationCanceling><FCOperationPrioritizing> fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (_Bool)_canRetryDownload;
- (void)_completeFetchWithFilePath:(id)arg1 cancelled:(_Bool)arg2 error:(id)arg3;
- (void)_revisitDownloadRequestPriorities;
- (void)_removeDownloadRequest:(id)arg1;
@property(readonly, copy) NSString *uniqueKey;
@property(readonly) NSURL *streamingURL;
- (id)downloadIfNeededWithGroup:(id)arg1;
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)downloadIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

@end
