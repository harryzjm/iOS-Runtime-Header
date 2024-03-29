//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCH3DTransform : NSObject
{
    tvec3_17f03ce0 _translation;
    tvec3_17f03ce0 _scaleFactor;
    tquat_f3d6c8fe _rotation;
    tvec3_17f03ce0 _center;
    tmat4x4_3074befe _matrix;
    _Bool _dirty;
}

+ (id)transform;
- (id).cxx_construct;
- (const void *)transform;
@property(nonatomic) tquat_f3d6c8fe rotation;
@property(nonatomic) tvec3_17f03ce0 center;
@property(nonatomic) tvec3_17f03ce0 scaleFactor;
@property(nonatomic) tvec3_17f03ce0 translation;
- (struct Transform)asTSCH3DCPPTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

