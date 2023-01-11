//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface InpaintingSinglePassFilter
{
}

+ (id)runInpaintingNeuralNetworkOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 inpaintingResourceDescriptor:(id)arg3 espressoResources:(id)arg4 executionContext:(id)arg5 error:(id *)arg6;
+ (id)performInpaintingAndBlendingOnSRGBImage:(id)arg1 usingThresholdedMask:(id)arg2 blendingRadius:(int)arg3 inpaintingResourceDescriptor:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;
+ (id)performSinglePassInpaintingPipelineOnImage:(id)arg1 usingMask:(id)arg2 boundingBox:(struct CGRect)arg3 additionalParameters:(id)arg4 espressoResources:(id)arg5 executionContext:(id)arg6;
+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)allowSRGBTranferFuntionOnOutput;
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (_Bool)synchronizeInputs;
+ (_Bool)allowPartialOutputRegion;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;

@end
