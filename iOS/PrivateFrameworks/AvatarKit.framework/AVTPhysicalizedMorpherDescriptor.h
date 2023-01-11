//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SCNMorpher, SCNNode;

@interface AVTPhysicalizedMorpherDescriptor : NSObject
{
    _Bool _mirrored;
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNMorpher *_writeMorpher;
    unsigned long long _forwardMorphTargetIndex;
    unsigned long long _backwardMorphTargetIndex;
    unsigned long long _leftwardMorphTargetIndex;
    unsigned long long _rightwardMorphTargetIndex;
    unsigned long long _upwardMorphTargetIndex;
    unsigned long long _downwardMorphTargetIndex;
    SCNNode *_extraSimulationFactorReadMorpherNode;
    unsigned long long _extraSimulationFactorTargetIndex;
}

@property(nonatomic) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(nonatomic) unsigned long long extraSimulationFactorTargetIndex; // @synthesize extraSimulationFactorTargetIndex=_extraSimulationFactorTargetIndex;
@property(retain, nonatomic) SCNNode *extraSimulationFactorReadMorpherNode; // @synthesize extraSimulationFactorReadMorpherNode=_extraSimulationFactorReadMorpherNode;
@property(nonatomic) unsigned long long downwardMorphTargetIndex; // @synthesize downwardMorphTargetIndex=_downwardMorphTargetIndex;
@property(nonatomic) unsigned long long upwardMorphTargetIndex; // @synthesize upwardMorphTargetIndex=_upwardMorphTargetIndex;
@property(nonatomic) unsigned long long rightwardMorphTargetIndex; // @synthesize rightwardMorphTargetIndex=_rightwardMorphTargetIndex;
@property(nonatomic) unsigned long long leftwardMorphTargetIndex; // @synthesize leftwardMorphTargetIndex=_leftwardMorphTargetIndex;
@property(nonatomic) unsigned long long backwardMorphTargetIndex; // @synthesize backwardMorphTargetIndex=_backwardMorphTargetIndex;
@property(nonatomic) unsigned long long forwardMorphTargetIndex; // @synthesize forwardMorphTargetIndex=_forwardMorphTargetIndex;
@property(retain, nonatomic) SCNMorpher *writeMorpher; // @synthesize writeMorpher=_writeMorpher;
@property(retain, nonatomic) SCNNode *drivingNode; // @synthesize drivingNode=_drivingNode;
@property(retain, nonatomic) SCNNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property(nonatomic) float simulationFactor; // @synthesize simulationFactor=_simulationFactor;
- (void).cxx_destruct;

@end

