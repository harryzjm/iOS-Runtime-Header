//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVWeakReference, NSError, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetReaderInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAsset *asset;
    struct OpaqueFigAssetReader *figAssetReader;
    CDStruct_e83c9415 timeRange;
    _Bool readSingleSample;
    NSMutableArray *outputs;
    NSMutableSet *outputFinishedCallbackInvokers;
    long long status;
    NSError *error;
    NSError *errorThatOccurredBeforeStartReading;
    NSObject<OS_dispatch_queue> *statusReadWriteQueue;
}

@end

