//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARUIRingsAlphaReductionState, ARUIRingsEmptyState, ARUIRingsEndCapShadowState, ARUIRingsFillState;

__attribute__((visibility("hidden")))
@interface ARUIOverlappingRingsRenderPipelineFactory
{
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsFillState *_fillState;
    ARUIRingsEndCapShadowState *_endCapShadowState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}

- (void).cxx_destruct;
- (id)pipelineForConfiguration:(id)arg1;
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

