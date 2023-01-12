//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MPSCNNSpatialNormalizationNode
{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
}

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
@property(nonatomic) unsigned long long kernelHeight; // @synthesize kernelHeight=_kernelHeight;
@property(nonatomic) unsigned long long kernelWidth; // @synthesize kernelWidth=_kernelWidth;
- (Class)gradientClass;
- (void *)newFilterNode;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1;

@end
