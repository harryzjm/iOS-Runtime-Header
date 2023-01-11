//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNFaceLandmarkDetector, VCPPnPSolver, VCPVideoFacePoseFilter;

@interface VCPVideoFacePoseAnalyzer : NSObject
{
    VCPCNNFaceLandmarkDetector *_landmarkDetector;
    VCPPnPSolver *_poseEstimator;
    VCPVideoFacePoseFilter *_filter;
    float _focalLengthInPixels;
    CDStruct_1b6d18a9 _lastTimestamp;
    int _width;
    int _height;
    float _points2D[14];
    float _points3D[21];
    CDStruct_14d5dc5e _pose;
}

- (void).cxx_destruct;
@property CDStruct_14d5dc5e pose; // @synthesize pose=_pose;
- (int)analyzeFrameForPose:(struct __CVBuffer *)arg1 withFaceRect:(struct CGRect)arg2 withTimestamp:(CDStruct_1b6d18a9)arg3;
- (_Bool)updateFocalLengthInPixels:(float)arg1;
- (id)initWithFocalLengthInPixels:(float)arg1;
- (id)init;

@end
