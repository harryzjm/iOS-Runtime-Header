//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CICoreMLKernel
{
}

+ (void)copyToOutput:(id)arg1 fromBuffer:(struct __CVBuffer **)arg2 usingFormat:(unsigned int)arg3;
+ (void)copyInput:(id)arg1 toBuffer:(struct __CVBuffer **)arg2 usingFormat:(unsigned int)arg3;
+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;

@end

