//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVURLAsset, AVWeakReference, AVWeakReferencingDelegateStorage, NSArray, NSError, NSNumber, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadSessionInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *player;
    struct OpaqueFigPlaybackItem *playbackItem;
    struct OpaqueFigAsset *figAsset;
    long long assetTypeLoadingStatus;
    long long status;
    _Bool didStartLoadingMetadata;
    NSError *error;
    AVWeakReferencingDelegateStorage *delegateStorage;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSArray *mediaSelections;
    long long priority;
    NSURL *URL;
    NSURL *destinationURL;
    unsigned long long downloadToken;
    NSNumber *cachePrimingDownloadTokenNum;
    AVURLAsset *asset;
    struct CMBaseObject *assetDownloader;
    NSObject<OS_dispatch_source> *fileDownloadProgressTimer;
}

@end

