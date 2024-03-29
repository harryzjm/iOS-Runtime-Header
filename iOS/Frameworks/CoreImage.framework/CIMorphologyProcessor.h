//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface CIMorphologyProcessor : CIImageProcessorKernel
{
}

+ (id)applyBoxToImage:(id)arg1 width:(int)arg2 height:(int)arg3 doMin:(_Bool)arg4;
+ (_Bool)allowSRGBTranferFuntionOnOutput;
+ (_Bool)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)allowCompressedInputsAndOutputs;
+ (_Bool)canReduceOutputChannels;
+ (int)outputFormat;
+ (_Bool)synchronizeInputs;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;

@end

