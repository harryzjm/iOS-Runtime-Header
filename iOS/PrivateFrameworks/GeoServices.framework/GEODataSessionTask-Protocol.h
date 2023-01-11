//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOClientMetrics, NSData, NSError, NSString;
@protocol GEORequestCounterTicket, NSObject;

@protocol GEODataSessionTask <NSObject>
@property(readonly, nonatomic) id <NSObject> parsedResponse;
@property(readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property(readonly, nonatomic) id <GEORequestCounterTicket> requestCounterTicket;
@property(readonly) _Bool failedDueToCancel;
@property(readonly, nonatomic) unsigned int taskIdentifier;
@property(readonly, nonatomic) unsigned long long incomingPayloadSize;
@property(readonly, nonatomic) unsigned long long outgoingPayloadSize;
@property(readonly, nonatomic) _Bool protocolBufferHasPreamble;
@property(readonly, nonatomic) NSString *remoteAddressAndPort;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSData *receivedData;
- (void)cancel;
- (void)start;
@end

