//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetDownloadSessionInternal, AVMediaSelection, NSArray, NSError, NSURL;

@interface AVAssetDownloadSession : NSObject
{
    AVAssetDownloadSessionInternal *_internal;
}

+ (id)assetDownloadSessionWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4;
+ (void)registerDownloadLocation:(id)arg1 forURLAsset:(id)arg2;
+ (id)assetDownloadSessionWithAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)arg1;
+ (id)assetDownloadSessionWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) AVMediaSelection *resolvedMediaSelection;
@property(readonly, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) unsigned long long downloadToken;
@property(readonly, nonatomic) unsigned long long countOfBytesReceived;
@property(readonly, nonatomic) unsigned long long availableFileSize;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSURL *destinationURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)startLoadingMetadata;
- (void)stop;
- (void)pause;
- (void)start;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 mediaSelections:(id)arg2 destinationURL:(id)arg3 options:(id)arg4;
- (id)initWithDownloadToken:(unsigned long long)arg1;
- (id)initWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)init;
- (id)_common_init;
- (void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)arg1;
- (void)_sendDidResolveMediaSelectionWithMediaSelection:(id)arg1;
- (void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)arg1 currentLoadedTimeRanges:(id)arg2 timeRangeExpectedToLoad:(id)arg3 selectedMediaArray:(id)arg4;
- (void)_sendDownloadFailureToDelegateWithError:(id)arg1;
- (void)_sendDownloadSuccessToDelegate;
- (void)_downloadFailureCallbackWithError:(id)arg1;
- (void)_downloadSuccessCallback;
- (void)_transitionToTerminalStatusForDelegateCallbacksWithStatus:(long long)arg1 error:(id)arg2;
- (void)_removeFigPlaybackItemListeners;
- (void)_addFigPlaybackItemListeners;
- (id)_figPlaybackItemNotificationNames;
- (void)_removeFigAssetListeners;
- (void)_addFigAssetListeners;
- (id)_figAssetNotificationNames;
- (id)_errorFromAssetNotificationPayload:(id)arg1;
- (struct OpaqueFigAsset *)_createDuplicateFigAssetFromAVAsset:(id)arg1;
- (id)_loadedTimeRangesFromFigLoadedTimeRanges:(id)arg1;
- (id)_verifyDownloadConfigurationForAssetType;
- (int)_readyForInspection;
- (int)_primeCache;
- (void)_primeCacheOnDispatchQueue;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;
- (void)_transitionToTerminalStatusAsync:(long long)arg1 error:(id)arg2;
- (void)_transitionToTerminalStatus:(long long)arg1 error:(id)arg2;
- (id)_startOnQueue;
- (id)_startOnQueueFirstTime;
- (void)_startLoadingMetadataOnQueue;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (int)_setFileFigAsset:(struct OpaqueFigAsset *)arg1;
- (struct OpaqueFigAsset *)_figAsset;
- (id)_weakReference;
- (void)_setupFigClientObjectAsync:(id)arg1;
- (id)_setupFigClientObjectForStreaming:(id)arg1;
- (id)_setupFigClientObjectForFileDownload:(id)arg1;

@end
