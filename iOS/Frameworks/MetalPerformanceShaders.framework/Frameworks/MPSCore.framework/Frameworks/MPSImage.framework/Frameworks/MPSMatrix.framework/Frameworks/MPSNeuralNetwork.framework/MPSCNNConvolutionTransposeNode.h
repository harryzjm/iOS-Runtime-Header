//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPSCNNConvolutionStateNode;

@interface MPSCNNConvolutionTransposeNode
{
}

+ (id)nodeWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3;
- (struct FilterGraphNode *)newFilterNode;
@property(readonly, nonatomic) MPSCNNConvolutionStateNode *convolutionState;
- (id)initWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3;

@end

