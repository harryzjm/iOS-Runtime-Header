//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface MPSNDArrayTopKGradient
{
    unsigned long long _K;
    _Bool _findIndices;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(void *)arg1;
@property(nonatomic) unsigned long long K; // @synthesize K=_K;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 K:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;
- (MISSING_TYPE *)dimensionsNotToBeBroadcast;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;

@end
