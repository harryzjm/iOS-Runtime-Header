//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying>
{
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    NSString *_deviceSettingsLocale;
}

@property(retain, nonatomic) NSString *deviceOutputLocale; // @synthesize deviceOutputLocale=_deviceOutputLocale;
@property(retain, nonatomic) NSString *deviceInputLocale; // @synthesize deviceInputLocale=_deviceInputLocale;
@property(retain, nonatomic) NSString *deviceSettingsLocale; // @synthesize deviceSettingsLocale=_deviceSettingsLocale;
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
@property(readonly, nonatomic) _Bool hasDeviceOutputLocale;
@property(readonly, nonatomic) _Bool hasDeviceInputLocale;
@property(readonly, nonatomic) _Bool hasDeviceSettingsLocale;

@end

