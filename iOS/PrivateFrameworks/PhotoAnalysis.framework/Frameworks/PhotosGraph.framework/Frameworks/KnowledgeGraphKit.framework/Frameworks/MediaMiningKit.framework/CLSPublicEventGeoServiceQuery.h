//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString;
@protocol GEOMapServiceSpatialEventLookupTicket, OS_dispatch_queue;

@interface CLSPublicEventGeoServiceQuery : NSObject <CLSQueryProtocol>
{
    _Bool _isCancelled;
    NSArray *_timeLocationTuples;
    double _radius;
    NSDictionary *_parametersByTimeLocationTupleIdentifier;
    id <GEOMapServiceSpatialEventLookupTicket> _ticket;
    NSDictionary *_resolvedPublicEventsForTimeLocationTuples;
    NSDictionary *_invalidationTokens;
    NSObject<OS_dispatch_queue> *_geoQueue;
}

+ (unsigned long long)maximumBatchSize;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *geoQueue; // @synthesize geoQueue=_geoQueue;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(retain, nonatomic) NSDictionary *invalidationTokens; // @synthesize invalidationTokens=_invalidationTokens;
@property(retain, nonatomic) NSDictionary *resolvedPublicEventsForTimeLocationTuples; // @synthesize resolvedPublicEventsForTimeLocationTuples=_resolvedPublicEventsForTimeLocationTuples;
@property(readonly, nonatomic) id <GEOMapServiceSpatialEventLookupTicket> ticket; // @synthesize ticket=_ticket;
@property(readonly, nonatomic) NSDictionary *parametersByTimeLocationTupleIdentifier; // @synthesize parametersByTimeLocationTupleIdentifier=_parametersByTimeLocationTupleIdentifier;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) NSArray *timeLocationTuples; // @synthesize timeLocationTuples=_timeLocationTuples;
- (void).cxx_destruct;
- (id)_parametersByTimeLocationTupleIdentifierForTimeLocationTuples:(id)arg1;
- (id)_publicEventsForGeoEvent:(id)arg1 matchingParameters:(id)arg2;
- (void)prepareForRetry;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithTimeLocationTuples:(id)arg1 radius:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
