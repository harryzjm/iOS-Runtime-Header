//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayerInternal, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer
{
    AVCaptureVideoPreviewLayerInternal *_internal;
}

+ (id)layerWithSessionWithNoConnection:(id)arg1;
+ (id)layerWithSession:(id)arg1;
+ (void)initialize;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)didUpdatePreviewImageQueueSlot:(unsigned int)arg1 imageQueue:(id)arg2 rotationDegrees:(double)arg3 size:(struct CGSize)arg4;
- (void)didUpdatePreviewFormatDescription:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)_setVideoPreviewFilters:(id)arg1 checkForExceptionalInput:(_Bool)arg2 exceptionReason:(id *)arg3;
- (_Bool)_filtersAreOptimized:(id)arg1 exceptionReason:(id *)arg2;
- (void)_updateDepthDataDeliverySupported;
- (void)_updatePreviewTransforms;
- (struct CGAffineTransform)captureDeviceTransformForSensorSize:(struct CGSize)arg1 previewSize:(struct CGSize)arg2 sensorToPreviewVTScalingMode:(id)arg3;
- (void)_updateCaptureDeviceTransform;
- (void)setCaptureDeviceTransformNeedsUpdate;
- (void)_setSensorAndEstimatedPreviewSizes;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (id)_input;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (id)weakReference;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)connectionMediaTypes;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (unsigned int)imageQueueSlot;
- (void)setUnoptimizedFilterRenderingEnabled:(_Bool)arg1;
- (_Bool)isUnoptimizedFilterRenderingEnabled;
- (void)setVideoPreviewFilters:(id)arg1;
- (id)videoPreviewFilters;
- (void)setFilterRenderingEnabled:(_Bool)arg1;
- (_Bool)isFilterRenderingEnabled;
- (void)setDepthDataDeliveryEnabled:(_Bool)arg1;
- (_Bool)isDepthDataDeliveryEnabled;
- (_Bool)isDepthDataDeliverySupported;
- (void)setChromaNoiseReductionEnabled:(_Bool)arg1;
- (_Bool)isChromaNoiseReductionEnabled;
- (_Bool)isChromaNoiseReductionSupported;
- (void)setPaused:(_Bool)arg1;
- (_Bool)isPaused;
@property(nonatomic, getter=isMirrored) _Bool mirrored;
- (_Bool)_isMirrored;
@property(nonatomic) _Bool automaticallyAdjustsMirroring;
- (_Bool)_automaticallyAdjustsMirroring;
@property(readonly, nonatomic, getter=isMirroringSupported) _Bool mirroringSupported;
@property(nonatomic) long long orientation;
- (long long)_orientation;
@property(readonly, nonatomic, getter=isOrientationSupported) _Bool orientationSupported;
@property(copy) NSString *videoGravity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isPreviewing) _Bool previewing;
- (void)setSessionWithNoConnection:(id)arg1;
@property(retain, nonatomic) AVCaptureSession *session;
@property(readonly, nonatomic) AVCaptureConnection *connection;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (double)previewRotationDegrees;
- (id)_initWithSession:(id)arg1 makeConnection:(_Bool)arg2;
- (id)initWithSessionWithNoConnection:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;
- (void)centerSublayer:(long long)arg1;

@end
