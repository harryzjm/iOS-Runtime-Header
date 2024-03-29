//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitMultiUserSettingsValueByKeyPath : PBCodable
{
    long long _homeKitMultiUserSettingsValueInteger;
    NSData *_homeKitMultiUserSettingsValueData;
    NSString *_homeKitMultiUserSettingsValueString;
    int _type;
    struct {
        unsigned int homeKitMultiUserSettingsValueInteger:1;
        unsigned int type:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *homeKitMultiUserSettingsValueData; // @synthesize homeKitMultiUserSettingsValueData=_homeKitMultiUserSettingsValueData;
@property(nonatomic) long long homeKitMultiUserSettingsValueInteger; // @synthesize homeKitMultiUserSettingsValueInteger=_homeKitMultiUserSettingsValueInteger;
@property(retain, nonatomic) NSString *homeKitMultiUserSettingsValueString; // @synthesize homeKitMultiUserSettingsValueString=_homeKitMultiUserSettingsValueString;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasHomeKitMultiUserSettingsValueData;
@property(nonatomic) _Bool hasHomeKitMultiUserSettingsValueInteger;
@property(readonly, nonatomic) _Bool hasHomeKitMultiUserSettingsValueString;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

