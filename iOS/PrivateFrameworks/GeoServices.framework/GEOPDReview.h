//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDReview : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _reviewTime;
    GEOPDRating *_rating;
    NSString *_reviewId;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    struct {
        unsigned int reviewTime:1;
    } _has;
}

+ (Class)snippetType;
+ (id)reviewsForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOPDRating *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(retain, nonatomic) GEOPDUser *reviewer; // @synthesize reviewer=_reviewer;
@property(nonatomic) double reviewTime; // @synthesize reviewTime=_reviewTime;
@property(retain, nonatomic) NSMutableArray *snippets; // @synthesize snippets=_snippets;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasRating;
@property(readonly, nonatomic) _Bool hasReviewId;
@property(readonly, nonatomic) _Bool hasReviewer;
@property(nonatomic) _Bool hasReviewTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (id)_bestSnippetLocale;
- (id)_bestSnippet;

@end

