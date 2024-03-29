//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVSampleBufferVideoRenderer, AVWeakReference, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVSampleBufferRenderSynchronizerInternal : NSObject
{
    AVWeakReference *weakObserver;
    struct OpaqueCMTimebase *readOnlyTimebase;
    NSObject<OS_dispatch_queue> *rateQueue;
    float rate;
    CDStruct_1b6d18a9 mostRecentlySetTime;
    NSObject<OS_dispatch_queue> *rendererListQueue;
    NSMutableArray *renderers;
    NSMutableArray *timedRenderRemovals;
    NSObject<OS_dispatch_queue> *figSynchronizerAccessQueue;
    struct OpaqueFigSampleBufferRenderSynchronizer *figSynchronizer;
    AVSampleBufferVideoRenderer *rendererTrackedBySTS;
    NSMutableDictionary *STSLabelSinks;
}

@end

