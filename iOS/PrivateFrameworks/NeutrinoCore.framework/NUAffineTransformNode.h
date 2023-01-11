//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUImageTransformAffine;

@interface NUAffineTransformNode
{
    NUImageTransformAffine *_transform;
}

- (void).cxx_destruct;
- (id)_transformWithError:(out id *)arg1;
- (id)debugQuickLookObject;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)initWithAffineTransform:(id)arg1 input:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;

@end
