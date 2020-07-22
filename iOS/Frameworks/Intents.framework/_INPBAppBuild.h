//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBAppId, _INPBBuildId;

@interface _INPBAppBuild : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBAppId *_appId;
    _INPBBuildId *_buildId;
}

@property(retain, nonatomic) _INPBBuildId *buildId; // @synthesize buildId=_buildId;
@property(retain, nonatomic) _INPBAppId *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasBuildId;
@property(readonly, nonatomic) _Bool hasAppId;

@end

