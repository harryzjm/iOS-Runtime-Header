//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDPushTopicPolicyChange : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _change;
    unsigned int _didCauseFilterChange;
    NSString *_guid;
    NSString *_topic;
    struct {
        unsigned int timestamp:1;
        unsigned int change:1;
        unsigned int didCauseFilterChange:1;
    } _has;
}

@property(nonatomic) unsigned int didCauseFilterChange; // @synthesize didCauseFilterChange=_didCauseFilterChange;
@property(nonatomic) unsigned int change; // @synthesize change=_change;
@property(retain, nonatomic) NSString *topic; // @synthesize topic=_topic;
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
@property(nonatomic) _Bool hasDidCauseFilterChange;
@property(nonatomic) _Bool hasChange;
@property(readonly, nonatomic) _Bool hasTopic;
@property(readonly, nonatomic) _Bool hasGuid;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

