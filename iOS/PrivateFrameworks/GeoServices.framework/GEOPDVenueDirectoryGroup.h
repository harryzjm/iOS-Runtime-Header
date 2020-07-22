//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueDirectoryGroup : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _directoryGroupingId;
    unsigned long long _muid;
    GEOPDVenueLabel *_label;
    struct {
        unsigned int directoryGroupingId:1;
        unsigned int muid:1;
    } _has;
}

@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) GEOPDVenueLabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long directoryGroupingId; // @synthesize directoryGroupingId=_directoryGroupingId;
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
@property(nonatomic) _Bool hasMuid;
@property(readonly, nonatomic) _Bool hasLabel;
@property(nonatomic) _Bool hasDirectoryGroupingId;

@end
