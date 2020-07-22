//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDPushFilterChanged : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _changedReason;
    unsigned int _changedTopicsCount;
    NSString *_guid;
    NSString *_topic;
    struct {
        unsigned int timestamp:1;
        unsigned int changedReason:1;
        unsigned int changedTopicsCount:1;
    } _has;
}

@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) unsigned int changedTopicsCount; // @synthesize changedTopicsCount=_changedTopicsCount;
@property(nonatomic) unsigned int changedReason; // @synthesize changedReason=_changedReason;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
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
@property(readonly, nonatomic) _Bool hasTopic;
@property(nonatomic) _Bool hasChangedTopicsCount;
@property(nonatomic) _Bool hasChangedReason;
@property(readonly, nonatomic) _Bool hasGuid;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end
