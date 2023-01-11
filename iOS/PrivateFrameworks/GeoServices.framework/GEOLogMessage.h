//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMessage : PBCodable <NSCopying>
{
    unsigned int _groupRetryCount;
    int _logMessageType;
    NSMutableArray *_logMsgEvents;
    struct {
        unsigned int groupRetryCount:1;
        unsigned int logMessageType:1;
    } _has;
}

+ (Class)logMsgEventType;
+ (id)allowedSessionTypes;
+ (id)disallowedStatesForLogMsgEvent:(id)arg1 logMessage:(id)arg2;
+ (_Bool)disallowedStateWithStateType:(int)arg1 logMsgEvent:(id)arg2 logMessage:(id)arg3;
+ (_Bool)allowApplicationStatesForLogMsgEvent:(id)arg1;
+ (_Bool)supportsCohortSessionForLogMsgEvent:(id)arg1;
+ (id)logMessagesForEvent:(id)arg1;
+ (_Bool)logMessageType:(int)arg1 acceptsLogMsgEventType:(int)arg2;
+ (id)acceptedLogMsgEventsForLogMessageType:(int)arg1;
+ (id)acceptedLogMsgEvents;
@property(retain, nonatomic) NSMutableArray *logMsgEvents; // @synthesize logMsgEvents=_logMsgEvents;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsLogMessageType:(id)arg1;
- (id)logMessageTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLogMessageType;
@property(nonatomic) int logMessageType; // @synthesize logMessageType=_logMessageType;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;
- (unsigned long long)logMsgEventsCount;
- (void)addLogMsgEvent:(id)arg1;
- (void)clearLogMsgEvents;
@property(nonatomic) _Bool hasGroupRetryCount;
@property(nonatomic) unsigned int groupRetryCount;
- (void)removeUnsupportedStatesFromEvent;
- (_Bool)isFullExperimentsStateAllowed;
- (_Bool)isFullCarPlayStateAllowed;
- (_Bool)isNavigationSessionAllowed;
- (_Bool)isStateAllowed:(id)arg1;
- (unsigned long long)allowedSessionType;
- (unsigned int)groupItemIdHash;
- (long long)groupItemQueuedTime;
- (unsigned int)groupItemCount;
- (unsigned int)groupSequenceNumber;
- (id)groupIdentifier;
- (_Bool)acceptsLogMsgEvent:(id)arg1;

@end

