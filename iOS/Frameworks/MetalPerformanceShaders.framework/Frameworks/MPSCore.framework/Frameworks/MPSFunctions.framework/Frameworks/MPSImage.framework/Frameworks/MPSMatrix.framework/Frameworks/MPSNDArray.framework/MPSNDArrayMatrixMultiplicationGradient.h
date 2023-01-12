//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface MPSNDArrayMatrixMultiplicationGradient
{
    double _alpha;
    double _beta;
}

+ (unsigned long long)expectedVirtualSourceCount;
+ (_Bool)supportsPostfixForDevice:(void *)arg1;
+ (_Bool)supportsPrefixForDevice:(void *)arg1;
+ (const struct MPSLibraryInfo *)libraryInfo:(void *)arg1;
@property(nonatomic) double beta; // @synthesize beta=_beta;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (id)workloadStatisticsForSourceArrays:(id)arg1 destArrays:(id)arg2 kernel:(id)arg3 kernelDAGObject:(id)arg4 sourceState:(id)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;
- (id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2 sourceGradientIndex:(unsigned long long)arg3;
- (MISSING_TYPE *)dimensionsNotToBeBroadcast;
- (unsigned long long)maxSupportedDimensionsForSourceArrays:(id)arg1 destinationArray:(id)arg2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;

@end
