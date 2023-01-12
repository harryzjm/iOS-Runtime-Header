//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface MontrealNNModelOptimizerParam
{
    float _learningRate;
    float _momentum;
    unsigned long long _optimizerType;
    NSNumber *_gradientClipMin;
    NSNumber *_gradientClipMax;
}

- (void).cxx_destruct;
@property(readonly) NSNumber *gradientClipMax; // @synthesize gradientClipMax=_gradientClipMax;
@property(readonly) NSNumber *gradientClipMin; // @synthesize gradientClipMin=_gradientClipMin;
@property(readonly) float momentum; // @synthesize momentum=_momentum;
@property(readonly) float learningRate; // @synthesize learningRate=_learningRate;
@property(readonly) unsigned long long optimizerType; // @synthesize optimizerType=_optimizerType;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)initWithOptimizerType:(unsigned long long)arg1 learningRate:(float)arg2 momentum:(float)arg3 gradientClipMin:(id)arg4 gradientClipMax:(id)arg5;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

