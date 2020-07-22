//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOLogMsgEventRefineSearchSession : PBCodable <NSCopying>
{
    int _refineSearchType;
    NSString *_searchString;
    int _searchType;
    NSMutableArray *_suggestionItems;
    struct {
        unsigned int refineSearchType:1;
        unsigned int searchType:1;
    } _has;
}

+ (Class)suggestionItemType;
@property(retain, nonatomic) NSMutableArray *suggestionItems; // @synthesize suggestionItems=_suggestionItems;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)suggestionItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionItemsCount;
- (void)addSuggestionItem:(id)arg1;
- (void)clearSuggestionItems;
@property(readonly, nonatomic) _Bool hasSearchString;
- (int)StringAsRefineSearchType:(id)arg1;
- (id)refineSearchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasRefineSearchType;
@property(nonatomic) int refineSearchType; // @synthesize refineSearchType=_refineSearchType;
- (int)StringAsSearchType:(id)arg1;
- (id)searchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchType;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;

@end

