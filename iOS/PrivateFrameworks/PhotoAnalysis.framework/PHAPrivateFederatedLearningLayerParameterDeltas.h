//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAFloatVector;

@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject
{
    MAFloatVector *_weightDeltas;
    MAFloatVector *_biasDeltas;
}

+ (id)deltasFromLayerParameters:(id)arg1 toLayerParameters:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) MAFloatVector *biasDeltas; // @synthesize biasDeltas=_biasDeltas;
@property(retain, nonatomic) MAFloatVector *weightDeltas; // @synthesize weightDeltas=_weightDeltas;
- (id)initWithWeightDeltas:(id)arg1 biasDeltas:(id)arg2;

@end
