//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString, SNLogMelBasedFeatureExtractorConfiguration, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNLogMelBasedFeatureExtractor : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;
    SNSystemConfiguration *_systemConfiguration;
    SNLogMelBasedFeatureExtractorConfiguration *_configuration;
    long long _featurePrintType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long featurePrintType; // @synthesize featurePrintType=_featurePrintType;
@property(readonly, nonatomic) struct Box *resultsBox;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
