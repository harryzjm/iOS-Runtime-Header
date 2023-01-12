//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray, NSString, SYLogErrorInfo;

__attribute__((visibility("hidden")))
@interface SYLogSessionState : PBCodable
{
    double _fullSessionTimeout;
    unsigned long long _maxConcurrentMessages;
    double _perMessageTimeout;
    SYLogErrorInfo *_error;
    NSString *_identifier;
    NSMutableArray *_peers;
    NSString *_reason;
    int _state;
    NSMutableArray *_transportOptions;
    _Bool _canRestart;
    _Bool _canRollback;
    _Bool _canceled;
    _Bool _isReset;
    _Bool _isSending;
    struct {
        unsigned int fullSessionTimeout:1;
        unsigned int perMessageTimeout:1;
        unsigned int canRestart:1;
        unsigned int canRollback:1;
        unsigned int canceled:1;
        unsigned int isReset:1;
    } _has;
}

+ (Class)peerType;
+ (Class)transportOptionsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSMutableArray *peers; // @synthesize peers=_peers;
@property(retain, nonatomic) NSMutableArray *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) _Bool canRollback; // @synthesize canRollback=_canRollback;
@property(nonatomic) _Bool canRestart; // @synthesize canRestart=_canRestart;
@property(retain, nonatomic) SYLogErrorInfo *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long maxConcurrentMessages; // @synthesize maxConcurrentMessages=_maxConcurrentMessages;
@property(nonatomic) double fullSessionTimeout; // @synthesize fullSessionTimeout=_fullSessionTimeout;
@property(nonatomic) double perMessageTimeout; // @synthesize perMessageTimeout=_perMessageTimeout;
@property(nonatomic) _Bool isReset; // @synthesize isReset=_isReset;
@property(nonatomic) _Bool isSending; // @synthesize isSending=_isSending;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasReason;
- (id)peerAtIndex:(unsigned long long)arg1;
- (unsigned long long)peersCount;
- (void)addPeer:(id)arg1;
- (void)clearPeers;
- (id)transportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transportOptionsCount;
- (void)addTransportOptions:(id)arg1;
- (void)clearTransportOptions;
@property(nonatomic) _Bool hasCanceled;
@property(nonatomic) _Bool hasCanRollback;
@property(nonatomic) _Bool hasCanRestart;
@property(readonly, nonatomic) _Bool hasError;
@property(nonatomic) _Bool hasFullSessionTimeout;
@property(nonatomic) _Bool hasPerMessageTimeout;
@property(nonatomic) _Bool hasIsReset;
- (int)StringAsState:(id)arg1;
- (id)stateAsString:(int)arg1;
@property(retain, nonatomic) NSDictionary *cocoaTransportOptions;

@end

