//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NUScaleNode
{
    long long _sampleMode;
    CDStruct_1e2b2e48 _targetScale;
    CDStruct_1e2b2e48 _effectiveScale;
}

@property(readonly) CDStruct_912cb5d2 effectiveScale; // @synthesize effectiveScale=_effectiveScale;
@property(readonly) CDStruct_912cb5d2 targetScale; // @synthesize targetScale=_targetScale;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_settingsWithTargetScale:(CDStruct_912cb5d2)arg1 effectiveScale:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3;
- (id)initWithPipelineState:(id)arg1 input:(id)arg2;
- (id)initWithTargetScale:(CDStruct_912cb5d2)arg1 effectiveScale:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3 input:(id)arg4;
- (id)initWithScale:(CDStruct_912cb5d2)arg1 sampleMode:(long long)arg2 input:(id)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2;

@end

