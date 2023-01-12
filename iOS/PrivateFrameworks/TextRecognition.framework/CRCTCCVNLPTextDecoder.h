//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRTextDecoding-Protocol.h>

@class CRNeuralRecognizerConfiguration, CRRegex, CRTextSequenceRecognizerModel, NSLocale, NSOrderedSet, NSString;

@interface CRCTCCVNLPTextDecoder : NSObject <CRTextDecoding>
{
    _Bool _shouldUseLM;
    _Bool _shouldUseFalsePositiveFiltering;
    CRNeuralRecognizerConfiguration *_configuration;
    NSLocale *_locale;
    CRTextSequenceRecognizerModel *_model;
    CRRegex *_regExpressions;
    NSOrderedSet *_characterObservations;
}

+ (id)lmSupportedLanguages;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOrderedSet *characterObservations; // @synthesize characterObservations=_characterObservations;
@property(nonatomic) _Bool shouldUseFalsePositiveFiltering; // @synthesize shouldUseFalsePositiveFiltering=_shouldUseFalsePositiveFiltering;
@property(nonatomic) _Bool shouldUseLM; // @synthesize shouldUseLM=_shouldUseLM;
@property(retain, nonatomic) CRRegex *regExpressions; // @synthesize regExpressions=_regExpressions;
@property(retain) CRTextSequenceRecognizerModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(retain) CRNeuralRecognizerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_decodeFeaturesWithInfo:(id)arg1 activations:(id)arg2 imageSize:(struct CGSize)arg3 error:(id *)arg4;
- (_Bool)_wordLMShouldFilterCandidate:(id)arg1;
- (void)_create2DArraysFromInputArray:(id)arg1 classSize:(unsigned long long *)arg2 outputArrays:(void *)arg3;
- (id)_buildActivationMatrices:(id)arg1;
- (void)decodeOutput:(id)arg1 imageSize:(struct CGSize)arg2 error:(id *)arg3;
- (_Bool)shouldDecodeWithLM;
@property(readonly) struct CVNLPTextDecodingPruningPolicy pruningPolicy;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
