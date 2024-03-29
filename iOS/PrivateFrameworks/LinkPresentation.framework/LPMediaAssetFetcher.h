//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVURLAsset, NSMutableData, NSString, NSURL, NSURLSession;

__attribute__((visibility("hidden")))
@interface LPMediaAssetFetcher
{
    CDUnknownBlockType _completionHandler;
    AVURLAsset *_asset;
    _Bool _hasAudio;
    NSString *_MIMEType;
    NSURLSession *_session;
    NSMutableData *_receivedData;
    _Bool _loadingIsNonAppInitiated;
    _Bool _shouldDownloadIfPossible;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDownloadIfPossible; // @synthesize shouldDownloadIfPossible=_shouldDownloadIfPossible;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)audioProperties;
- (id)videoProperties;
- (void)_completedWithAudio:(id)arg1;
- (void)_completedWithVideo:(id)arg1;
- (void)cancel;
- (void)stopLoading;
- (void)_resolveVideo;
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

