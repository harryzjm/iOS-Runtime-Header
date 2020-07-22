//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSDCurveFitter : NSObject
{
    double mErrorDistance;
    long long mErrorIterations;
}

+ (id)curveFitter;
@property(nonatomic) long long errorIterations; // @synthesize errorIterations=mErrorIterations;
@property(nonatomic) double errorDistance; // @synthesize errorDistance=mErrorDistance;
- (void)fitCurveToPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2 bezierCallback:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;
- (void)fitCurveToPoints:(id)arg1 bezierCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3;
- (id)bezierPathFittingPointArray:(CDStruct_c3b9c2ee *)arg1 count:(long long)arg2;
- (id)bezierPathFittingPoints:(id)arg1;
- (id)init;

@end

