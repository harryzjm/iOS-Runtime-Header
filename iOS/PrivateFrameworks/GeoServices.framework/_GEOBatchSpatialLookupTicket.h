//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOMapServiceBatchSpatialLookupTicket-Protocol.h>

@class GEOMapServiceTraits, GEOSpatialLookupBatchRequest, GEOSpatialLookupBatchResponse, NSArray, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface _GEOBatchSpatialLookupTicket <GEOMapServiceBatchSpatialLookupTicket>
{
    GEOSpatialLookupBatchRequest *_request;
    GEOSpatialLookupBatchResponse *_response;
    NSArray *_parameters;
    NSMapTable *_parametersToMapItems;
}

- (void).cxx_destruct;
- (CDStruct_d1a7ebee)dataRequestKind;
- (id)mapItemsForParameters:(id)arg1;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2 queue:(id)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1 forParameters:(id)arg2 traits:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end
