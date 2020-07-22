//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DTransform : NSObject <NSCopying>
{
    tvec3_17f03ce0 mTranslation;
    tvec3_17f03ce0 mScaleFactor;
    tquat_f3d6c8fe mRotation;
    tvec3_17f03ce0 mCenter;
    tmat4x4_3074befe mMatrix;
    _Bool mDirty;
}

+ (id)transform;
- (id).cxx_construct;
- (const tmat4x4_3074befe *)transform;
@property(nonatomic) tquat_f3d6c8fe rotation;
@property(nonatomic) tvec3_17f03ce0 center;
@property(nonatomic) tvec3_17f03ce0 scaleFactor;
@property(nonatomic) tvec3_17f03ce0 translation;
- (struct Transform)asTSCH3DCPPTransform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
