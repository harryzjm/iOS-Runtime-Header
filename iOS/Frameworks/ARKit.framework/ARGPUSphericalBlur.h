//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface ARGPUSphericalBlur : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _cubemapBlurPipelineState;
    _Bool _gpuFamilyAtleast4;
}

- (void).cxx_destruct;
- (id)blurCubemapTexture:(id)arg1 roughness:(id)arg2 rotation:(CDStruct_8e0628e6)arg3;
- (id)init;

@end
