//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSCNNConvolutionStateNode;
@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNBinaryConvolutionNode
{
    id <MPSCNNConvolutionDataSource> _weights;
    float _scaleValue;
    unsigned long long _type;
    unsigned long long _flags;
}

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;
@property(readonly, nonatomic) MPSCNNConvolutionStateNode *convolutionState;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;

@end

