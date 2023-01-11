//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SCNNode;

@interface AVTPhysicalizedSkeletonDescriptor : NSObject
{
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNNode *_rootJoint;
    MISSING_TYPE *_upDownRotation;
    MISSING_TYPE *_leftRightRotation;
    MISSING_TYPE *_forwardBackRotation;
}

@property(nonatomic) MISSING_TYPE *forwardBackRotation; // @synthesize forwardBackRotation=_forwardBackRotation;
@property(nonatomic) MISSING_TYPE *leftRightRotation; // @synthesize leftRightRotation=_leftRightRotation;
@property(nonatomic) MISSING_TYPE *upDownRotation; // @synthesize upDownRotation=_upDownRotation;
@property(retain, nonatomic) SCNNode *rootJoint; // @synthesize rootJoint=_rootJoint;
@property(retain, nonatomic) SCNNode *drivingNode; // @synthesize drivingNode=_drivingNode;
@property(retain, nonatomic) SCNNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property(nonatomic) float simulationFactor; // @synthesize simulationFactor=_simulationFactor;
- (void).cxx_destruct;

@end
