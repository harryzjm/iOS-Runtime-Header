//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray;
@protocol MLFeatureProvider;

@interface MLRegressorResult : NSObject
{
    MLMultiArray *_predictedValue;
    id <MLFeatureProvider> _additionalFeatures;
}

+ (id)resultWithValue:(id)arg1 additionalFeatures:(id)arg2;
+ (id)resultWithValue:(id)arg1;
@property(readonly) id <MLFeatureProvider> additionalFeatures; // @synthesize additionalFeatures=_additionalFeatures;
@property(readonly) MLMultiArray *predictedValue; // @synthesize predictedValue=_predictedValue;
- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 additionalFeatures:(id)arg2;
- (id)asFeatureDictionaryWithPredictedValueDescription:(id)arg1;

@end

