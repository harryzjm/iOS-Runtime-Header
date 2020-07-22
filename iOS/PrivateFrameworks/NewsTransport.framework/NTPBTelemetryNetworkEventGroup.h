//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying>
{
    int _cellularRadioAccessTechnology;
    int _eventType;
    NSMutableArray *_failures;
    NSString *_respondingPop;
    NSMutableArray *_successes;
    _Bool _wifiReachabilityStatus;
    struct {
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int eventType:1;
        unsigned int wifiReachabilityStatus:1;
    } _has;
}

+ (Class)failuresType;
+ (Class)successesType;
@property(retain, nonatomic) NSMutableArray *failures; // @synthesize failures=_failures;
@property(retain, nonatomic) NSMutableArray *successes; // @synthesize successes=_successes;
@property(retain, nonatomic) NSString *respondingPop; // @synthesize respondingPop=_respondingPop;
@property(nonatomic) _Bool wifiReachabilityStatus; // @synthesize wifiReachabilityStatus=_wifiReachabilityStatus;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)failuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)failuresCount;
- (void)addFailures:(id)arg1;
- (void)clearFailures;
- (id)successesAtIndex:(unsigned long long)arg1;
- (unsigned long long)successesCount;
- (void)addSuccesses:(id)arg1;
- (void)clearSuccesses;
@property(readonly, nonatomic) _Bool hasRespondingPop;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
@property(nonatomic) _Bool hasCellularRadioAccessTechnology;
@property(nonatomic) int cellularRadioAccessTechnology; // @synthesize cellularRadioAccessTechnology=_cellularRadioAccessTechnology;
@property(nonatomic) _Bool hasWifiReachabilityStatus;
@property(nonatomic) _Bool hasEventType;
@property(nonatomic) int eventType; // @synthesize eventType=_eventType;

@end

