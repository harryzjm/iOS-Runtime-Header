//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSCNNDilatedPoolingMaxNode
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
}

+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 dilationRate:(unsigned long long)arg4;
+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long dilationRateY; // @synthesize dilationRateY=_dilationRateY;
@property(readonly, nonatomic) unsigned long long dilationRateX; // @synthesize dilationRateX=_dilationRateX;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 dilationRate:(unsigned long long)arg4;
- (id)initWithSource:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 dilationRateX:(unsigned long long)arg6 dilationRateY:(unsigned long long)arg7;

@end

