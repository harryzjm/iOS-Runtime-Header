//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpotlightServices/SSDataCollectible-Protocol.h>

@class MISSING_TYPE, NSArray, NSData, NSDate, NSMutableArray, NSString, PRSL2FeatureVector, PRSRankingSpanCalculator;

@interface PRSRankingItem : NSObject <SSDataCollectible>
{
    _Bool _isInternal;
    NSMutableArray *_matchedSenders;
    NSMutableArray *_matchedVipSenders;
    NSMutableArray *_matchedRecipients;
    _Bool _eligibleForDemotion;
    _Bool _shouldHideUnderShowMore;
    _Bool _shouldHideUnderShowMoreIfNotTophit;
    _Bool _recentForTopHit;
    _Bool _recentForAboveThresholdTopHit;
    _Bool _matchedQueryTerms;
    _Bool _hasPolicyMultipleTermsPhraseMatch;
    _Bool _isSafariTopHit;
    _Bool _isBundleDemotedForBullseyeCommittedSearch;
    _Bool _hasShortCut;
    _Bool _displayNameInitialsPrefixMatchOnly;
    _Bool _vendorNameIsDisplayNamePrefix;
    _Bool _isNotExecutable;
    _Bool _isKeywordMatch;
    _Bool _isPrepared;
    short _topHitReason;
    float _rawScore;
    float _feedbackScore;
    float _score;
    float _withinBundleScore;
    unsigned int _bundleIDType;
    NSString *_identifier;
    double _suggestionScore;
    NSString *_sectionBundleIdentifier;
    NSString *_firstMatchedAltName;
    NSString *_exactMatchedKeyword;
    NSString *_displayNameInitials;
    PRSL2FeatureVector *_L2FeatureVector;
    NSData *_serverFeaturesJSON;
    NSData *_serverSuggestionsData;
    NSData *_localSuggestionsData;
    double _mostRecentUsedDate;
    double _closestUpComingDate;
    // Error: parsing type: '^{?=q[2Q]TT[0^v]}', name: _attributes
    PRSRankingSpanCalculator *_spanCalculator;
    NSString *_contentType;
    unsigned long long _importantPropertiesPrefixMatched;
    unsigned long long _importantPropertiesWordMatched;
    NSArray *_emailAddresses;
    MISSING_TYPE *_inputToModelScore;
    MISSING_TYPE *_indexScore;
}

+ (unsigned short)featureFromVirtualIdx:(unsigned long long)arg1;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)arg1;
+ (void)initialize;
- (void).cxx_destruct;
// Error parsing type for property attributes:
// Property attributes: T^{?=q[2Q]TT[0^v]},N,V_attributes

@property(nonatomic) short topHitReason; // @synthesize topHitReason=_topHitReason;
@property(nonatomic) double closestUpComingDate; // @synthesize closestUpComingDate=_closestUpComingDate;
@property(nonatomic) double mostRecentUsedDate; // @synthesize mostRecentUsedDate=_mostRecentUsedDate;
@property(nonatomic) _Bool isKeywordMatch; // @synthesize isKeywordMatch=_isKeywordMatch;
@property(nonatomic) _Bool isNotExecutable; // @synthesize isNotExecutable=_isNotExecutable;
@property(nonatomic) _Bool vendorNameIsDisplayNamePrefix; // @synthesize vendorNameIsDisplayNamePrefix=_vendorNameIsDisplayNamePrefix;
@property(nonatomic) _Bool displayNameInitialsPrefixMatchOnly; // @synthesize displayNameInitialsPrefixMatchOnly=_displayNameInitialsPrefixMatchOnly;
@property(nonatomic) _Bool hasShortCut; // @synthesize hasShortCut=_hasShortCut;
@property(nonatomic) _Bool isBundleDemotedForBullseyeCommittedSearch; // @synthesize isBundleDemotedForBullseyeCommittedSearch=_isBundleDemotedForBullseyeCommittedSearch;
@property(nonatomic) _Bool isSafariTopHit; // @synthesize isSafariTopHit=_isSafariTopHit;
@property(nonatomic) _Bool hasPolicyMultipleTermsPhraseMatch; // @synthesize hasPolicyMultipleTermsPhraseMatch=_hasPolicyMultipleTermsPhraseMatch;
@property(nonatomic) _Bool matchedQueryTerms; // @synthesize matchedQueryTerms=_matchedQueryTerms;
@property(nonatomic) _Bool recentForAboveThresholdTopHit; // @synthesize recentForAboveThresholdTopHit=_recentForAboveThresholdTopHit;
@property(nonatomic) _Bool recentForTopHit; // @synthesize recentForTopHit=_recentForTopHit;
@property(nonatomic) _Bool shouldHideUnderShowMoreIfNotTophit; // @synthesize shouldHideUnderShowMoreIfNotTophit=_shouldHideUnderShowMoreIfNotTophit;
@property(nonatomic) _Bool shouldHideUnderShowMore; // @synthesize shouldHideUnderShowMore=_shouldHideUnderShowMore;
@property(nonatomic) _Bool eligibleForDemotion; // @synthesize eligibleForDemotion=_eligibleForDemotion;
@property(retain, nonatomic) NSData *localSuggestionsData; // @synthesize localSuggestionsData=_localSuggestionsData;
@property(retain, nonatomic) NSData *serverSuggestionsData; // @synthesize serverSuggestionsData=_serverSuggestionsData;
@property(retain, nonatomic) NSData *serverFeaturesJSON; // @synthesize serverFeaturesJSON=_serverFeaturesJSON;
@property(retain, nonatomic) PRSL2FeatureVector *L2FeatureVector; // @synthesize L2FeatureVector=_L2FeatureVector;
@property(retain, nonatomic) NSString *displayNameInitials; // @synthesize displayNameInitials=_displayNameInitials;
@property(retain, nonatomic) NSString *exactMatchedKeyword; // @synthesize exactMatchedKeyword=_exactMatchedKeyword;
@property(retain, nonatomic) NSString *firstMatchedAltName; // @synthesize firstMatchedAltName=_firstMatchedAltName;
@property(retain, nonatomic) NSString *sectionBundleIdentifier; // @synthesize sectionBundleIdentifier=_sectionBundleIdentifier;
@property(nonatomic) double suggestionScore; // @synthesize suggestionScore=_suggestionScore;
@property(nonatomic) float withinBundleScore; // @synthesize withinBundleScore=_withinBundleScore;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) float feedbackScore; // @synthesize feedbackScore=_feedbackScore;
@property(nonatomic) float rawScore; // @synthesize rawScore=_rawScore;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)serializeToJSON:(void *)arg1 valuesOnly:(_Bool)arg2;
- (id)dataCollectionBundle;
@property(readonly, copy) NSString *description;
- (id)likelyDisplayTitle;
- (id)displayName;
- (long long)compare:(id)arg1 currentTime:(double)arg2;
- (id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2;
@property(readonly, nonatomic) NSDate *interestingDate;
- (id)dueDate;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float (*)[0])arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(struct prs_feature_population_ctx_t *)arg5 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg6 propertyCanFuzzyMatch:(_Bool)arg7 keyboardLanguage:(id)arg8 isCJK:(_Bool)arg9 featureList:(const unsigned short *)arg10 propertyName:(id)arg11;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float (*)[0])arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(struct prs_feature_population_ctx_t *)arg5 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg6 propertyCanFuzzyMatch:(_Bool)arg7 keyboardLanguage:(id)arg8 isCJK:(_Bool)arg9 propertyName:(id)arg10;
- (id)getBundleSpecificValue:(id)arg1 forPropertyName:(id)arg2 withQueryString:(id)arg3 isCJK:(_Bool)arg4 isBullseyeSearch:(_Bool)arg5;
- (void)populateParsecRemainingFeatures;
- (void)populateRemainingFeaturesWithRanker:(id)arg1;
- (void)populateOtherFeatures:(struct PRSL2FeatureScoreInfo *)arg1 withEvaluator:(id)arg2;
- (void)inferDateBinsFromDates:(id)arg1 intoBins:(int *)arg2;
- (void)populateSMSFeatures:(struct PRSL2FeatureScoreInfo *)arg1;
- (void)populateMailFeatures:(struct PRSL2FeatureScoreInfo *)arg1;
- (void)populateParsecRoundTripFeatures:(id)arg1 forParsecResult:(id)arg2;
- (void)populateParsecBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateBundleSpecificFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct prs_feature_population_ctx_t *)arg1 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg2;
- (void)updateBundleFeatures:(float *)arg1 withArrValues:(float (*)[0])arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg3;
- (void)updateAccumulatedBundleFeatures:(float *)arg1 values:(float *)arg2 feature:(unsigned long long)arg3;
- (void)updateScoreDescriptorBundleFeatures:(float *)arg1 feature:(unsigned long long)arg2;
- (void)updateNumScoreDescriptorBundleFeatures:(float *)arg1 feature:(unsigned long long)arg2 featureScoreInfo:(struct PRSL2FeatureScoreInfo *)arg3;
- (void)populateParsecAnyFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecWebVideoFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecTvShowFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecProfileFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecEPubBookFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecMovieFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecPodcastFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecAppFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecSongFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateParsecAlbumFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3;
- (void)populateContactFeatures:(struct PRSL2FeatureScoreInfo *)arg1 currentTime:(double)arg2;
- (_Bool)didMatchRankingDescriptor:(id)arg1;
- (void)dealloc;
- (id)initForParsecResultWithBundleID:(id)arg1;
-     // Error parsing type: @24@0:8^{?=q[2Q]TT[0^v]}16, name: initWithAttrs:
@property(nonatomic) MISSING_TYPE *test_indexScore;
@property(nonatomic) MISSING_TYPE *test_inputToModelScore;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
