//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVCustomVideoCompositorSession, AVVideoComposition, AVWeakReference, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetImageGeneratorInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigAssetImageGenerator *generator;
    AVAsset *asset;
    _Bool appliesPreferredTrackTransform;
    struct CGSize maximumSize;
    NSString *apertureMode;
    CDStruct_1b6d18a9 requestedTimeToleranceBefore;
    CDStruct_1b6d18a9 requestedTimeToleranceAfter;
    NSMutableArray *requests;
    NSObject<OS_dispatch_queue> *requestsQueue;
    int nextRequestID;
    AVVideoComposition *videoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSObject<OS_dispatch_queue> *imageRequestQueue;
    int cancelledRequestIDThreshold;
    NSObject<OS_dispatch_queue> *generateImagesAsyncQueue;
    _Bool prefersStandardDynamicRange;
}

@end
