//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, VNFaceObservation;

__attribute__((visibility("hidden")))
@interface VNScreenGazeFaceObjectState : NSObject
{
    VNFaceObservation *_faceObservation;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
    unsigned int _frameIndex;
    NSUUID *_uuid;
    struct _Geometry2D_point2D_ _leftPupil;
    struct _Geometry2D_point2D_ _rightPupil;
    void *_screenGazeState;
    struct _Geometry2D_rect2D_ _unalignedFaceBoundingBox;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
