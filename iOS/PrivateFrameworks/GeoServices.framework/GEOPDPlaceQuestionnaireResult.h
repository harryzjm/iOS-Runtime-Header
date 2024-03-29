//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, GEOPDPhotoConstraints, GEOPDScorecardLayout, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceQuestionnaireResult : PBCodable
{
    PBDataReader *_reader;
    NSMutableArray *_historicalMapsIds;
    GEOPDMapsIdentifier *_mapsId;
    GEOPDPhotoConstraints *_photoConstraints;
    GEOPDScorecardLayout *_scorecardLayout;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    _Bool _alwaysPositionInitialRatingCtaTowardsTop;
    _Bool _collectPhotos;
    _Bool _isOverride;
    _Bool _suppressOnExistingRichData;
    struct {
        unsigned int has_status:1;
        unsigned int has_alwaysPositionInitialRatingCtaTowardsTop:1;
        unsigned int has_collectPhotos:1;
        unsigned int has_isOverride:1;
        unsigned int has_suppressOnExistingRichData:1;
        unsigned int read_historicalMapsIds:1;
        unsigned int read_mapsId:1;
        unsigned int read_photoConstraints:1;
        unsigned int read_scorecardLayout:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)init;

@end

