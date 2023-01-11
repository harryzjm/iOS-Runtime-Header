//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;
@protocol MTLFunction;

@interface MTLDebugComputePipelineState
{
    unsigned long long _maxThreadPositionInGrid[3];
    unsigned long long _maxThreadsPerGrid[3];
    unsigned long long _maxThreadPositionInThreadgroup[3];
    unsigned long long _maxThreadIndexInThreadgroup[3];
    unsigned long long _maxThreadsPerThreadgroup[3];
    unsigned long long _maxThreadgroupPositionInGrid[3];
    unsigned long long _maxThreadgroupsPerGrid[3];
    unsigned long long _maxStageInGridSize[3];
    unsigned long long _maxStageInGridOrigin[3];
    id <MTLFunction> _function;
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
}

@property(readonly, nonatomic) MTLComputePipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(readonly, nonatomic) MTLComputePipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) id <MTLFunction> function; // @synthesize function=_function;
- (void)validateHandleForSetFunction:(id)arg1;
- (_Bool)isAncestorOf:(id)arg1;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithAdditionalBinaryFunctions:(id)arg1;
- (id)functionHandleWithFunction:(id)arg1;
- (id)functionHandleToDebugFunctionHandle:(id)arg1 parentFunction:(id)arg2;
- (id)getParameter:(id)arg1;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end
