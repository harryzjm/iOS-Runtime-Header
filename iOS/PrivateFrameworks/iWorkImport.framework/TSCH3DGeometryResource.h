//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TSCH3DGeometry, TSCH3DGeometryArrays, TSCH3DResource;

__attribute__((visibility("hidden")))
@interface TSCH3DGeometryResource : NSObject
{
    int _type;
    TSCH3DResource *_resource;
    TSCH3DGeometryArrays *_arrays;
    TSCH3DGeometry *_geometry;
}

+ (id)resourceWithType:(int)arg1 resource:(id)arg2 arrays:(id)arg3 geometry:(id)arg4;
+ (id)resourceWithType:(int)arg1 resource:(id)arg2;
+ (id)resource;
@property(readonly, retain, nonatomic) TSCH3DGeometry *geometry; // @synthesize geometry=_geometry;
@property(readonly, copy, nonatomic) TSCH3DGeometryArrays *arrays; // @synthesize arrays=_arrays;
@property(readonly, retain, nonatomic) TSCH3DResource *resource; // @synthesize resource=_resource;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)submitToProcessor:(id)arg1 withPortion:(int)arg2;
- (void)submitWithProcessor:(id)arg1;
- (void)submitCapWithProcessor:(id)arg1;
- (void)submitNoneWithProcessor:(id)arg1;
@property(readonly, nonatomic) _Bool hasArrays;
- (void)dealloc;
- (id)initWithType:(int)arg1 resource:(id)arg2;
- (id)initWithType:(int)arg1 resource:(id)arg2 arrays:(id)arg3 geometry:(id)arg4;

@end
