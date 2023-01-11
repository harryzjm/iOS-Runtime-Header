//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsTransport/NTPBPersonalizationAggregate.h>

#import <NewsCore/FCMutablePersonalizationAggregate-Protocol.h>
#import <NewsCore/FCPersonalizationAggregate-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface NTPBPersonalizationAggregate (FCPersonalizationAggregate) <FCPersonalizationAggregate, FCMutablePersonalizationAggregate>
- (double)_personalizationValueWithBaselineClicks:(double)arg1 baselineImpressions:(double)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)relativePersonalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayFactor:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)powerWithDecayFactor:(double)arg1;
@property(readonly, nonatomic) double confidence;
- (double)personalizationValueWithCorrelatedAggregate:(id)arg1 baseline:(id)arg2 decayRate:(double)arg3 baselineClicksMultiplier:(double)arg4;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;
@property(readonly, nonatomic) NSDate *lastModified;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;

// Remaining properties
@property(readonly, nonatomic) double clicks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long eventCount;
@property(readonly, nonatomic) NSString *featureKey;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) double impressions;
@property(readonly) Class superclass;
@property(nonatomic) double timestamp;
@end
