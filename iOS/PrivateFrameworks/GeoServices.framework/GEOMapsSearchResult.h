//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPlaceActionDetails;

@interface GEOMapsSearchResult : PBCodable <NSCopying>
{
    unsigned long long _muid;
    GEOAddress *_address;
    GEOPlaceActionDetails *_placeActionDetails;
    CDStruct_e99c65f7 _has;
}

@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;
@property(retain, nonatomic) GEOAddress *address; // @synthesize address=_address;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlaceActionDetails;
@property(readonly, nonatomic) _Bool hasAddress;
@property(nonatomic) _Bool hasMuid;

@end

