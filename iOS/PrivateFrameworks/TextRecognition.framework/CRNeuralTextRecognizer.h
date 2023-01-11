//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRConfidenceThresholdProviding-Protocol.h>

@class CRPerformanceStatistics, CRRecognizerConfiguration, NSString;
@protocol CRRecognizerFeatureProviding, CRTextDecoding, CRTextRecognizerModel;

@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding>
{
    _Bool _shouldCancel;
    unsigned int _desiredQoS;
    CRPerformanceStatistics *_inferenceStats;
    CRPerformanceStatistics *_decodingStats;
    CRRecognizerConfiguration *_configuration;
    NSObject<CRRecognizerFeatureProviding> *_featureProvider;
    NSObject<CRTextRecognizerModel> *_model;
    NSObject<CRTextDecoding> *_textDecoder;
}

+ (id)_textDecoderForRevision:(long long)arg1 configuration:(id)arg2 model:(id)arg3 error:(id *)arg4;
+ (id)_featureProviderForRevision:(long long)arg1 configuration:(id)arg2 model:(id)arg3 error:(id *)arg4;
+ (id)_modelForRevision:(long long)arg1 configuration:(id)arg2 error:(id *)arg3;
+ (id)recognizerForRevision:(unsigned long long)arg1 imageReaderOptions:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property unsigned int desiredQoS; // @synthesize desiredQoS=_desiredQoS;
@property _Bool shouldCancel; // @synthesize shouldCancel=_shouldCancel;
@property(retain) NSObject<CRTextDecoding> *textDecoder; // @synthesize textDecoder=_textDecoder;
@property(retain) NSObject<CRTextRecognizerModel> *model; // @synthesize model=_model;
@property(retain) NSObject<CRRecognizerFeatureProviding> *featureProvider; // @synthesize featureProvider=_featureProvider;
@property(retain) CRRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) CRPerformanceStatistics *decodingStats; // @synthesize decodingStats=_decodingStats;
@property(retain) CRPerformanceStatistics *inferenceStats; // @synthesize inferenceStats=_inferenceStats;
@property(readonly) float highConfidenceThreshold;
@property(readonly) float mediumConfidenceThreshold;
- (_Bool)shouldUseLM;
- (_Bool)_isCancelled;
- (id)recognizeInImage:(id)arg1 textFeatures:(id)arg2 progressHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
