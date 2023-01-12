//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSImageLaplacian;
@protocol MTLBuffer;

@interface MPSImageConvolution
{
    id <MTLBuffer> wtBuffer;
    id <MTLBuffer> wtBufferh;
    float *kOrigWeights;
    float *wtArray;
    unsigned short *wtArrayh;
    unsigned long long _fWidth;
    unsigned long long _fHeight;
    float _fBias;
    _Bool separable;
    unsigned long long specialFilterType;
    MPSImageLaplacian *_laplacian;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(void *)arg1;
@property(readonly, nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_fHeight;
@property(readonly, nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_fWidth;
@property(nonatomic) float bias; // @synthesize bias=_fBias;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 weights:(const float *)arg4;
- (void)initFilterWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 weights:(const float *)arg3;
- (id)initWithDevice_private:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end
