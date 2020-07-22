//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/NSCopying-Protocol.h>

@class ARAnchor, ARCamera, ARFaceData, ARLightEstimate, ARPlaneData, ARPointCloud, ARTrackingErrorData, AVDepthData, NSArray, NSDate;

@interface ARFrame : NSObject <NSCopying>
{
    ARPlaneData *_cachedHorizontalPlaneData;
    ARPlaneData *_cachedVerticalPlaneData;
    _Bool _shouldRestrictFrameRate;
    double _timestamp;
    struct __CVBuffer *_capturedImage;
    AVDepthData *_capturedDepthData;
    double _capturedDepthDataTimestamp;
    ARCamera *_camera;
    NSArray *_anchors;
    ARLightEstimate *_lightEstimate;
    ARPointCloud *_featurePoints;
    ARPointCloud *_referenceFeaturePoints;
    NSArray *_cachedPointClouds;
    ARAnchor *_worldOrigin;
    ARTrackingErrorData *_trackingErrorData;
    long long _renderFramesPerSecond;
    NSDate *_captureDate;
    ARFaceData *_faceData;
}

@property(retain, nonatomic) ARFaceData *faceData; // @synthesize faceData=_faceData;
@property(retain, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property(nonatomic) _Bool shouldRestrictFrameRate; // @synthesize shouldRestrictFrameRate=_shouldRestrictFrameRate;
@property(nonatomic) long long renderFramesPerSecond; // @synthesize renderFramesPerSecond=_renderFramesPerSecond;
@property(retain, nonatomic) ARTrackingErrorData *trackingErrorData; // @synthesize trackingErrorData=_trackingErrorData;
@property(retain, nonatomic) ARAnchor *worldOrigin; // @synthesize worldOrigin=_worldOrigin;
@property(retain, nonatomic) NSArray *cachedPointClouds; // @synthesize cachedPointClouds=_cachedPointClouds;
@property(retain, nonatomic) ARPointCloud *referenceFeaturePoints; // @synthesize referenceFeaturePoints=_referenceFeaturePoints;
@property(retain, nonatomic) ARPointCloud *featurePoints; // @synthesize featurePoints=_featurePoints;
@property(retain, nonatomic) ARLightEstimate *lightEstimate; // @synthesize lightEstimate=_lightEstimate;
@property(copy, nonatomic) NSArray *anchors; // @synthesize anchors=_anchors;
@property(readonly, copy, nonatomic) ARCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) double capturedDepthDataTimestamp; // @synthesize capturedDepthDataTimestamp=_capturedDepthDataTimestamp;
@property(retain, nonatomic) AVDepthData *capturedDepthData; // @synthesize capturedDepthData=_capturedDepthData;
@property(nonatomic) struct __CVBuffer *capturedImage; // @synthesize capturedImage=_capturedImage;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_hitTestFromOrigin:(unsigned long long)arg1 withDirection:types: /* Error: Ran out of types for this method. */;
@property(readonly, nonatomic) ARPointCloud *rawFeaturePoints;
- (struct CGAffineTransform)displayTransformForOrientation:(long long)arg1 viewportSize:(struct CGSize)arg2;
- (id)hitTest:(struct CGPoint)arg1 types:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)initWithCamera:(id)arg1 timestamp:(double)arg2;

@end

