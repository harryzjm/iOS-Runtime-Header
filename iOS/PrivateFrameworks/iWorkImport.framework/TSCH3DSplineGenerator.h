//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DSplineGenerator : NSObject
{
    float mDetail;
    float mTension;
    float mAdaptiveThreshold;
    vector_35283da1 mControlPts;
    vector_b5bccc4d mSplineExclude;
}

+ (id)generator;
@property(nonatomic) float adaptiveThreshold; // @synthesize adaptiveThreshold=mAdaptiveThreshold;
@property(nonatomic) float tension; // @synthesize tension=mTension;
@property(nonatomic) float detail; // @synthesize detail=mDetail;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)generatePoints:(vector_35283da1 *)arg1;
- (void)calcControlMatrix:(tmat4x4_3074befe *)arg1 pointNum:(long long)arg2;
- (vector_b5bccc4d *)splineExclude;
- (vector_35283da1 *)controlPts;
- (_Bool)isClosed;
- (id)init;

@end

