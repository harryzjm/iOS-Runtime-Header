//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSNNGradientState.h"

@interface MPSNNPermuteGradientState : MPSNNGradientState
{
    struct MPSNNDimensionOrder _fwdPermuteOrder;
    struct MPSNNDimensionOrder _revPermuteOrder;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;
- (id)initWithResource:(id)arg1;

@end

