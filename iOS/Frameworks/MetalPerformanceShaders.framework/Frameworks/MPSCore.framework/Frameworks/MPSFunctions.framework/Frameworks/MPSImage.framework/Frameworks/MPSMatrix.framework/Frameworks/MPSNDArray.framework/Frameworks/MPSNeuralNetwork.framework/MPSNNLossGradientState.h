//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSNNGradientState.h"

@class MPSCNNLossLabels;

@interface MPSNNLossGradientState : MPSNNGradientState
{
    float _weight;
    float _labelSmoothing;
    float _epsilon;
    float _delta;
    MPSCNNLossLabels *_lossLabels;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:(id)arg1;

@end

