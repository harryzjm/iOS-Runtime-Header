//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitShieldDataSource-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _shieldType;
    NSString *_shieldColorString;
    NSString *_shieldText;
    struct {
        unsigned int shieldType:1;
    } _has;
}

@property(retain, nonatomic) NSString *shieldColorString; // @synthesize shieldColorString=_shieldColorString;
@property(nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
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
@property(readonly, nonatomic) _Bool hasShieldColorString;
@property(nonatomic) _Bool hasShieldType;
@property(readonly, nonatomic) _Bool hasShieldText;
- (id)initWithShield:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

