//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultData-Protocol.h>
#import <ARKit/NSCopying-Protocol.h>

@class MISSING_TYPE, NSDictionary, NSString;
@protocol OS_dispatch_semaphore;

@interface ARFaceTrackingData : NSObject <ARResultData, NSCopying>
{
    vector_fff08e2a _meshVertices;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))>> _verticesImageSpace;
    vector_fff08e2a _normals;
    struct vector<float, std::__1::allocator<float>> _blendShapeCoefficients;
    CDStruct_14d5dc5e _transform;
    NSObject<OS_dispatch_semaphore> *_normalsSemaphore;
    NSObject<OS_dispatch_semaphore> *_imageVerticesSemaphore;
    NSDictionary *_trackingData;
    MISSING_TYPE *_lookAtPoint;
    CDStruct_14d5dc5e _leftEyeTransform;
    CDStruct_14d5dc5e _rightEyeTransform;
}

+ (id)sharedNeutralGeometry;
@property(readonly, nonatomic) MISSING_TYPE *lookAtPoint; // @synthesize lookAtPoint=_lookAtPoint;
@property(readonly, nonatomic) CDStruct_14d5dc5e rightEyeTransform; // @synthesize rightEyeTransform=_rightEyeTransform;
@property(readonly, nonatomic) CDStruct_14d5dc5e leftEyeTransform; // @synthesize leftEyeTransform=_leftEyeTransform;
@property(readonly, nonatomic) NSDictionary *trackingData; // @synthesize trackingData=_trackingData;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) const MISSING_TYPE **imageVertices;
@property(readonly, nonatomic) const MISSING_TYPE **normals;
@property(readonly, nonatomic) unsigned long long normalCount;
@property(readonly, nonatomic) const float *blendShapeCoefficients;
@property(readonly, nonatomic) unsigned long long blendShapeCoefficientsCount;
@property(readonly, nonatomic) const MISSING_TYPE **vertices;
@property(readonly, nonatomic) unsigned long long vertexCount;
@property(readonly, nonatomic) CDStruct_14d5dc5e transform;
- (void)_extractMetaData;
@property(readonly, nonatomic) _Bool isValid;
- (id)anchorsForCameraWithTransform:(CDStruct_14d5dc5e)arg1 referenceOriginTransform:(CDStruct_14d5dc5e)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTrackingData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
