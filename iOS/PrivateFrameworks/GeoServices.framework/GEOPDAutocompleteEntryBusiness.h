//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, PBUnknownFields;

@interface GEOPDAutocompleteEntryBusiness : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _distance;
    unsigned long long _muid;
    GEOPDPlace *_place;
    int _resultProviderId;
    struct {
        unsigned int distance:1;
        unsigned int muid:1;
        unsigned int resultProviderId:1;
    } _has;
}

@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
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
@property(nonatomic) _Bool hasDistance;
@property(readonly, nonatomic) _Bool hasPlace;
@property(nonatomic) _Bool hasResultProviderId;
@property(nonatomic) _Bool hasMuid;

@end

