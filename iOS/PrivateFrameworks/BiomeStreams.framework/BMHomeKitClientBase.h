//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSDateInterval, NSString;

@interface BMHomeKitClientBase : NSObject <BMStoreData, BMProtoBufWrapper>
{
    int _homeOccupancy;
    NSDateInterval *_dateInterval;
    double _absoluteTimestamp;
    double _duration;
    NSString *_homeUniqueIdentifier;
    NSString *_source;
    NSString *_clientName;
    NSString *_eventCorrelationIdentifier;
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *eventCorrelationIdentifier; // @synthesize eventCorrelationIdentifier=_eventCorrelationIdentifier;
@property(readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(readonly, nonatomic) int homeOccupancy; // @synthesize homeOccupancy=_homeOccupancy;
@property(readonly, copy, nonatomic) NSString *homeUniqueIdentifier; // @synthesize homeUniqueIdentifier=_homeUniqueIdentifier;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (_Bool)isEqual:(id)arg1;
- (id)proto;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)encodeAsProto;
- (id)serialize;
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithDateInterval:(id)arg1 homeUniqueIdentifier:(id)arg2 homeOccupancy:(int)arg3 source:(id)arg4 clientName:(id)arg5 eventCorrelationIdentifier:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
