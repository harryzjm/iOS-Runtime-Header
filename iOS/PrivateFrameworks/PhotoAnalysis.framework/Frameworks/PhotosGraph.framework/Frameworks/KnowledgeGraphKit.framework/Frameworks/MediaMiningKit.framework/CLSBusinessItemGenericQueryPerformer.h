//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLSQueryPerformerProtocol-Protocol.h>

@class CLSBusinessCategoryCache, NSArray, NSString;
@protocol GEOMapServiceBatchSpatialLookupTicket;

@interface CLSBusinessItemGenericQueryPerformer : NSObject <CLSQueryPerformerProtocol>
{
    _Bool _isCancelled;
    NSArray *_locationGeoParameters;
    id <GEOMapServiceBatchSpatialLookupTicket> _businessGenericTicket;
    NSArray *_regions;
    double _precision;
    CDStruct_dd9df0da _statistics;
}

+ (id)categories;
+ (double)defaultPrecision;
+ (unsigned long long)numberOfRegionsPerBatch;
+ (id)queryWithTemplate:(id)arg1 forRegions:(id)arg2;
@property(nonatomic) double precision; // @synthesize precision=_precision;
@property(nonatomic) CDStruct_dd9df0da statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, copy, nonatomic) NSArray *regions; // @synthesize regions=_regions;
@property(readonly, nonatomic) id <GEOMapServiceBatchSpatialLookupTicket> businessGenericTicket; // @synthesize businessGenericTicket=_businessGenericTicket;
@property(readonly, nonatomic) NSArray *locationGeoParameters; // @synthesize locationGeoParameters=_locationGeoParameters;
- (void).cxx_destruct;
- (void)logAggdGeoLookupFailureResult;
- (void)logAggdGeoLookupCounterAndDurationWithLookupDuration:(id)arg1;
@property(readonly, nonatomic) CLSBusinessCategoryCache *cache;
- (unsigned long long)cacheItems:(id)arg1;
- (_Bool)shouldQueryItemsForRegion:(id)arg1 selectedRegions:(id)arg2;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithRegions:(id)arg1 categories:(id)arg2 precision:(double)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
