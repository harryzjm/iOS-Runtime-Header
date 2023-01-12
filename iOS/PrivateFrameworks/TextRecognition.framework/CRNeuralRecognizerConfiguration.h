//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRConfidenceThresholds, CRLMFilteringThresholds, CRTitleParameters, NSArray, NSNumber, NSString, NSURL;

@interface CRNeuralRecognizerConfiguration
{
    _Bool _decodeWithLM;
    int _colorSpace;
    float _precisionThreshold;
    float _mediumConfidenceThreshold;
    float _highConfidenceThreshold;
    NSURL *_customModelURL;
    long long _batchSize;
    long long _maxConcurrentBatches;
    NSArray *_inputWidths;
    double _inputHeight;
    NSArray *_customWords;
    NSNumber *_lexiconWeight;
    NSNumber *_characterLMWeight;
    NSNumber *_wordLMWeight;
    NSString *_locale;
    CRTitleParameters *_titleParameters;
    CRLMFilteringThresholds *_lmFilteringThresholds;
}

- (void).cxx_destruct;
@property float highConfidenceThreshold; // @synthesize highConfidenceThreshold=_highConfidenceThreshold;
@property float mediumConfidenceThreshold; // @synthesize mediumConfidenceThreshold=_mediumConfidenceThreshold;
@property(readonly) CRLMFilteringThresholds *lmFilteringThresholds; // @synthesize lmFilteringThresholds=_lmFilteringThresholds;
@property(readonly) CRTitleParameters *titleParameters; // @synthesize titleParameters=_titleParameters;
@property(readonly) NSString *locale; // @synthesize locale=_locale;
@property(readonly) NSNumber *wordLMWeight; // @synthesize wordLMWeight=_wordLMWeight;
@property(readonly) NSNumber *characterLMWeight; // @synthesize characterLMWeight=_characterLMWeight;
@property(readonly) NSNumber *lexiconWeight; // @synthesize lexiconWeight=_lexiconWeight;
@property(readonly) float precisionThreshold; // @synthesize precisionThreshold=_precisionThreshold;
@property(readonly) NSArray *customWords; // @synthesize customWords=_customWords;
@property(readonly) _Bool decodeWithLM; // @synthesize decodeWithLM=_decodeWithLM;
@property(readonly) double inputHeight; // @synthesize inputHeight=_inputHeight;
@property(readonly) NSArray *inputWidths; // @synthesize inputWidths=_inputWidths;
@property(readonly) long long maxConcurrentBatches; // @synthesize maxConcurrentBatches=_maxConcurrentBatches;
@property(readonly) long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly) NSURL *customModelURL; // @synthesize customModelURL=_customModelURL;
@property(readonly) int colorSpace; // @synthesize colorSpace=_colorSpace;
- (void)setConfidenceThresholdsForRevision:(unsigned long long)arg1;
- (id)textFeatureFilter;
- (void)loadLanguageModelWeightsForLanguageIdentifier:(id)arg1 rev:(unsigned long long)arg2;
@property(readonly) CRConfidenceThresholds *confidenceThresholds;
@property(readonly) _Bool filterWithLM;
- (id)initV3DefaultConfigWithOptions:(id)arg1;
- (id)initV2DefaultConfigWithOptions:(id)arg1;
- (id)initV1DefaultConfigWithOptions:(id)arg1;
- (_Bool)usesAppleNeuralEngine;
- (id)initWithLocale:(id)arg1 imageReaderOptions:(id)arg2 error:(id *)arg3;

@end
