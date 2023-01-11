//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiAccessPoint : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _scanTimestamp;
    unsigned int _age;
    int _channel;
    NSString *_macId;
    int _rssi;
    CDStruct_823dd0e8 _has;
}

@property(nonatomic) unsigned int age; // @synthesize age=_age;
@property(nonatomic) unsigned long long scanTimestamp; // @synthesize scanTimestamp=_scanTimestamp;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *macId; // @synthesize macId=_macId;
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
@property(nonatomic) _Bool hasAge;
@property(nonatomic) _Bool hasScanTimestamp;
@property(nonatomic) _Bool hasChannel;
@property(nonatomic) _Bool hasRssi;
@property(readonly, nonatomic) _Bool hasMacId;
- (id)initWithGEOWifiAccessPoint:(id)arg1;

@end

