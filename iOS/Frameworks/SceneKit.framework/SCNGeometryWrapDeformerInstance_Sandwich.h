//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SCNMTLComputePipeline;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNGeometryWrapDeformerInstance_Sandwich : NSObject
{
    unsigned long long _mode;
    struct {
        unsigned int vertexCount;
        CDStruct_14d5dc5e driver0ToDeformedTransform;
        CDStruct_14d5dc5e driver1ToDeformedTransform;
    } _uniforms;
    struct __C3DNode *_drivingNode0;
    struct __C3DNode *_drivingNode1;
    struct __C3DNode *_deformedNode;
    unsigned int _lastUpdateFrameIndex;
    SCNMTLComputePipeline *_computePipeline;
    struct {
        id <MTLBuffer> pointIndicesBuffer;
        id <MTLBuffer> barycentricCoordsBuffer;
    } _bindingBuffers[2];
    id <MTLBuffer> _bindingDriver0InfluencesBuffer;
}

- (unsigned long long)updateWithContext:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

