//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSCNNCrossChannelNormalizationNode
{
    unsigned long long _kernelSizeInFeatureChannels;
}

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
@property(nonatomic) unsigned long long kernelSizeInFeatureChannels; // @synthesize kernelSizeInFeatureChannels=_kernelSizeInFeatureChannels;
- (Class)gradientClass;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1;

@end

