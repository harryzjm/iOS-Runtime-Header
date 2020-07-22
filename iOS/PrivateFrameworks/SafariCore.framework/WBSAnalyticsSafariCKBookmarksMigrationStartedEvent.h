//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariCKBookmarksMigrationStartedEvent : PBCodable <NSCopying>
{
    long long _localState;
    long long _remoteState;
    unsigned long long _timestamp;
    int _migratorType;
    struct {
        unsigned int localState:1;
        unsigned int remoteState:1;
        unsigned int timestamp:1;
        unsigned int migratorType:1;
    } _has;
}

@property(nonatomic) long long remoteState; // @synthesize remoteState=_remoteState;
@property(nonatomic) long long localState; // @synthesize localState=_localState;
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
@property(nonatomic) _Bool hasRemoteState;
@property(nonatomic) _Bool hasLocalState;
- (int)StringAsMigratorType:(id)arg1;
- (id)migratorTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMigratorType;
@property(nonatomic) int migratorType; // @synthesize migratorType=_migratorType;
@property(nonatomic) _Bool hasTimestamp;

@end
