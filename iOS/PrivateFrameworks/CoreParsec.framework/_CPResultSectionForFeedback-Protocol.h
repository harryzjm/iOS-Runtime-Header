//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPSearchResultForFeedback;

@protocol _CPResultSectionForFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasFallbackResultSection;
@property(copy, nonatomic) NSData *fallbackResultSection;
@property(readonly, nonatomic) _Bool hasRankingScore;
@property(nonatomic) double rankingScore;
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSArray *results;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchResultForFeedback *)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)addResults:(_CPSearchResultForFeedback *)arg1;
- (void)clearResults;
@end
