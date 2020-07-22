//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineSettingsClusterView : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _clusterCount;
    int _elsewhereCount;
    NSString *_sessionId;
    struct {
        unsigned int timestamp:1;
        unsigned int clusterCount:1;
        unsigned int elsewhereCount:1;
    } _has;
}

@property(nonatomic) int elsewhereCount; // @synthesize elsewhereCount=_elsewhereCount;
@property(nonatomic) int clusterCount; // @synthesize clusterCount=_clusterCount;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
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
@property(nonatomic) _Bool hasElsewhereCount;
@property(nonatomic) _Bool hasClusterCount;
@property(readonly, nonatomic) _Bool hasSessionId;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

