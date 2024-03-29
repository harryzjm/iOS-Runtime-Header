//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, TSCH3DFBOResource;

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject
{
    TSCH3DFBOResource *_shadowsFBOResource;
    TSCH3DFBOResource *_blurFBOResource;
    tvec2_3b141483 _shadowsSize;
    NSArray *_blurParametersArray;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (float)blurSlackForQuality:(float)arg1;
- (id)shadowsFBOForContext:(id)arg1;
- (void)invalidate;
- (void)unprotectShadowInSession:(id)arg1;
- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(CDUnknownBlockType)arg3;
- (void)blurParametersFromQuality:(float)arg1 shadowSize:(long long *)arg2 numPasses:(long long *)arg3 kernelScale:(float *)arg4;
- (id)initWithBlurParametersArray:(id)arg1;

@end

