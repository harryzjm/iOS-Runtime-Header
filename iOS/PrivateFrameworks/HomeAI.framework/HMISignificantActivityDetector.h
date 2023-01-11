//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class MLModel, MLPredictionOptions, NSArray, NSString;

@interface HMISignificantActivityDetector : HMFObject <HMFLogging>
{
    double _confidenceThresholds[91];
    struct CGSize _anchorSizes[6][6];
    unsigned long long _numberOfAnchors[6];
    _Bool _useSoftmax;
    MLModel *_mlModel;
    NSString *_inputFeatureValueName;
    NSArray *_offsetsFeatureValueNames;
    NSArray *_scoresFeatureValueNames;
    double _nmsThreshold;
    MLPredictionOptions *_predictionOptions;
    struct CGSize _inputDimensions;
}

+ (id)logCategory;
@property(readonly) MLPredictionOptions *predictionOptions; // @synthesize predictionOptions=_predictionOptions;
@property(readonly) _Bool useSoftmax; // @synthesize useSoftmax=_useSoftmax;
@property(readonly) double nmsThreshold; // @synthesize nmsThreshold=_nmsThreshold;
@property(readonly) NSArray *scoresFeatureValueNames; // @synthesize scoresFeatureValueNames=_scoresFeatureValueNames;
@property(readonly) NSArray *offsetsFeatureValueNames; // @synthesize offsetsFeatureValueNames=_offsetsFeatureValueNames;
@property(readonly) NSString *inputFeatureValueName; // @synthesize inputFeatureValueName=_inputFeatureValueName;
@property(readonly) MLModel *mlModel; // @synthesize mlModel=_mlModel;
@property(readonly) struct CGSize inputDimensions; // @synthesize inputDimensions=_inputDimensions;
- (void).cxx_destruct;
- (void)_postProcessOffsets:(id)arg1 scores:(id)arg2 outputPredictions:(id)arg3;
- (_Bool)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer *)arg1 offsets:(id)arg2 scores:(id)arg3 error:(id *)arg4;
- (_Bool)predict:(struct __CVBuffer *)arg1 detectedObjects:(id)arg2 error:(id *)arg3;
- (id)initWithConfidenceThresholds:(id)arg1 nmsThreshold:(double)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
