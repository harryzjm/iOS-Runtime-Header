//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VNHumanBodyPose3DSpecifier
{
    NSArray *_orderedHumanBodyPose3DKeypoints;
    CDStruct_14d5dc5e _cameraTransformMatrix;
    NSNumber *_humanHeight;
    float _heightEstimatedScale;
    struct CGSize _inputSize;
    CDStruct_8e0628e6 _cameraIntrinsics;
}

+ (_Bool)supportsSecureCoding;
+ (id)_stringRepresentationForRequestRevision:(unsigned long long)arg1 abpkJoint:(id)arg2 error:(id *)arg3;
+ (id)supportedHumanBodyPose3DKeypointsRev1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(readonly, nonatomic) CDStruct_8e0628e6 cameraIntrinsics; // @synthesize cameraIntrinsics=_cameraIntrinsics;
@property(readonly, nonatomic) CDStruct_14d5dc5e cameraTransformMatrix; // @synthesize cameraTransformMatrix=_cameraTransformMatrix;
@property(readonly, nonatomic) float heightEstimatedScale; // @synthesize heightEstimatedScale=_heightEstimatedScale;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) float bodyHeight;
- (id)pointKeyGroupLabelsMapping;
- (id)availableGroupKeys;

@end

