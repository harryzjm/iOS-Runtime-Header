//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSCNNCrossChannelNormalization
{
    unsigned long long _kernelSize;
    float _alpha;
    float _beta;
    float _delta;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) float delta; // @synthesize delta=_delta;
@property(nonatomic) float beta; // @synthesize beta=_beta;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) unsigned long long kernelSize; // @synthesize kernelSize=_kernelSize;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationImages:(struct NSArray *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelSize:(unsigned long long)arg2;

@end

