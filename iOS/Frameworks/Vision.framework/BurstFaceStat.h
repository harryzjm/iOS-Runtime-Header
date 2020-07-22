//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Vision/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface BurstFaceStat : NSObject <NSCopying>
{
    _Bool leftEyeOpen;
    _Bool rightEyeOpen;
    _Bool smiling;
    _Bool foundByFaceCore;
    _Bool hasLeftEye;
    _Bool hasRightEye;
    _Bool hasRollAngle;
    _Bool hasYawAngle;
    _Bool smallFace;
    _Bool _hasPitchAngle;
    _Bool _isSyncedWithImage;
    float normalizedSigma;
    int faceId;
    int hwFaceId;
    int framesSinceLast;
    float focusScore;
    float normalizedFocusScore;
    float faceScore;
    float leftEyeBlinkScore;
    float rightEyeBlinkScore;
    float smileScore;
    int FCRLeftEyeFeaturesOffset;
    int FCRRightEyeFeaturesOffset;
    int FCRSmileFeaturesOffset;
    int FCRBlinkFeaturesSize;
    int FCRSmileFeaturesSize;
    float rollAngle;
    float yawAngle;
    float _pitchAngle;
    NSMutableArray *FCRSmileAndBlinkFeatures;
    double timestamp;
    struct CGRect faceRect;
    struct CGRect normalizedFaceRect;
    struct CGRect leftEyeRect;
    struct CGRect rightEyeRect;
    struct CGRect _hwFaceRect;
}

@property _Bool isSyncedWithImage; // @synthesize isSyncedWithImage=_isSyncedWithImage;
@property float pitchAngle; // @synthesize pitchAngle=_pitchAngle;
@property _Bool hasPitchAngle; // @synthesize hasPitchAngle=_hasPitchAngle;
@property struct CGRect hwFaceRect; // @synthesize hwFaceRect=_hwFaceRect;
@property _Bool smallFace; // @synthesize smallFace;
@property double timestamp; // @synthesize timestamp;
@property float yawAngle; // @synthesize yawAngle;
@property float rollAngle; // @synthesize rollAngle;
@property _Bool hasYawAngle; // @synthesize hasYawAngle;
@property _Bool hasRollAngle; // @synthesize hasRollAngle;
@property(retain) NSMutableArray *FCRSmileAndBlinkFeatures; // @synthesize FCRSmileAndBlinkFeatures;
@property int FCRSmileFeaturesSize; // @synthesize FCRSmileFeaturesSize;
@property int FCRBlinkFeaturesSize; // @synthesize FCRBlinkFeaturesSize;
@property int FCRSmileFeaturesOffset; // @synthesize FCRSmileFeaturesOffset;
@property int FCRRightEyeFeaturesOffset; // @synthesize FCRRightEyeFeaturesOffset;
@property int FCRLeftEyeFeaturesOffset; // @synthesize FCRLeftEyeFeaturesOffset;
@property float smileScore; // @synthesize smileScore;
@property float rightEyeBlinkScore; // @synthesize rightEyeBlinkScore;
@property float leftEyeBlinkScore; // @synthesize leftEyeBlinkScore;
@property struct CGRect rightEyeRect; // @synthesize rightEyeRect;
@property struct CGRect leftEyeRect; // @synthesize leftEyeRect;
@property _Bool hasRightEye; // @synthesize hasRightEye;
@property _Bool hasLeftEye; // @synthesize hasLeftEye;
@property float faceScore; // @synthesize faceScore;
@property float normalizedFocusScore; // @synthesize normalizedFocusScore;
@property float focusScore; // @synthesize focusScore;
@property int framesSinceLast; // @synthesize framesSinceLast;
@property int hwFaceId; // @synthesize hwFaceId;
@property int faceId; // @synthesize faceId;
@property float normalizedSigma; // @synthesize normalizedSigma;
@property struct CGRect normalizedFaceRect; // @synthesize normalizedFaceRect;
@property struct CGRect faceRect; // @synthesize faceRect;
@property _Bool foundByFaceCore; // @synthesize foundByFaceCore;
@property _Bool smiling; // @synthesize smiling;
@property _Bool rightEyeOpen; // @synthesize rightEyeOpen;
@property _Bool leftEyeOpen; // @synthesize leftEyeOpen;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFaceStat:(id)arg1;

@end

