//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInputMediaDataRequester, AVAssetWriterInputPassDescription, AVFigAssetWriterTrack, AVKeyPathDependencyManager, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputWritingHelper
{
    AVFigAssetWriterTrack *_assetWriterTrack;
    AVAssetWriterInputMediaDataRequester *_mediaDataRequester;
    _Bool _observingSelf;
    struct __CVPixelBufferPool *_pixelBufferPool;
    AVAssetWriterInputPassDescription *_currentPassDescription;
    AVKeyPathDependencyManager *_keyPathDependencyManager;
    NSObject<OS_dispatch_queue> *_mediaDataRequesterSerialQueue;
    NSObject<OS_dispatch_queue> *_readyForMoreMediaDataObserverSerialQueue;
}

@property(retain, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription; // @synthesize currentPassDescription=_currentPassDescription;
@property(readonly, nonatomic, getter=_assetWriterTrack) AVFigAssetWriterTrack *assetWriterTrack; // @synthesize assetWriterTrack=_assetWriterTrack;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (id)transitionToAndReturnTerminalHelperWithTerminalStatus:(long long)arg1;
- (void)markAsFinishedAndTransitionCurrentHelper:(id)arg1;
- (void)markAsFinished;
- (void)markCurrentPassAsFinished;
- (_Bool)prepareToFinishWritingReturningError:(id *)arg1;
- (void)prepareToEndSession;
- (_Bool)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;
- (void)beginPassIfAppropriate;
- (void)didStartInitialSession;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingReadyForMoreMediaDataKeyPath;
- (void)_startObservingReadyForMoreMediaDataKeyPath;
- (_Bool)mediaDataRequesterShouldRequestMediaData;
- (void)_nudgeMediaDataRequesterIfAppropriate:(id)arg1;
- (void)stopRequestingMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)isReadyForMoreMediaData;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (_Bool)canPerformMultiplePasses;
- (long long)status;
- (void)dealloc;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (id)initWithConfigurationState:(id)arg1 assetWriterTrack:(id)arg2 error:(id *)arg3;
- (id)initWithConfigurationState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

