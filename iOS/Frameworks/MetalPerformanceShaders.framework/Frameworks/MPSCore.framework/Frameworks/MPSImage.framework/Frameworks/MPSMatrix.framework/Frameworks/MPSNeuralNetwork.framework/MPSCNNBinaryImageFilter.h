//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSBinaryImageKernel;

@interface MPSCNNBinaryImageFilter
{
    MPSBinaryImageKernel *_k;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 updateOffset:(_Bool)arg3;
- (void)dealloc;
- (void)setSecondaryEdgeMode:(unsigned long long)arg1;
- (void)setPrimaryEdgeMode:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFilter:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end
