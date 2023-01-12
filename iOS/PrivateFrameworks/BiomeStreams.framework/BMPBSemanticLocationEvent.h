//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@interface BMPBSemanticLocationEvent : PBCodable <NSCopying>
{
    int _placeType;
    int _userSpecificPlaceType;
    _Bool _starting;
    struct {
        unsigned int placeType:1;
        unsigned int userSpecificPlaceType:1;
        unsigned int starting:1;
    } _has;
}

@property(nonatomic) _Bool starting; // @synthesize starting=_starting;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPlaceType:(id)arg1;
- (id)placeTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPlaceType;
@property(nonatomic) int placeType; // @synthesize placeType=_placeType;
- (int)StringAsUserSpecificPlaceType:(id)arg1;
- (id)userSpecificPlaceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasUserSpecificPlaceType;
@property(nonatomic) int userSpecificPlaceType; // @synthesize userSpecificPlaceType=_userSpecificPlaceType;
@property(nonatomic) _Bool hasStarting;

@end
