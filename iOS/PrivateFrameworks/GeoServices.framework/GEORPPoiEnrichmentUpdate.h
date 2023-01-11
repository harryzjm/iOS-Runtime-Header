//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEORPPoiEnrichmentPlaceContext, GEORPScorecard, GEORPScorecardUpdate, NSMutableArray, PBDataReader;

@interface GEORPPoiEnrichmentUpdate : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_imageIds;
    NSMutableArray *_imageUpdates;
    GEORPPoiEnrichmentPlaceContext *_placeContext;
    GEOPDPlace *_place;
    GEORPScorecardUpdate *_scorecardUpdate;
    GEORPScorecard *_scorecard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _action;
    struct {
        unsigned int has_action:1;
        unsigned int read_imageIds:1;
        unsigned int read_imageUpdates:1;
        unsigned int read_placeContext:1;
        unsigned int read_place:1;
        unsigned int read_scorecardUpdate:1;
        unsigned int read_scorecard:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)imageUpdateType;
+ (Class)imageIdType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEORPPoiEnrichmentPlaceContext *placeContext;
@property(readonly, nonatomic) _Bool hasPlaceContext;
@property(retain, nonatomic) GEORPScorecardUpdate *scorecardUpdate;
@property(readonly, nonatomic) _Bool hasScorecardUpdate;
- (id)imageUpdateAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageUpdatesCount;
- (void)addImageUpdate:(id)arg1;
- (void)clearImageUpdates;
@property(retain, nonatomic) NSMutableArray *imageUpdates;
@property(retain, nonatomic) GEORPScorecard *scorecard;
@property(readonly, nonatomic) _Bool hasScorecard;
- (id)imageIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)imageIdsCount;
- (void)addImageId:(id)arg1;
- (void)clearImageIds;
@property(retain, nonatomic) NSMutableArray *imageIds;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) _Bool hasPlace;
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action;
- (id)initWithData:(id)arg1;
- (id)init;

@end
