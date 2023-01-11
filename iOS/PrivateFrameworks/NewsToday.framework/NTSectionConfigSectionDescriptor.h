//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionDescriptor-Protocol.h>

@class NSString, NSURL;
@protocol NTSectionFetchDescriptor;

@interface NTSectionConfigSectionDescriptor : NSObject <NTSectionDescriptor>
{
    int _readArticlesFilterMethod;
    int _seenArticlesFilterMethod;
    int _promotionCriterion;
    NSString *_identifier;
    NSString *_personalizationFeatureID;
    NSString *_name;
    NSString *_compactName;
    NSString *_referralBarName;
    NSString *_nameColorLight;
    NSString *_nameColorDark;
    unsigned long long _cachedResultCutoffTime;
    unsigned long long _minimumStoriesAllocation;
    unsigned long long _maximumStoriesAllocation;
    long long _seenArticlesMinimumTimeSinceFirstSeenToFilter;
    unsigned long long _fallbackOrder;
    long long _supplementalInterSectionFilterOptions;
    long long _supplementalIntraSectionFilterOptions;
    NSString *_actionTitle;
    NSURL *_actionURL;
    NSURL *_nameActionURL;
    NSString *_backingTagID;
    NSString *_backgroundColorDark;
    NSString *_backgroundColorLight;
    NSObject<NTSectionFetchDescriptor> *_fetchDescriptor;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSObject<NTSectionFetchDescriptor> *fetchDescriptor; // @synthesize fetchDescriptor=_fetchDescriptor;
@property(readonly, copy, nonatomic) NSString *backgroundColorLight; // @synthesize backgroundColorLight=_backgroundColorLight;
@property(readonly, copy, nonatomic) NSString *backgroundColorDark; // @synthesize backgroundColorDark=_backgroundColorDark;
@property(readonly, nonatomic) NSString *backingTagID; // @synthesize backingTagID=_backingTagID;
@property(readonly, nonatomic) int promotionCriterion; // @synthesize promotionCriterion=_promotionCriterion;
@property(readonly, copy, nonatomic) NSURL *nameActionURL; // @synthesize nameActionURL=_nameActionURL;
@property(readonly, copy, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, nonatomic) long long supplementalIntraSectionFilterOptions; // @synthesize supplementalIntraSectionFilterOptions=_supplementalIntraSectionFilterOptions;
@property(readonly, nonatomic) long long supplementalInterSectionFilterOptions; // @synthesize supplementalInterSectionFilterOptions=_supplementalInterSectionFilterOptions;
@property(readonly, nonatomic) unsigned long long fallbackOrder; // @synthesize fallbackOrder=_fallbackOrder;
@property(readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter; // @synthesize seenArticlesMinimumTimeSinceFirstSeenToFilter=_seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(readonly, nonatomic) int seenArticlesFilterMethod; // @synthesize seenArticlesFilterMethod=_seenArticlesFilterMethod;
@property(readonly, nonatomic) int readArticlesFilterMethod; // @synthesize readArticlesFilterMethod=_readArticlesFilterMethod;
@property(readonly, nonatomic) unsigned long long maximumStoriesAllocation; // @synthesize maximumStoriesAllocation=_maximumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long minimumStoriesAllocation; // @synthesize minimumStoriesAllocation=_minimumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long cachedResultCutoffTime; // @synthesize cachedResultCutoffTime=_cachedResultCutoffTime;
@property(readonly, copy, nonatomic) NSString *nameColorDark; // @synthesize nameColorDark=_nameColorDark;
@property(readonly, copy, nonatomic) NSString *nameColorLight; // @synthesize nameColorLight=_nameColorLight;
@property(readonly, copy, nonatomic) NSString *referralBarName; // @synthesize referralBarName=_referralBarName;
@property(readonly, copy, nonatomic) NSString *compactName; // @synthesize compactName=_compactName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *personalizationFeatureID; // @synthesize personalizationFeatureID=_personalizationFeatureID;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)initWithSectionConfig:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 paidBundleFeedID:(id)arg5 todayData:(id)arg6 supplementalFeedFilterOptions:(long long)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
