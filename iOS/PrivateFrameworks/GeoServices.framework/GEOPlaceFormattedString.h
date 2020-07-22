//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString;

@interface GEOPlaceFormattedString : PBCodable <NSCopying>
{
    GEOFormattedString *_contactHome;
    GEOFormattedString *_contactOther;
    GEOFormattedString *_contactWork;
    GEOFormattedString *_custom;
    GEOFormattedString *_home;
    GEOFormattedString *_pointOfInterest;
    GEOFormattedString *_streetAddress;
    GEOFormattedString *_unknown;
    GEOFormattedString *_work;
}

@property(retain, nonatomic) GEOFormattedString *custom; // @synthesize custom=_custom;
@property(retain, nonatomic) GEOFormattedString *unknown; // @synthesize unknown=_unknown;
@property(retain, nonatomic) GEOFormattedString *streetAddress; // @synthesize streetAddress=_streetAddress;
@property(retain, nonatomic) GEOFormattedString *pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;
@property(retain, nonatomic) GEOFormattedString *contactOther; // @synthesize contactOther=_contactOther;
@property(retain, nonatomic) GEOFormattedString *contactHome; // @synthesize contactHome=_contactHome;
@property(retain, nonatomic) GEOFormattedString *contactWork; // @synthesize contactWork=_contactWork;
@property(retain, nonatomic) GEOFormattedString *work; // @synthesize work=_work;
@property(retain, nonatomic) GEOFormattedString *home; // @synthesize home=_home;
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
@property(readonly, nonatomic) _Bool hasCustom;
@property(readonly, nonatomic) _Bool hasUnknown;
@property(readonly, nonatomic) _Bool hasStreetAddress;
@property(readonly, nonatomic) _Bool hasPointOfInterest;
@property(readonly, nonatomic) _Bool hasContactOther;
@property(readonly, nonatomic) _Bool hasContactHome;
@property(readonly, nonatomic) _Bool hasContactWork;
@property(readonly, nonatomic) _Bool hasWork;
@property(readonly, nonatomic) _Bool hasHome;

@end

