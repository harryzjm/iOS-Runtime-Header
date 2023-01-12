//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSFColorConversion
{
    unsigned long long _options;
    unsigned long long _inputColorChannels;
    unsigned long long _outputColorChannels;
    CDStruct_f9619119 _inputRange;
    CDStruct_f9619119 _outputRange;
    struct Stage *_stageList;
}

@property(readonly, nonatomic) unsigned long long outputColorChannels; // @synthesize outputColorChannels=_outputColorChannels;
@property(readonly, nonatomic) unsigned long long inputColorChannels; // @synthesize inputColorChannels=_inputColorChannels;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)debugDescription;
- (void)initialize3DTexture2:(id)arg1;
- (void)initialize3DTexture1:(id)arg1;
- (void)initialize1DTexture1:(id)arg1;
- (id)descriptorFor3DTexture2;
- (id)descriptorFor3DTexture1;
- (const struct NxMStage *)find3dTextureStageAtIndex:(unsigned long long)arg1;
- (id)descriptorFor1DTexture1;
- (const struct TRCStage *)find1DTexture1Stage;
- (struct)effectiveRange:(struct)arg1;
- (id)functionPrototype;
- (id)newDAGUsingFunctionList:(id)arg1;
- (void)optimizeStages;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 conversion:(const struct CGColorConversionInfo *)arg2 functionName:(id)arg3 sourceRange:(const struct *)arg4 options:(unsigned long long)arg5 error:(id *)arg6;
- (_Bool)addGrayToRGBStage;
- (_Bool)addNxMStage:(struct CGColorConversionIteratorData)arg1 stage:(long long)arg2 index:(long long)arg3 error:(id *)arg4;
- (_Bool)addMatrixStage:(struct CGColorConversionIteratorData)arg1 stage:(long long)arg2 index:(long long)arg3;
- (_Bool)addTRCStage:(struct CGColorConversionIteratorData)arg1 stage:(long long)arg2 count:(long long)arg3 trcIndices:(long long *)arg4 error:(id *)arg5;
- (id)newSubroutineListWithError:(id *)arg1;
- (id)initWithDevice:(id)arg1 startColorSpace:(struct CGColorSpace *)arg2 endColorSpace:(struct CGColorSpace *)arg3 functionName:(id)arg4 sourceRange:(const struct *)arg5 options:(unsigned long long)arg6 error:(id *)arg7;

@end
