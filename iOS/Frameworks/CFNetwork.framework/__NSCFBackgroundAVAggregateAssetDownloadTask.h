//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/AVAssetDownloadDelegate-Protocol.h>
#import <CFNetwork/AVAssetDownloadDelegatePrivate-Protocol.h>

@class AVURLAsset, NSArray, NSData, NSDictionary, NSString, NSURLSession;

@interface __NSCFBackgroundAVAggregateAssetDownloadTask <AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate>
{
    _Bool _sentWillDownloadToURL;
    _Bool _sentWillBeginDelayedRequest;
    AVURLAsset *_URLAsset;
    unsigned long long _AVAssetDownloadToken;
    NSArray *_mediaSelections;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    NSDictionary *_options;
    NSString *_childAssetDownloadTasksSessionIdentifier;
    NSURLSession *_childAssetDownloadSession;
    NSArray *_childAssetDownloadTasks;
}

@property(retain) AVURLAsset *URLAsset; // @synthesize URLAsset=_URLAsset;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willBeginDelayedRequest:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_resume;
- (_Bool)_isAVAssetTask;
- (id)response;
- (id)currentRequest;
- (id)originalRequest;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
