//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMFunctionTone
{
    CDUnknownBlockType _function;
    CDStruct_79de6ffd _xAxisDescriptor;
    CDStruct_79de6ffd _yAxisDescriptor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_79de6ffd yAxisDescriptor; // @synthesize yAxisDescriptor=_yAxisDescriptor;
@property(readonly, nonatomic) CDStruct_79de6ffd xAxisDescriptor; // @synthesize xAxisDescriptor=_xAxisDescriptor;
@property(readonly, nonatomic) CDUnknownBlockType function; // @synthesize function=_function;
- (double)_xAxisValueForNormalizedPosition:(double)arg1;
- (void)renderInBuffer:(vector_12bd641b *)arg1 atFrame:(unsigned long long)arg2;
- (id)initWithUnivariateFunction:(CDUnknownBlockType)arg1 sampleRate:(double)arg2 envelope:(id)arg3 xAxisDescriptor:(CDStruct_79de6ffd)arg4 yAxisDescriptor:(CDStruct_79de6ffd)arg5;

@end
