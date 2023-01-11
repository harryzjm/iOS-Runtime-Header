//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVRunLoopCondition, AVWeakReference, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetReaderOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    _Bool alwaysCopiesSampleData;
    _Bool supportsRandomAccess;
    NSArray *currentTimeRanges;
    AVWeakReference *weakReferenceToAssetReader;
    struct OpaqueFigAssetReader *figAssetReader;
    int extractionID;
    AVRunLoopCondition *sampleBufferAvailabilityCondition;
    _Bool currentConfigurationIsFinal;
    _Bool extractionCompleteForCurrentConfiguration;
    int finished;
    _Bool maximizePowerEfficiency;
}

@end

