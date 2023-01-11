//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCKTestFeedQueryEndpoint, FCCKTestMultiFetchQueryEndpoint, FCCKTestOrderFeedQueryEndpoint, NSMutableArray, NSMutableSet;

@interface FCCKTestContentDatabase
{
    _Bool _simulateNetworkError;
    NSMutableArray *_records;
    NSMutableSet *_droppedFeeds;
    FCCKTestFeedQueryEndpoint *_feedQueryEndpoint;
    FCCKTestOrderFeedQueryEndpoint *_orderFeedQueryEndpoint;
    FCCKTestMultiFetchQueryEndpoint *_multiFetchQueryEndpoint;
}

+ (id)testingDatabase;
@property(retain, nonatomic) FCCKTestMultiFetchQueryEndpoint *multiFetchQueryEndpoint; // @synthesize multiFetchQueryEndpoint=_multiFetchQueryEndpoint;
@property(retain, nonatomic) FCCKTestOrderFeedQueryEndpoint *orderFeedQueryEndpoint; // @synthesize orderFeedQueryEndpoint=_orderFeedQueryEndpoint;
@property(retain, nonatomic) FCCKTestFeedQueryEndpoint *feedQueryEndpoint; // @synthesize feedQueryEndpoint=_feedQueryEndpoint;
@property(retain, nonatomic) NSMutableSet *droppedFeeds; // @synthesize droppedFeeds=_droppedFeeds;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(nonatomic) _Bool simulateNetworkError; // @synthesize simulateNetworkError=_simulateNetworkError;
- (void).cxx_destruct;
- (id)records:(id)arg1 withDesiredKeys:(id)arg2;
- (unsigned long long)orderForArticleID:(id)arg1 feedID:(id)arg2;
- (id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2;
- (void)simulateDroppedFeedForFeedID:(id)arg1;
- (void)deleteFeedID:(id)arg1;
- (void)populateWithBasicTestFeeds;
- (void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 subOrder:(unsigned long long)arg4;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3;
- (void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2;
- (void)updateTagWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 properties:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2;
- (void)deleteArticleWithID:(id)arg1;
- (void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 properties:(id)arg2;
- (void)insertTestArticleWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestArticleWithProperties:(id)arg1;
- (id)insertTestArticle;
- (void)insertRecord:(id)arg1;
- (void)addOperation:(id)arg1;
- (_Bool)shouldUseCloudd;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(_Bool)arg2 networkBehaviorMonitor:(id)arg3;

@end

