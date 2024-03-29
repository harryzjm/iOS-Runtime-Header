//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface VCLinkProbingResult : NSObject
{
    unsigned int _reorderedPacketsCount;
    unsigned int _sentRequestCount;
    unsigned int _receivedResponseCount;
    NSMutableArray *_requestTimestampAndRTTList;
    NSNumber *_expMovMeanRTT;
    NSNumber *_plrEnvelopeValue;
    NSNumber *_plrTier;
    CDStruct_7421bd8e _linkProbingResultConfig;
}

@property(readonly) NSNumber *plrTier; // @synthesize plrTier=_plrTier;
@property(readonly) NSNumber *plrEnvelopeValue; // @synthesize plrEnvelopeValue=_plrEnvelopeValue;
@property(readonly) NSNumber *expMovMeanRTT; // @synthesize expMovMeanRTT=_expMovMeanRTT;
@property(readonly) NSMutableArray *requestTimestampAndRTTList; // @synthesize requestTimestampAndRTTList=_requestTimestampAndRTTList;
@property(readonly) unsigned int receivedResponseCount; // @synthesize receivedResponseCount=_receivedResponseCount;
@property(readonly) unsigned int sentRequestCount; // @synthesize sentRequestCount=_sentRequestCount;
@property(readonly) unsigned int reorderedPacketsCount; // @synthesize reorderedPacketsCount=_reorderedPacketsCount;
- (id)description;
- (unsigned char)getPLRTierFromPLREnvelope:(double)arg1;
- (void)updateLinkStatsWithArrivingNewValueMeanRTT:(double)arg1 arrivingNewValuePLR:(double)arg2;
- (void)updateProbingResult:(id)arg1 initialResult:(_Bool)arg2;
- (void)mergeProbingResults:(id)arg1;
- (void)dealloc;
- (id)initWithProbingResults:(id)arg1 linkProbingResultConfig:(CDStruct_7421bd8e)arg2;

@end

