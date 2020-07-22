//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SASServerEndpointFeatures
{
}

+ (id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2;
+ (id)serverEndpointFeatures;
- (_Bool)requiresResponse;
@property(nonatomic) long long trailingSilenceDuration;
@property(copy, nonatomic) NSString *taskName;
@property(nonatomic) double silenceProbability;
@property(nonatomic) long long processedAudioDurationMs;
@property(copy, nonatomic) NSArray *pauseCounts;
@property(nonatomic) long long numOfWords;
@property(nonatomic) double eosLikelihood;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

