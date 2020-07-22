//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARSensor-Protocol.h>

@class AVAssetReader, AVAssetReaderOutputMetadataAdaptor, AVAssetReaderTrackOutput, NSMutableArray, NSString;
@protocol ARReplaySensorDelegate, ARSensorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ARReplaySensor : NSObject <ARSensor>
{
    NSMutableArray *_arImageData;
    NSMutableArray *_arAccelerometerData;
    NSMutableArray *_arGyroData;
    NSMutableArray *_arDeviceOrientationData;
    NSObject<OS_dispatch_queue> *_replayQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _startTime;
    int _imageIndexForPreloading;
    int _imageIndex;
    int _accelDataIndex;
    int _gyroDataIndex;
    int _deviceOrientationDataIndex;
    _Bool _replayInProgress;
    _Bool _dataLoadedFromAsset;
    struct opaqueCMSampleBuffer *_nextSampleBuffer;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_imageOutput;
    AVAssetReaderTrackOutput *_depthOutput;
    struct opaqueCMSampleBuffer *_nextDepthSampleBuffer;
    AVAssetReaderOutputMetadataAdaptor *_oldMotionOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_accelOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_gyroOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_imageOutputMetadataAdaptor;
    AVAssetReaderOutputMetadataAdaptor *_deviceOrientationOutputMetadataAdaptor;
    unsigned long long _sensorDataTypes;
    id <ARSensorDelegate> _delegate;
    id <ARReplaySensorDelegate> _replaySensorDelegate;
    NSString *_deviceModel;
    unsigned long long _recordedSensorTypes;
}

@property(readonly, nonatomic) unsigned long long recordedSensorTypes; // @synthesize recordedSensorTypes=_recordedSensorTypes;
@property(readonly, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(nonatomic) __weak id <ARReplaySensorDelegate> replaySensorDelegate; // @synthesize replaySensorDelegate=_replaySensorDelegate;
@property(nonatomic) __weak id <ARSensorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)readFileMetadataFromAsset:(id)arg1;
- (struct __CVBuffer *)requestNextDepthPixelBufferForTimestamp:(double)arg1;
- (struct __CVBuffer *)requestNextPixelBufferForTimestamp:(double)arg1;
- (void)enumerateDataWithIdentifier:(id)arg1 inOutputAdaptor:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)unpackItemsOfClass:(Class)arg1 withIdentifier:(id)arg2 inOutputAdaptor:(id)arg3;
- (void)preloadNextPixelBuffers:(int)arg1;
- (id)getNextDeviceOrientationData;
- (id)getNextGyroData;
- (id)getNextAccelerometerData;
- (id)getNextImageData;
- (_Bool)hasDeviceOrientationDataForTime:(double)arg1;
- (_Bool)hasGyroDataForTime:(double)arg1;
- (_Bool)hasAccelerometerDataForTime:(double)arg1;
- (_Bool)hasImageDataForTime:(double)arg1;
- (_Bool)hasMoreData;
- (void)tick;
- (void)replayData;
- (void)readMetadataIntoArrays;
- (id)createAndAddMetadataAdaptorForTrack:(id)arg1;
- (_Bool)track:(id)arg1 hasMetadataIdentifier:(id)arg2;
- (void)failWithError:(id)arg1;
- (void)initializeAssetReaderWithAsset:(id)arg1;
- (void)stop;
- (void)start;
- (unsigned long long)providedDataTypes;
- (void)dealloc;
- (id)initWithDataFromFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long powerUsage;
@property(readonly) Class superclass;

@end

