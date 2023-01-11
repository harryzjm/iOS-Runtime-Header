//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _action;
    int _failureReason;
    int _stage;
    _Bool _retryExpected;
    _Bool _success;
    struct {
        unsigned int timestamp:1;
        unsigned int action:1;
        unsigned int failureReason:1;
        unsigned int stage:1;
        unsigned int retryExpected:1;
        unsigned int success:1;
    } _has;
}

@property(nonatomic) _Bool retryExpected; // @synthesize retryExpected=_retryExpected;
@property(nonatomic) _Bool success; // @synthesize success=_success;
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
@property(nonatomic) _Bool hasRetryExpected;
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
- (int)StringAsStage:(id)arg1;
- (id)stageAsString:(int)arg1;
@property(nonatomic) _Bool hasStage;
@property(nonatomic) int stage; // @synthesize stage=_stage;
- (int)StringAsFailureReason:(id)arg1;
- (id)failureReasonAsString:(int)arg1;
@property(nonatomic) _Bool hasFailureReason;
@property(nonatomic) int failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasTimestamp;

@end
