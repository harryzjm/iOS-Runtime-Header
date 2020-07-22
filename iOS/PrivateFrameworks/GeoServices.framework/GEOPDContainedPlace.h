//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDLinkedPlace, NSMutableArray, PBUnknownFields;

@interface GEOPDContainedPlace : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    NSMutableArray *_childPlaces;
    GEOPDLinkedPlace *_parentPlace;
    NSMutableArray *_siblingPlaces;
    CDStruct_b1448a5c _has;
}

+ (Class)siblingPlaceType;
+ (Class)childPlaceType;
@property(retain, nonatomic) NSMutableArray *siblingPlaces; // @synthesize siblingPlaces=_siblingPlaces;
@property(nonatomic) unsigned long long featureId; // @synthesize featureId=_featureId;
@property(retain, nonatomic) NSMutableArray *childPlaces; // @synthesize childPlaces=_childPlaces;
@property(retain, nonatomic) GEOPDLinkedPlace *parentPlace; // @synthesize parentPlace=_parentPlace;
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
- (id)siblingPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)siblingPlacesCount;
- (void)addSiblingPlace:(id)arg1;
- (void)clearSiblingPlaces;
@property(nonatomic) _Bool hasFeatureId;
- (id)childPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)childPlacesCount;
- (void)addChildPlace:(id)arg1;
- (void)clearChildPlaces;
@property(readonly, nonatomic) _Bool hasParentPlace;

@end
