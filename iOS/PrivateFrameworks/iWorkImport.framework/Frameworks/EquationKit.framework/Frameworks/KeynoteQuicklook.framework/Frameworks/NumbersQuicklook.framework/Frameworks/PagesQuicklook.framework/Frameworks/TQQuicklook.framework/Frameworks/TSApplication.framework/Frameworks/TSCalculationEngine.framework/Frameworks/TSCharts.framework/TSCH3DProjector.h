//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCH3DProjector : NSObject
{
    tmat4x4_3074befe _projection;
    tmat4x4_3074befe _transform;
    tmat4x4_3074befe _combined;
}

+ (id)projectorWithProjection:(void *)arg1 transform:(void *)arg2;
- (id).cxx_construct;
@property(readonly, nonatomic) void *combined; // @synthesize combined=_combined;
@property(readonly, nonatomic) void *transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) void *projection; // @synthesize projection=_projection;
- (line_e1962432)objectSpaceLineFromPoint:(void *)arg1;
- (id)initWithProjection:(void *)arg1 transform:(void *)arg2;

@end

