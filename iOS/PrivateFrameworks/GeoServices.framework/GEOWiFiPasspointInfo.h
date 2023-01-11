//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOWiFiPasspointInfo : PBCodable <NSCopying>
{
    NSString *_venueName;
    int _networkType;
    int _venueGroup;
    unsigned int _venueType;
    struct {
        unsigned int has_networkType:1;
        unsigned int has_venueGroup:1;
        unsigned int has_venueType:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *venueName;
@property(readonly, nonatomic) _Bool hasVenueName;
@property(nonatomic) _Bool hasVenueType;
@property(nonatomic) unsigned int venueType;
- (int)StringAsVenueGroup:(id)arg1;
- (id)venueGroupAsString:(int)arg1;
@property(nonatomic) _Bool hasVenueGroup;
@property(nonatomic) int venueGroup;
- (int)StringAsNetworkType:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasNetworkType;
@property(nonatomic) int networkType;

@end
