//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, VCPFaceShapeModel, VCPLandmarkValidator, VCPRTLandmarkDetector;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPVideoFaceMeshAnalyzer : NSObject
{
    int _faceCount;
    struct CGRect _faceBounds;
    _Bool _inDetectionMode;
    VCPRTLandmarkDetector *_lmDetector;
    VCPRTLandmarkDetector *_lmTracker;
    float *_prevLM;
    float *_curLM;
    int _detectionModeCounter;
    int _trackingModeCounter;
    int _lostTrackCounter;
    _Bool _angleStable;
    float _validationScore;
    _Bool _validateFailedOnce;
    NSObject<OS_dispatch_queue> *_validationQueue;
    NSObject<OS_dispatch_group> *_validationGroup;
    struct __CVBuffer *_valBuffer;
    struct __CVBuffer *_valBufferRotated;
    float *_valAngle;
    float *_valLM;
    MISSING_TYPE **_meshVertices;
    VCPFaceShapeModel *_shapeModel;
    VCPLandmarkValidator *_faceValidator[5];
    float _eulerAngle[3];
    float _focalLengthInPixels;
    float _uc;
    float _vc;
    _Bool _offline;
    _Bool _initialized;
    _Bool _bufferRotated;
    NSDictionary *_blendShapes;
    unsigned long long _vertexCount;
    CDStruct_14d5dc5e _pose;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool bufferRotated; // @synthesize bufferRotated=_bufferRotated;
@property(readonly, nonatomic) unsigned long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(readonly, nonatomic) NSDictionary *blendShapes; // @synthesize blendShapes=_blendShapes;
@property(readonly, nonatomic) CDStruct_14d5dc5e pose; // @synthesize pose=_pose;
- (void)mapToCameraNegativeZ;
@property(readonly, nonatomic) const float *landmarks;
@property(readonly, nonatomic) const MISSING_TYPE **vertices;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withFaceRect:(struct CGRect)arg2 withRotation:(int)arg3 withTimestamp:(CDStruct_1b6d18a9)arg4;
- (void)rotateLandmarks:(int)arg1 width:(int)arg2 height:(int)arg3 landmarks:(float *)arg4 numLandmarks:(int)arg5;
- (_Bool)isTracked;
- (int)checkResolutionChange:(struct __CVBuffer *)arg1 withRotation:(int)arg2;
- (int)validateFace:(struct __CVBuffer *)arg1 eulerAngles:(float *)arg2;
- (void)makeValidationDecision;
- (void)dealloc;
- (int)setFrame:(struct __CVBuffer *)arg1;
- (void)updateIntrinsicWhenRotated;
- (_Bool)updateFocalLengthInPixels:(float)arg1;
- (id)initWithFocalLengthInPixels:(float)arg1 offline:(_Bool)arg2 isFastMode:(_Bool)arg3;

@end

