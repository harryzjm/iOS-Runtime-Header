//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIFaceRecognition, NSNumber;

@interface HMIVideoAnalyzerEventFace
{
    HMIFaceRecognition *_faceRecognition;
    NSNumber *_yaw;
    NSNumber *_roll;
}

+ (id)logCategory;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSNumber *roll; // @synthesize roll=_roll;
@property(readonly) NSNumber *yaw; // @synthesize yaw=_yaw;
@property(readonly) HMIFaceRecognition *faceRecognition; // @synthesize faceRecognition=_faceRecognition;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)description;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2 yaw:(id)arg3 roll:(id)arg4 faceRecognition:(id)arg5 userInfo:(id)arg6;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2 faceRecognition:(id)arg3;
- (id)initWithConfidence:(id)arg1 boundingBox:(struct CGRect)arg2;

@end
