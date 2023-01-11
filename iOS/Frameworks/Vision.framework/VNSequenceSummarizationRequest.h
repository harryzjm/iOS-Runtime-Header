//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, VNSequenceSummarizationObservation;

@interface VNSequenceSummarizationRequest
{
}

+ (id)supportedFrameRates;
+ (Class)configurationClass;
+ (const CDStruct_d47b9615 *)dependentRequestCompatability;
- (void)applyConfigurationOfRequest:(id)arg1;
- (_Bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;
- (_Bool)allowsCachingOfResults;
- (_Bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
@property(retain, nonatomic) NSNumber *frameRate;
@property(retain, nonatomic) NSNumber *frameTimeStamp;
@property(retain, nonatomic) VNSequenceSummarizationObservation *inputObservation;
- (id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithSequenceSummarizationObservation:(id)arg1 frameTimeStamp:(id)arg2;
- (_Bool)warmUpRequestPerformer:(id)arg1 error:(id *)arg2;

@end

