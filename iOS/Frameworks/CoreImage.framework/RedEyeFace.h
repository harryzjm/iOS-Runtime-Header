//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIImage, CIVector, NSArray, VNFaceLandmarks2D, VNFaceObservation;

__attribute__((visibility("hidden")))
@interface RedEyeFace : NSObject
{
    int _imageOrientation;
    float _faceOrientation;
    float _junkiness;
    float _areaMax;
    VNFaceObservation *_observation;
    VNFaceLandmarks2D *_landmarks;
    CIImage *_segmentationSkin;
    CIImage *_segmentationSclera;
    CIImage *_segmentationIris;
    NSArray *_uvLeft;
    NSArray *_uvRight;
    CIVector *_faceRect;
    CIVector *_roiRenderOriginLeft;
    CIVector *_roiRenderOriginRight;
    CIVector *_roiRenderSize;
    CIVector *_pupilLeft;
    CIVector *_pupilRight;
}

@property(retain, nonatomic) CIVector *pupilRight; // @synthesize pupilRight=_pupilRight;
@property(retain, nonatomic) CIVector *pupilLeft; // @synthesize pupilLeft=_pupilLeft;
@property(retain, nonatomic) CIVector *roiRenderSize; // @synthesize roiRenderSize=_roiRenderSize;
@property(retain, nonatomic) CIVector *roiRenderOriginRight; // @synthesize roiRenderOriginRight=_roiRenderOriginRight;
@property(retain, nonatomic) CIVector *roiRenderOriginLeft; // @synthesize roiRenderOriginLeft=_roiRenderOriginLeft;
@property(retain, nonatomic) CIVector *faceRect; // @synthesize faceRect=_faceRect;
@property(retain, nonatomic) NSArray *uvRight; // @synthesize uvRight=_uvRight;
@property(retain, nonatomic) NSArray *uvLeft; // @synthesize uvLeft=_uvLeft;
@property(retain, nonatomic) CIImage *segmentationIris; // @synthesize segmentationIris=_segmentationIris;
@property(retain, nonatomic) CIImage *segmentationSclera; // @synthesize segmentationSclera=_segmentationSclera;
@property(retain, nonatomic) CIImage *segmentationSkin; // @synthesize segmentationSkin=_segmentationSkin;
@property(retain, nonatomic) VNFaceLandmarks2D *landmarks; // @synthesize landmarks=_landmarks;
@property(retain, nonatomic) VNFaceObservation *observation; // @synthesize observation=_observation;
@property(nonatomic) float areaMax; // @synthesize areaMax=_areaMax;
@property(nonatomic) float junkiness; // @synthesize junkiness=_junkiness;
@property(nonatomic) float faceOrientation; // @synthesize faceOrientation=_faceOrientation;
@property(nonatomic) int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (void)dealloc;
- (id)init;

@end

