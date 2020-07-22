//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class NTTrendingByParsecResults, PARSession;
@protocol FCContentContext;

@interface NTTrendingByParsecResultsOperation : FCOperation
{
    PARSession *_session;
    id <FCContentContext> _contentContext;
    double _maximumCachedAge;
    CDUnknownBlockType _resultsCompletionHandler;
    NTTrendingByParsecResults *_trendingByParsecResults;
}

@property(retain, nonatomic) NTTrendingByParsecResults *trendingByParsecResults; // @synthesize trendingByParsecResults=_trendingByParsecResults;
@property(copy, nonatomic) CDUnknownBlockType resultsCompletionHandler; // @synthesize resultsCompletionHandler=_resultsCompletionHandler;
@property(nonatomic) double maximumCachedAge; // @synthesize maximumCachedAge=_maximumCachedAge;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(retain, nonatomic) PARSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)init;

@end

