//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSCNNGradientKernel.h"

@interface MPSNNConcatenationGradient : MPSCNNGradientKernel
{
    unsigned long long _sourceIndex;
}

+ (const struct MPSLibraryInfo *)libraryInfo:(void *)arg1;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_2ec95fd7 *)arg4 secondaryOffset:(CDStruct_2ec95fd7 *)arg5 kernelOffset:(CDStruct_2ec95fd7 *)arg6;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 sourceIndex:(unsigned long long)arg2;

@end

