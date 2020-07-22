//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutineAssetVersion : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _contentVersion;
    struct {
        unsigned int timestamp:1;
        unsigned int contentVersion:1;
    } _has;
}

@property(nonatomic) int contentVersion; // @synthesize contentVersion=_contentVersion;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasContentVersion;
@property(nonatomic) _Bool hasTimestamp;

@end

