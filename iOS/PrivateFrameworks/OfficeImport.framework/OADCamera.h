//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADCamera : NSObject
{
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setZoom:(float)arg1;
- (float)zoom;
- (void)setFieldOfView:(float)arg1;
- (float)fieldOfView;
- (void)setCameraType:(int)arg1;
- (int)cameraType;
- (void)setRotation:(id)arg1;
- (id)rotation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

