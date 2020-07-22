//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOTransitShieldDataSource-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPBTransitShield : PBCodable <GEOTransitShieldDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_shieldColor;
    unsigned int _shieldEnumValue;
    NSString *_shieldText;
    struct {
        unsigned int shieldEnumValue:1;
    } _has;
}

@property(retain, nonatomic) NSString *shieldColor; // @synthesize shieldColor=_shieldColor;
@property(nonatomic) unsigned int shieldEnumValue; // @synthesize shieldEnumValue=_shieldEnumValue;
@property(retain, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
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
@property(readonly, nonatomic) _Bool hasShieldColor;
@property(nonatomic) _Bool hasShieldEnumValue;
@property(readonly, nonatomic) _Bool hasShieldText;
@property(readonly, nonatomic) NSString *shieldColorString;
@property(readonly, nonatomic) long long shieldType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

