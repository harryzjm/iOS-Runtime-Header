//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBHeadlineAdElement : PBCodable <NSCopying>
{
    long long _channelContentProviderID;
    NSMutableArray *_articleIAdCategories;
    NSMutableArray *_articleIAdSectionIDs;
    NSString *_articleID;
    NSString *_articleRating;
    NSMutableArray *_channelIAdCategories;
    NSMutableArray *_channelIAdKeywords;
    NSString *_channelID;
    NSString *_channelRating;
    _Bool _draftArticle;
    _Bool _paidArticle;
    _Bool _sponsoredArticle;
    struct {
        unsigned int channelContentProviderID:1;
        unsigned int draftArticle:1;
        unsigned int paidArticle:1;
        unsigned int sponsoredArticle:1;
    } _has;
}

+ (Class)channelIAdCategoriesType;
+ (Class)channelIAdKeywordsType;
+ (Class)articleIAdSectionIDsType;
+ (Class)articleIAdCategoriesType;
@property(nonatomic) long long channelContentProviderID; // @synthesize channelContentProviderID=_channelContentProviderID;
@property(retain, nonatomic) NSMutableArray *channelIAdCategories; // @synthesize channelIAdCategories=_channelIAdCategories;
@property(retain, nonatomic) NSString *channelRating; // @synthesize channelRating=_channelRating;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) NSMutableArray *channelIAdKeywords; // @synthesize channelIAdKeywords=_channelIAdKeywords;
@property(retain, nonatomic) NSMutableArray *articleIAdSectionIDs; // @synthesize articleIAdSectionIDs=_articleIAdSectionIDs;
@property(nonatomic) _Bool draftArticle; // @synthesize draftArticle=_draftArticle;
@property(nonatomic) _Bool sponsoredArticle; // @synthesize sponsoredArticle=_sponsoredArticle;
@property(nonatomic) _Bool paidArticle; // @synthesize paidArticle=_paidArticle;
@property(retain, nonatomic) NSMutableArray *articleIAdCategories; // @synthesize articleIAdCategories=_articleIAdCategories;
@property(retain, nonatomic) NSString *articleRating; // @synthesize articleRating=_articleRating;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasChannelContentProviderID;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelIAdCategoriesCount;
- (void)addChannelIAdCategories:(id)arg1;
- (void)clearChannelIAdCategories;
@property(readonly, nonatomic) _Bool hasChannelRating;
@property(readonly, nonatomic) _Bool hasChannelID;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelIAdKeywordsCount;
- (void)addChannelIAdKeywords:(id)arg1;
- (void)clearChannelIAdKeywords;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIAdSectionIDsCount;
- (void)addArticleIAdSectionIDs:(id)arg1;
- (void)clearArticleIAdSectionIDs;
@property(nonatomic) _Bool hasDraftArticle;
@property(nonatomic) _Bool hasSponsoredArticle;
@property(nonatomic) _Bool hasPaidArticle;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIAdCategoriesCount;
- (void)addArticleIAdCategories:(id)arg1;
- (void)clearArticleIAdCategories;
@property(readonly, nonatomic) _Bool hasArticleRating;
@property(readonly, nonatomic) _Bool hasArticleID;

@end

