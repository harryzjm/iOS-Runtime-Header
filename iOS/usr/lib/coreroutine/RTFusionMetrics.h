//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/RTMetricProtocol-Protocol.h>

@class NSArray, NSString;

@interface RTFusionMetrics <RTMetricProtocol>
{
    NSArray *_bluePOICandidates;
    NSArray *_localHintCandidates;
    NSArray *_learnedPlaceCandidatesExcludingHomeWork;
    NSArray *_learnedPlaceHomeWorkCandidates;
}

+ (CDStruct_b8464340)event;
+ (id)supportedMetricKeys;
+ (id)bucketedKeys;
+ (id)doubleKeys;
+ (id)integerKeys;
+ (id)unsignedIntegerKeys;
+ (id)booleanKeys;
@property(retain, nonatomic) NSArray *learnedPlaceHomeWorkCandidates; // @synthesize learnedPlaceHomeWorkCandidates=_learnedPlaceHomeWorkCandidates;
@property(retain, nonatomic) NSArray *learnedPlaceCandidatesExcludingHomeWork; // @synthesize learnedPlaceCandidatesExcludingHomeWork=_learnedPlaceCandidatesExcludingHomeWork;
@property(retain, nonatomic) NSArray *localHintCandidates; // @synthesize localHintCandidates=_localHintCandidates;
@property(retain, nonatomic) NSArray *bluePOICandidates; // @synthesize bluePOICandidates=_bluePOICandidates;
- (void).cxx_destruct;
- (_Bool)submitMetricsWithError:(id *)arg1;
- (void)setDerivedMetrics;
- (void)setMetricsUsingInputCandidates:(id)arg1 outputFusedInferredMapItems:(id)arg2 bestFusedInferredMapItem:(id)arg3 outputError:(id)arg4;
- (void)setOutputMetrics:(id)arg1 bestFusedInferredMapItem:(id)arg2 outputError:(id)arg3;
- (void)setInputMetrics:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
