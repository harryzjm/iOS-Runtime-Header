//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface MPSNDArrayGridSample
{
    unsigned int _samplingMode;
    int _paddingMode;
    _Bool _relativeCoordinates;
    _Bool _normalizeCoordinates;
    double _constantValue;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(void *)arg1;
@property(nonatomic) double constantValue; // @synthesize constantValue=_constantValue;
@property(nonatomic) _Bool normalizeCoordinates; // @synthesize normalizeCoordinates=_normalizeCoordinates;
@property(nonatomic) _Bool relativeCoordinates; // @synthesize relativeCoordinates=_relativeCoordinates;
@property(nonatomic) int paddingMode; // @synthesize paddingMode=_paddingMode;
@property(nonatomic) unsigned int samplingMode; // @synthesize samplingMode=_samplingMode;
- (_Bool)supportsGradientForSourceIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (MISSING_TYPE *)dimensionsToBeRetained;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end
