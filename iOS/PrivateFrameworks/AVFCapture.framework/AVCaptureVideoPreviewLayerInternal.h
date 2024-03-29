//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureConnection, AVCaptureSession, AVSemanticStyle, AVWeakReference, CALayer, NSArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoPreviewLayerInternal : NSObject
{
    NSString *sinkID;
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    struct OpaqueFigCaptureSession *figCaptureSession;
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;
    CALayer *sublayer;
    struct CGSize sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    unsigned int imageQueueSlot;
    struct CGSize previewSize;
    double previewRotationDegrees;
    NSString *gravity;
    _Bool disableActions;
    AVWeakReference *weakReference;
    _Bool isPreviewing;
    long long orientation;
    _Bool automaticallyAdjustsMirroring;
    _Bool mirrored;
    _Bool isPresentationLayer;
    _Bool visible;
    _Bool isPaused;
    _Bool chromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform captureDeviceTransform;
    double rollAdjustment;
    _Bool depthDataDeliverySupported;
    _Bool depthDataDeliveryEnabled;
    _Bool filterRenderingEnabled;
    _Bool unoptimizedFilterRenderingEnabled;
    NSArray *videoPreviewFilters;
    _Bool semanticStyleRenderingSupported;
    _Bool semanticStyleRenderingEnabled;
    AVSemanticStyle *semanticStyle;
    double oddScreenWidth;
    double oddScreenScale;
}

@end

