//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCH3DProjector : NSObject
{
    tmat4x4_3074befe mProjection;
    tmat4x4_3074befe mTransform;
    tmat4x4_3074befe mCombined;
}

+ (id)projectorWithProjection:(const tmat4x4_3074befe *)arg1 transform:(const tmat4x4_3074befe *)arg2;
- (id).cxx_construct;
@property(readonly, nonatomic) const tmat4x4_3074befe *combined; // @synthesize combined=mCombined;
@property(readonly, nonatomic) const tmat4x4_3074befe *transform; // @synthesize transform=mTransform;
@property(readonly, nonatomic) const tmat4x4_3074befe *projection; // @synthesize projection=mProjection;
- (line_190fbfc7)objectSpaceLineFromPoint:(const tvec2_84d5962d *)arg1;
- (id)initWithProjection:(const tmat4x4_3074befe *)arg1 transform:(const tmat4x4_3074befe *)arg2;

@end
