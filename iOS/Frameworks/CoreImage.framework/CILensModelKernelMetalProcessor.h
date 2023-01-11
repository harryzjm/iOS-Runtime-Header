//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CILensModelKernelMetalProcessor
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (_Bool)synchronizeInputs;
+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (void)compilePipelinesIfNeeded:(id)arg1;
+ (void)releasePipelines;
+ (void)compilePipelines:(id)arg1;
+ (_Bool)hasValidPipelines;

@end
