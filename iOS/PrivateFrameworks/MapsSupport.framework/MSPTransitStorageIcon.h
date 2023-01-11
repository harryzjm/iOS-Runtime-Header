//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitIconDataSource-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _cartoID;
    unsigned int _defaultTransitType;
    unsigned int _iconAttributeKey;
    unsigned int _iconAttributeValue;
    int _iconType;
    struct {
        unsigned int cartoID:1;
        unsigned int defaultTransitType:1;
        unsigned int iconAttributeKey:1;
        unsigned int iconAttributeValue:1;
        unsigned int iconType:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int iconAttributeValue; // @synthesize iconAttributeValue=_iconAttributeValue;
@property(nonatomic) unsigned int iconAttributeKey; // @synthesize iconAttributeKey=_iconAttributeKey;
@property(nonatomic) unsigned int defaultTransitType; // @synthesize defaultTransitType=_defaultTransitType;
@property(nonatomic) unsigned int cartoID; // @synthesize cartoID=_cartoID;
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
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
@property(nonatomic) _Bool hasIconAttributeValue;
@property(nonatomic) _Bool hasIconAttributeKey;
@property(nonatomic) _Bool hasDefaultTransitType;
@property(nonatomic) _Bool hasCartoID;
- (int)StringAsIconType:(id)arg1;
- (id)iconTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasIconType;
- (id)initWithIcon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
