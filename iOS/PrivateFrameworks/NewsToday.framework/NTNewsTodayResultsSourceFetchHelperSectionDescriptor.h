//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTSectionDescriptor-Protocol.h>

@class NSString, NSURL, NTPBDiscoverMoreVideosInfo;
@protocol NTSectionDescriptor, NTSectionQueueDescriptor;

@interface NTNewsTodayResultsSourceFetchHelperSectionDescriptor : NSObject <NTSectionDescriptor>
{
    id <NTSectionDescriptor> _sectionDescriptor;
    id <NTSectionQueueDescriptor> _parentSectionQueueDescriptor;
}

@property(readonly, copy, nonatomic) id <NTSectionQueueDescriptor> parentSectionQueueDescriptor; // @synthesize parentSectionQueueDescriptor=_parentSectionQueueDescriptor;
@property(readonly, copy, nonatomic) id <NTSectionDescriptor> sectionDescriptor; // @synthesize sectionDescriptor=_sectionDescriptor;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSString *actionTitle;
@property(readonly, nonatomic) _Bool videoPlaysMutedByDefault;
@property(readonly, nonatomic) int leadingCellPromotionPolicy;
@property(readonly, copy, nonatomic) NSString *backgroundGradientColor;
@property(readonly, copy, nonatomic) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property(readonly, nonatomic) _Bool openVideoPlaylistInApp;
@property(readonly, nonatomic) _Bool useNameColorInWidget;
@property(readonly, nonatomic) _Bool displaysAsVideoPlaylist;
@property(readonly, nonatomic) long long supplementalIntraSectionFilterOptions;
@property(readonly, nonatomic) long long supplementalInterSectionFilterOptions;
@property(readonly, nonatomic) long long seenArticlesMinimumTimeSinceFirstSeenToFilter;
@property(readonly, nonatomic) int seenArticlesFilterMethod;
@property(readonly, nonatomic) int readArticlesFilterMethod;
@property(readonly, nonatomic) unsigned long long maximumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long minimumStoriesAllocation;
@property(readonly, nonatomic) unsigned long long fallbackOrder;
@property(readonly, nonatomic) unsigned long long cachedResultCutoffTime;
@property(readonly, copy, nonatomic) NSString *nameColor;
@property(readonly, copy, nonatomic) NSString *referralBarName;
@property(readonly, copy, nonatomic) NSString *compactName;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *personalizationFeatureID;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionDescriptor:(id)arg1 parentSectionQueueDescriptor:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

