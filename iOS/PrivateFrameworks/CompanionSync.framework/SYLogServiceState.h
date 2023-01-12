//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSDictionary, NSMutableArray, NSString, SYLogDeviceState, SYLogEngineState, SYLogSessionState;

__attribute__((visibility("hidden")))
@interface SYLogServiceState : PBCodable
{
    SYLogEngineState *_engine;
    int _enqueuedSyncType;
    NSString *_name;
    NSString *_peerGenerationID;
    NSString *_peerID;
    int _serviceType;
    SYLogSessionState *_session;
    SYLogDeviceState *_targetedDevice;
    NSMutableArray *_transportOptions;
    _Bool _sessionQueueRunning;
    struct {
        unsigned int serviceType:1;
    } _has;
}

+ (Class)transportOptionsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *peerGenerationID; // @synthesize peerGenerationID=_peerGenerationID;
@property(retain, nonatomic) NSString *peerID; // @synthesize peerID=_peerID;
@property(retain, nonatomic) NSMutableArray *transportOptions; // @synthesize transportOptions=_transportOptions;
@property(nonatomic) int enqueuedSyncType; // @synthesize enqueuedSyncType=_enqueuedSyncType;
@property(retain, nonatomic) SYLogDeviceState *targetedDevice; // @synthesize targetedDevice=_targetedDevice;
@property(nonatomic) _Bool sessionQueueRunning; // @synthesize sessionQueueRunning=_sessionQueueRunning;
@property(retain, nonatomic) SYLogSessionState *session; // @synthesize session=_session;
@property(retain, nonatomic) SYLogEngineState *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsServiceType:(id)arg1;
- (id)serviceTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasServiceType;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) _Bool hasPeerGenerationID;
@property(readonly, nonatomic) _Bool hasPeerID;
- (id)transportOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transportOptionsCount;
- (void)addTransportOptions:(id)arg1;
- (void)clearTransportOptions;
- (int)StringAsEnqueuedSyncType:(id)arg1;
- (id)enqueuedSyncTypeAsString:(int)arg1;
@property(readonly, nonatomic) _Bool hasTargetedDevice;
@property(readonly, nonatomic) _Bool hasSession;
@property(readonly, nonatomic) _Bool hasEngine;
@property(retain, nonatomic) NSDictionary *cocoaTransportOptions;

@end

