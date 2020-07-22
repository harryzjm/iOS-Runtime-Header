//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKPath : NSObject
{
    struct PolylinePathway _pathway;
}

+ (id)pathWithFloat3Points:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;
+ (id)pathWithGraphNodes:(id)arg1 radius:(float)arg2;
+ (id)pathWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (MISSING_TYPE *)float3AtIndex:(unsigned long long)arg1;
- (MISSING_TYPE *)float2AtIndex:(unsigned long long)arg1;
- (MISSING_TYPE *)pointAtIndex:(unsigned long long)arg1;
- (id)initWithFloat3Points:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;
- (id)initWithGraphNodes:(id)arg1 radius:(float)arg2;
- (id)initWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 radius:(float)arg3 cyclical:(_Bool)arg4;
@property(readonly) unsigned long long numPoints;
@property(nonatomic) float radius;
@property(nonatomic, getter=isCyclical) _Bool cyclical;
- (struct PolylinePathway *)pathway;
- (_Bool)_cyclical;
- (void)set_cyclical:(_Bool)arg1;

@end
