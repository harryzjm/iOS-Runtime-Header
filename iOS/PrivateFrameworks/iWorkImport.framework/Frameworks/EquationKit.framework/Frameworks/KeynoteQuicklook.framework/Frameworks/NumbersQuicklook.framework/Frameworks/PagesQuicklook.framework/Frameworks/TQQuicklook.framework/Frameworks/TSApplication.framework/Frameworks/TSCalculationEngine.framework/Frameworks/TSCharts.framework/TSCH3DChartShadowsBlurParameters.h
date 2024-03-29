//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSCH3DChartShadowsBlurParameters : NSObject
{
    float _quality;
    long long _numPasses;
    long long _shadowSize;
    float _kernelScale;
}

+ (id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;
@property(nonatomic) float kernelScale; // @synthesize kernelScale=_kernelScale;
@property(nonatomic) long long shadowSize; // @synthesize shadowSize=_shadowSize;
@property(nonatomic) long long numPasses; // @synthesize numPasses=_numPasses;
@property(nonatomic) float quality; // @synthesize quality=_quality;
- (id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4;

@end

