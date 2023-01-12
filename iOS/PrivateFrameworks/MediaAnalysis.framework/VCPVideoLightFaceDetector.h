//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPFrameAnalysisStats, VCPVideoFaceMeshAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoLightFaceDetector
{
    int _lastestFaceID;
    int _numFacesLastFrame;
    VCPFrameAnalysisStats *_frameStats;
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;
    float *_lastVertices;
    float _lastJawOpenness;
}

- (void).cxx_destruct;
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;
- (float)minProcessTimeIntervalInSecs;
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;
- (void)dealloc;
- (id)initWithTransform:(struct CGAffineTransform)arg1 frameStats:(id)arg2 faceDominated:(_Bool)arg3;

@end
