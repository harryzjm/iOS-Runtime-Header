//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/MLCustomModel-Protocol.h>
#import <PersonalizationPortraitInternals/MLFeatureProvider-Protocol.h>

@class NSCountedSet, NSDate, NSMutableSet, NSSet, PPU16CountedSet;
@protocol MLFeatureProvider;

@interface PPMutableAggregatedItem : NSObject <MLCustomModel, MLFeatureProvider>
{
    NSDate *_previousSourceDate;
    unsigned char _domain;
    double _multiplier;
    double _perRecordDecayRate;
    NSDate *_scoringDate;
    _Bool _userCreated;
    _Bool _matchesPrimaryLanguage;
    float _maxScore;
    float _minScore;
    float _sumScore;
    unsigned int _sumDwellTimeInSeconds;
    unsigned int _recordCount;
    unsigned int _exactMatchInSourceTextCount;
    float _sumOfSourceDateInHours;
    float _sumOfSquaredSourceDateInHours;
    float _sumOfSquaredInterArrivalHours;
    float _decayedSum;
    float _decayRate;
    float _maxDecayedScore;
    PPU16CountedSet *_algorithmCountedSet;
    PPU16CountedSet *_namedEntityCategoryCountedSet;
    PPU16CountedSet *_rankHistogram;
    NSMutableSet *_osBuildSet;
    NSMutableSet *_assetVersionSet;
    NSCountedSet *_bundleIdCountedSet;
    NSMutableSet *_groupIdSet;
    PPU16CountedSet *_sourceHourCountedSet;
    PPU16CountedSet *_sourceDayOfWeekCountedSet;
    NSDate *_maxSourceDate;
    NSDate *_minSourceDate;
    NSDate *_maxRelevanceDate;
    id <MLFeatureProvider> _recordOfMaxDecayedScore;
    unsigned long long _sumLengthSeconds;
    unsigned long long _sumLengthCharacters;
    unsigned long long _sumDonationCount;
    unsigned long long _sumContactHandleCount;
}

+ (float)_decay:(float)arg1 decayRate:(float)arg2 timeElapsedSeconds:(double)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long sumContactHandleCount; // @synthesize sumContactHandleCount=_sumContactHandleCount;
@property(readonly, nonatomic) unsigned long long sumDonationCount; // @synthesize sumDonationCount=_sumDonationCount;
@property(readonly, nonatomic) unsigned long long sumLengthCharacters; // @synthesize sumLengthCharacters=_sumLengthCharacters;
@property(readonly, nonatomic) unsigned long long sumLengthSeconds; // @synthesize sumLengthSeconds=_sumLengthSeconds;
@property(readonly, nonatomic) float maxDecayedScore; // @synthesize maxDecayedScore=_maxDecayedScore;
@property(readonly, nonatomic) id <MLFeatureProvider> recordOfMaxDecayedScore; // @synthesize recordOfMaxDecayedScore=_recordOfMaxDecayedScore;
@property(readonly, nonatomic) _Bool matchesPrimaryLanguage; // @synthesize matchesPrimaryLanguage=_matchesPrimaryLanguage;
@property(readonly, nonatomic) float decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) float decayedSum; // @synthesize decayedSum=_decayedSum;
@property(readonly, nonatomic) float sumOfSquaredInterArrivalHours; // @synthesize sumOfSquaredInterArrivalHours=_sumOfSquaredInterArrivalHours;
@property(readonly, nonatomic) float sumOfSquaredSourceDateInHours; // @synthesize sumOfSquaredSourceDateInHours=_sumOfSquaredSourceDateInHours;
@property(readonly, nonatomic) float sumOfSourceDateInHours; // @synthesize sumOfSourceDateInHours=_sumOfSourceDateInHours;
@property(readonly, nonatomic) NSDate *maxRelevanceDate; // @synthesize maxRelevanceDate=_maxRelevanceDate;
@property(readonly, nonatomic) NSDate *minSourceDate; // @synthesize minSourceDate=_minSourceDate;
@property(readonly, nonatomic) NSDate *maxSourceDate; // @synthesize maxSourceDate=_maxSourceDate;
@property(readonly, nonatomic) PPU16CountedSet *sourceDayOfWeekCountedSet; // @synthesize sourceDayOfWeekCountedSet=_sourceDayOfWeekCountedSet;
@property(readonly, nonatomic) PPU16CountedSet *sourceHourCountedSet; // @synthesize sourceHourCountedSet=_sourceHourCountedSet;
@property(readonly, nonatomic) NSMutableSet *groupIdSet; // @synthesize groupIdSet=_groupIdSet;
@property(readonly, nonatomic) NSCountedSet *bundleIdCountedSet; // @synthesize bundleIdCountedSet=_bundleIdCountedSet;
@property(readonly, nonatomic) NSMutableSet *assetVersionSet; // @synthesize assetVersionSet=_assetVersionSet;
@property(readonly, nonatomic) NSMutableSet *osBuildSet; // @synthesize osBuildSet=_osBuildSet;
@property(readonly, nonatomic) _Bool userCreated; // @synthesize userCreated=_userCreated;
@property(readonly, nonatomic) unsigned int exactMatchInSourceTextCount; // @synthesize exactMatchInSourceTextCount=_exactMatchInSourceTextCount;
@property(readonly, nonatomic) unsigned int recordCount; // @synthesize recordCount=_recordCount;
@property(readonly, nonatomic) unsigned int sumDwellTimeInSeconds; // @synthesize sumDwellTimeInSeconds=_sumDwellTimeInSeconds;
@property(readonly, nonatomic) PPU16CountedSet *rankHistogram; // @synthesize rankHistogram=_rankHistogram;
@property(readonly, nonatomic) float sumScore; // @synthesize sumScore=_sumScore;
@property(readonly, nonatomic) float minScore; // @synthesize minScore=_minScore;
@property(readonly, nonatomic) float maxScore; // @synthesize maxScore=_maxScore;
@property(readonly, nonatomic) PPU16CountedSet *namedEntityCategoryCountedSet; // @synthesize namedEntityCategoryCountedSet=_namedEntityCategoryCountedSet;
@property(readonly, nonatomic) PPU16CountedSet *algorithmCountedSet; // @synthesize algorithmCountedSet=_algorithmCountedSet;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithLocationRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;
- (id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 ignoreMultiplier:(_Bool)arg5;
- (id)initWithTopicRecords:(id)arg1 scoringDate:(id)arg2 decayRate:(float)arg3 sorted:(_Bool)arg4;
- (id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 perRecordDecayRate:(float)arg4 decayRate:(float)arg5;
- (id)initWithNamedEntityRecords:(id)arg1 scoringDate:(id)arg2 multiplier:(float)arg3 decayRate:(float)arg4 sorted:(_Bool)arg5;
- (id)_sortRecordsByDescendingSourceDate:(id)arg1;
- (void)_resetPropertiesWithAlgorithmMaxValue:(unsigned long long)arg1 namedEntityCategoryMaxValue:(unsigned long long)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (double)decayedScoreAddendForScore:(double)arg1 sourceDate:(id)arg2 featureProvider:(id)arg3;
- (id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id *)arg3;
- (id)dictionaryForCountedSet:(id)arg1;

@end
