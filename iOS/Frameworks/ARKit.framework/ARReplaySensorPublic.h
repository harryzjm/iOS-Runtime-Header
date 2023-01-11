//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARReplaySensorProtocol-Protocol.h>

@class ARImageCroppingTechnique, ARParentImageSensorSettings, NSArray, NSMutableDictionary, NSSet, NSString, NSURL;
@protocol ARReplaySensorDelegate, ARSensorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ARReplaySensorPublic : NSObject <ARReplaySensorProtocol>
{
    _Bool _manualCommandLineMode;
    NSMutableDictionary *_nextWrappedImageDataForStreamIdentifierMap;
    NSMutableDictionary *_metadataCache;
    double _recordTimestampToMovieTimestampDifference;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    long long _tick;
    double _frameRateScale;
    double _timestampWhenFramerateChanged;
    NSMutableDictionary *_imageTimestampOfStreamWhenFramerateChanged;
    _Bool _running;
    _Bool _interrupted;
    _Bool _replayStarted;
    _Atomic _Bool _finishedReplaying;
    _Bool _displaySynchronizationMarker;
    long long _displaySynchronizationMarkerFrames;
    struct __CVBuffer *_synchronizationMarker;
    struct __CVPixelBufferPool *_synchronizationMarkerPool;
    struct OpaqueVTPixelTransferSession *_synchronizationTransferSession;
    ARImageCroppingTechnique *_croppingTechnique;
    NSSet *_availableVideoStreams;
    NSSet *_availableMetadataStreams;
    NSSet *_videoStreamsToReplay;
    _Bool _isReplayingManually;
    _Bool _synchronousMode;
    _Bool _recordingTimeToReplayTimeOffsetReset;
    float _advanceFramesPerSecondMultiplier;
    int _imageIndex;
    id <ARSensorDelegate> _delegate;
    id <ARReplaySensorDelegate> _replaySensorDelegate;
    NSURL *_sequenceURL;
    NSString *_deviceModel;
    NSString *_osVersion;
    NSString *_arkitVersion;
    double _nominalFrameRate;
    unsigned long long _recordedSensorTypes;
    NSSet *_recordedResultClasses;
    unsigned long long _forcePlaybackFramesPerSecond;
    long long _nextFrameIndex;
    NSSet *_customDataClasses;
    ARParentImageSensorSettings *_parentImageSensorSettings;
    NSString *_mainVideoStreamIdentifier;
    long long _targetFrameIndex;
    double _recordingTimeToReplayTimeOffset;
    struct CGSize _imageResolution;
}

@property(nonatomic) _Bool recordingTimeToReplayTimeOffsetReset; // @synthesize recordingTimeToReplayTimeOffsetReset=_recordingTimeToReplayTimeOffsetReset;
@property(nonatomic) double recordingTimeToReplayTimeOffset; // @synthesize recordingTimeToReplayTimeOffset=_recordingTimeToReplayTimeOffset;
@property long long targetFrameIndex; // @synthesize targetFrameIndex=_targetFrameIndex;
@property(nonatomic) int imageIndex; // @synthesize imageIndex=_imageIndex;
@property(readonly, nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(retain, nonatomic) NSString *mainVideoStreamIdentifier; // @synthesize mainVideoStreamIdentifier=_mainVideoStreamIdentifier;
@property(retain, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings; // @synthesize parentImageSensorSettings=_parentImageSensorSettings;
@property(copy, nonatomic) NSSet *customDataClasses; // @synthesize customDataClasses=_customDataClasses;
@property float advanceFramesPerSecondMultiplier; // @synthesize advanceFramesPerSecondMultiplier=_advanceFramesPerSecondMultiplier;
@property long long nextFrameIndex; // @synthesize nextFrameIndex=_nextFrameIndex;
@property(nonatomic) unsigned long long forcePlaybackFramesPerSecond; // @synthesize forcePlaybackFramesPerSecond=_forcePlaybackFramesPerSecond;
@property(readonly, nonatomic, getter=isSynchronousMode) _Bool synchronousMode; // @synthesize synchronousMode=_synchronousMode;
@property(readonly, nonatomic) _Bool isReplayingManually; // @synthesize isReplayingManually=_isReplayingManually;
@property(readonly, nonatomic) NSSet *recordedResultClasses; // @synthesize recordedResultClasses=_recordedResultClasses;
@property(readonly, nonatomic) unsigned long long recordedSensorTypes; // @synthesize recordedSensorTypes=_recordedSensorTypes;
@property(readonly, nonatomic) double nominalFrameRate; // @synthesize nominalFrameRate=_nominalFrameRate;
@property(readonly, nonatomic) struct CGSize imageResolution; // @synthesize imageResolution=_imageResolution;
@property(readonly, nonatomic) NSString *arkitVersion; // @synthesize arkitVersion=_arkitVersion;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(readonly, nonatomic) NSURL *sequenceURL; // @synthesize sequenceURL=_sequenceURL;
@property __weak id <ARReplaySensorDelegate> replaySensorDelegate; // @synthesize replaySensorDelegate=_replaySensorDelegate;
@property(nonatomic) __weak id <ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_replaySensorFinishedReplayingData;
- (void)readFileMetadata;
- (id)imageDataToReplayForTimestamp:(double)arg1;
- (void)_didOutputSensorData:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)getNextWrappedItemsFromStream:(id)arg1 converter:(CDUnknownBlockType)arg2;
- (id)getWrappedItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(CDUnknownBlockType)arg3;
- (id)getItemsFromStream:(id)arg1 upToMovieTime:(double)arg2 converter:(CDUnknownBlockType)arg3;
- (id)getResultDataForClasses:(id)arg1 upToRecordTime:(double)arg2;
- (id)getNextWrappedImageDataForReplay;
- (id)peekNextWrappedImageDataForStreamIdentifier:(id)arg1;
- (id)peekNextWrappedImageDataForAllRequiredStreams;
- (CDUnknownBlockType)starDataConverter;
- (CDUnknownBlockType)metadataWrapperConverter:(Class)arg1;
- (CDUnknownBlockType)keyedArchiveConverterForClasses:(id)arg1;
- (CDUnknownBlockType)keyedArchiveConverter:(Class)arg1;
- (void)advance;
- (void)tick;
- (id)wrappedImageDataOrderedByTime:(id)arg1;
- (void)endReplay;
- (CDStruct_1b6d18a9)currentCMTime;
- (double)currentTime;
- (void)startReplayIfNeeded;
- (void)prepareForReplay;
- (_Bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) _Bool finishedReplaying;
- (id)customDataForTimestamp:(double)arg1;
- (id)replayTechniqueForResultDataClasses:(id)arg1;
- (void)advanceToFrameIndex:(long long)arg1;
- (void)advanceFrame;
- (void)endInterruption;
- (void)interrupt;
- (void)stop;
- (void)start;
- (id)availableVideoFormatForDeviceType:(id)arg1 position:(long long)arg2;
@property(readonly, nonatomic) NSArray *recordedResultClassList;
- (unsigned long long)providedDataTypes;
- (void)dealloc;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(_Bool)arg2 synchronousMode:(_Bool)arg3;
- (id)initWithSequenceURL:(id)arg1 manualReplay:(_Bool)arg2;
- (id)initWithDataFromFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long powerUsage;
@property(readonly) Class superclass;

@end
