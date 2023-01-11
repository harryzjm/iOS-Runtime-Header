//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSMutableArray;
@protocol NURenderer, NUSurfaceStorage, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

@interface PILongExposureAccumulator : NSObject
{
    CDStruct_d58201db _pixelSize;
    id <NURenderer> _renderer;
    id <NUSurfaceStorage> _temporaryDestinationStorage;
    id <NUSurfaceStorage> _averageAccumulationStorage;
    id <NUSurfaceStorage> _minimumAccumulationStorage;
    id <NUSurfaceStorage> _maximumAccumulationStorage;
    long long _frameCount;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_accumQueue;
    NSObject<OS_dispatch_semaphore> *_accumSemaphore;
    NSObject<OS_dispatch_semaphore> *_readySemaphore;
    NSObject<OS_dispatch_group> *_doneGroup;
    NSMutableArray *_inputFrames;
    _Bool _finished;
    NSDictionary *_imageOptions;
    NSError *__accumError;
}

- (void).cxx_destruct;
@property(retain) NSError *_accumError; // @synthesize _accumError=__accumError;
- (_Bool)_exportOutputImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 toURL:(id)arg4 uti:(id)arg5 error:(out id *)arg6;
- (id)_dynamismMapWithMinImage:(id)arg1 maxImage:(id)arg2 extent:(CDStruct_996ac03c)arg3;
- (_Bool)writeMaskImage:(id)arg1 UTI:(id)arg2 error:(out id *)arg3;
- (_Bool)writeLongExposureImage:(id)arg1 UTI:(id)arg2 colorSpace:(id)arg3 error:(out id *)arg4;
- (_Bool)_accumulate:(id)arg1 error:(out id *)arg2;
- (void)_accumulate:(id)arg1;
- (_Bool)_initializeAccumulation:(out id *)arg1;
- (void)_initializeAccumulation;
- (void)_start;
- (id)_nextInputFrame;
- (id)nextInputFrame;
- (void)_appendInputFrame:(id)arg1;
- (_Bool)accumulate:(id)arg1 error:(out id *)arg2;
- (void)waitUntilDone;
- (void)_markAsFinished;
- (void)markAsFinished;
- (_Bool)_isReadyForMoreData;
@property(readonly) _Bool isReadyForMoreData;
- (_Bool)_initializeStorage:(id)arg1 image:(id)arg2 error:(out id *)arg3;
- (_Bool)start:(out id *)arg1;
- (void)cancel;
- (id)workingColorSpace;
- (void)dealloc;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 renderer:(id)arg2;

@end
