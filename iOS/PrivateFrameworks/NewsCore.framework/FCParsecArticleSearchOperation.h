//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SFMoreResults, SFRankingFeedback;
@protocol FCContentContext;

@interface FCParsecArticleSearchOperation
{
    NSString *_query;
    NSString *_keyboardInputMode;
    double _scale;
    id <FCContentContext> _contentContext;
    SFRankingFeedback *_previousRankingFeedback;
    CDUnknownBlockType _articleSearchCompletionHandler;
    NSArray *_results;
    unsigned long long _batchSize;
    SFRankingFeedback *_rankingFeedback;
    unsigned long long _parsecQueryID;
    SFMoreResults *_moreResults;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SFMoreResults *moreResults; // @synthesize moreResults=_moreResults;
@property(nonatomic) unsigned long long parsecQueryID; // @synthesize parsecQueryID=_parsecQueryID;
@property(retain, nonatomic) SFRankingFeedback *rankingFeedback; // @synthesize rankingFeedback=_rankingFeedback;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(copy) CDUnknownBlockType articleSearchCompletionHandler; // @synthesize articleSearchCompletionHandler=_articleSearchCompletionHandler;
@property(retain, nonatomic) SFRankingFeedback *previousRankingFeedback; // @synthesize previousRankingFeedback=_previousRankingFeedback;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)_rankingFeedbackWithSection:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithMoreResults:(id)arg1 parsecQueryID:(unsigned long long)arg2;
- (_Bool)validateOperation;

@end
