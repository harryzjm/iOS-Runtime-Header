//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CallHistory/NSCopying-Protocol.h>

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _callStatus;
    unsigned int _callType;
    struct {
        unsigned int timestamp:1;
        unsigned int callStatus:1;
        unsigned int callType:1;
    } _has;
}

@property(nonatomic) unsigned int callStatus; // @synthesize callStatus=_callStatus;
@property(nonatomic) unsigned int callType; // @synthesize callType=_callType;
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
@property(nonatomic) _Bool hasCallStatus;
@property(nonatomic) _Bool hasCallType;
@property(nonatomic) _Bool hasTimestamp;

@end

