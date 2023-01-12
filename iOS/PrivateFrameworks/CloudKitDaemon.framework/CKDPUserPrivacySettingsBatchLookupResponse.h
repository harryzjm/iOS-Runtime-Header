//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable
{
    NSMutableArray *_containerPrivacySettings;
}

+ (Class)containerPrivacySettingsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)arg1;
- (unsigned long long)containerPrivacySettingsCount;
- (void)addContainerPrivacySettings:(id)arg1;
- (void)clearContainerPrivacySettings;

@end

