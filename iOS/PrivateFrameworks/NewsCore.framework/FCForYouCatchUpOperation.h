//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCEditorialOperation, FCForYouConfig, FCForYouConfigHeadlinesOperation, FCMyArticlesOperation, FCSpotlightOperationResult, FCTopStoriesOperation, FCTopStoriesOperationResult, NFUnfairLock, NSArray, NSDictionary, NSError, NSHashTable, NSMapTable, NSOperationQueue;
@protocol FCChannelProviding;

@interface FCForYouCatchUpOperation
{
    long long _contentTypes;
    FCMyArticlesOperation *_myArticlesOperation;
    FCTopStoriesOperation *_topStoriesOperation;
    FCEditorialOperation *_editorialOperation;
    FCForYouConfigHeadlinesOperation *_forYouConfigOperation;
    NSOperationQueue *_operationQueue;
    NSHashTable *_conditionWaiters;
    NFUnfairLock *_conditionWaitersLock;
}

+ (id)sharedCatchUpOperationForEdition:(id)arg1 contentTypes:(long long)arg2 configuration:(id)arg3 context:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NFUnfairLock *conditionWaitersLock; // @synthesize conditionWaitersLock=_conditionWaitersLock;
@property(retain, nonatomic) NSHashTable *conditionWaiters; // @synthesize conditionWaiters=_conditionWaiters;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) FCForYouConfigHeadlinesOperation *forYouConfigOperation; // @synthesize forYouConfigOperation=_forYouConfigOperation;
@property(retain, nonatomic) FCEditorialOperation *editorialOperation; // @synthesize editorialOperation=_editorialOperation;
@property(retain, nonatomic) FCTopStoriesOperation *topStoriesOperation; // @synthesize topStoriesOperation=_topStoriesOperation;
@property(retain, nonatomic) FCMyArticlesOperation *myArticlesOperation; // @synthesize myArticlesOperation=_myArticlesOperation;
@property(nonatomic) long long contentTypes; // @synthesize contentTypes=_contentTypes;
- (void)_serviceConditionWaiters;
- (void)_addConditionWaiter:(id)arg1;
@property(readonly, copy) NSDictionary *feedContextByFeedID;
- (id)catchUpErrorForContentTypes:(long long)arg1;
@property(readonly, copy, nonatomic) NSError *catchUpError;
@property(readonly, copy, nonatomic) FCSpotlightOperationResult *spotlightResult;
- (void)enumerateEditorialSectionsByRecencyAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)orphanedEditorialHeadlinesAfterTransformation:(id)arg1 minFamilySize:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSMapTable *nonEditorialScoreProfiles;
@property(readonly, copy, nonatomic) NSArray *nonEditorialFeedItems;
- (id)nonEditorialFeedItemsAfterTransformation:(id)arg1;
- (id)allFeedItemsAfterTransformation:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *trendingHeadlines;
@property(readonly, copy, nonatomic) FCTopStoriesOperationResult *topStoriesResult;
@property(readonly, copy, nonatomic) id <FCChannelProviding> topStoriesChannel;
@property(readonly, copy, nonatomic) FCForYouConfig *forYouConfig;
- (_Bool)isWaitingForContentTypes:(long long)arg1;
- (id)waiterForContentTypes:(long long)arg1;
- (id)waiterForCondition:(id)arg1;
- (void)operationDidFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithContext:(id)arg1 configuration:(id)arg2 dateRange:(id)arg3 contentTypes:(long long)arg4 background:(_Bool)arg5;

@end
