//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PercentileClipProcessor_RGBA8_CPU
{
}

+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGPoint)centerInImg:(id)arg1 fromRect:(struct CGRect)arg2 toRect:(struct CGRect)arg3 offset:(struct CGPoint)arg4;
+ (_Bool)allowPartialOutputRegion;
+ (_Bool)canReduceOutputChannels;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (int)formatForInputAtIndex:(int)arg1;
+ (int)outputFormat;

@end
