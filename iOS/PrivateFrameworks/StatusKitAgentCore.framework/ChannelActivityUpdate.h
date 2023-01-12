//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ChannelActivityUpdate : PBCodable
{
    unsigned long long _currentVersion;
    unsigned long long _prevVersion;
    NSData *_encryptedUpdatePayload;
    struct {
        unsigned int currentVersion:1;
        unsigned int prevVersion:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *encryptedUpdatePayload; // @synthesize encryptedUpdatePayload=_encryptedUpdatePayload;
@property(nonatomic) unsigned long long prevVersion; // @synthesize prevVersion=_prevVersion;
@property(nonatomic) unsigned long long currentVersion; // @synthesize currentVersion=_currentVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEncryptedUpdatePayload;
@property(nonatomic) _Bool hasPrevVersion;
@property(nonatomic) _Bool hasCurrentVersion;

@end

