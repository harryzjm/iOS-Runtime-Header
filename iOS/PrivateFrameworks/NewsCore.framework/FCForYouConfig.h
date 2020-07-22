//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class FCGroupConfig, FCInterestToken, FCTopStoriesGroupConfig, NSArray, NSDate, NSString, NTPBForYouConfigRecord;

@interface FCForYouConfig : NSObject <NSCopying>
{
    FCGroupConfig *_breakingNewsGroupConfig;
    FCTopStoriesGroupConfig *_topStoriesGroupConfig;
    FCGroupConfig *_trendingGroupConfig;
    FCGroupConfig *_coverArticlesGroupConfig;
    NSArray *_editorialGroupConfigs;
    NTPBForYouConfigRecord *_forYouConfigRecord;
    FCInterestToken *_interestToken;
}

@property(retain, nonatomic) FCInterestToken *interestToken; // @synthesize interestToken=_interestToken;
@property(retain, nonatomic) NTPBForYouConfigRecord *forYouConfigRecord; // @synthesize forYouConfigRecord=_forYouConfigRecord;
@property(retain, nonatomic) NSArray *editorialGroupConfigs; // @synthesize editorialGroupConfigs=_editorialGroupConfigs;
@property(retain, nonatomic) FCGroupConfig *coverArticlesGroupConfig; // @synthesize coverArticlesGroupConfig=_coverArticlesGroupConfig;
@property(retain, nonatomic) FCGroupConfig *trendingGroupConfig; // @synthesize trendingGroupConfig=_trendingGroupConfig;
@property(retain, nonatomic) FCTopStoriesGroupConfig *topStoriesGroupConfig; // @synthesize topStoriesGroupConfig=_topStoriesGroupConfig;
@property(retain, nonatomic) FCGroupConfig *breakingNewsGroupConfig; // @synthesize breakingNewsGroupConfig=_breakingNewsGroupConfig;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *fetchedDate;
@property(readonly, nonatomic) NSArray *editorialSectionTagIDs;
@property(readonly, nonatomic) NSArray *editorialArticleListIDs;
@property(readonly, nonatomic) NSString *coverArticlesArticleListID;
@property(readonly, nonatomic) NSString *trendingArticleListID;
@property(readonly, nonatomic) NSArray *topStoriesCombinedArticleIDs;
@property(readonly, nonatomic) NSArray *breakingNewsArticleIDs;
- (id)initWithRecord:(id)arg1 interestToken:(id)arg2;

@end

