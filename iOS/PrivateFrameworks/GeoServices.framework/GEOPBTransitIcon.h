//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitIconDataSource-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _cartoId;
    unsigned int _transitTypeEnumValue;
    struct {
        unsigned int cartoId:1;
        unsigned int transitTypeEnumValue:1;
    } _has;
}

@property(nonatomic) unsigned int transitTypeEnumValue; // @synthesize transitTypeEnumValue=_transitTypeEnumValue;
@property(nonatomic) unsigned int cartoId; // @synthesize cartoId=_cartoId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasTransitTypeEnumValue;
@property(nonatomic) _Bool hasCartoId;
@property(readonly, nonatomic) unsigned int iconAttributeValue;
@property(readonly, nonatomic) unsigned int iconAttributeKey;
@property(readonly, nonatomic) unsigned int defaultTransitType;
@property(readonly, nonatomic) unsigned int cartoID;
@property(readonly, nonatomic) long long iconType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

