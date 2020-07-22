//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RadioStation, SSURLConnectionRequest;

@interface RadioRecentStationsRequest
{
    SSURLConnectionRequest *_request;
    RadioStation *_currentStation;
    NSString *_currentStationStringID;
    _Bool _shouldGroupResponses;
    unsigned long long _stationCount;
}

@property(nonatomic) unsigned long long stationCount; // @synthesize stationCount=_stationCount;
@property(nonatomic) _Bool shouldGroupResponses; // @synthesize shouldGroupResponses=_shouldGroupResponses;
- (void).cxx_destruct;
- (id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id *)arg2;
- (id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1;
- (void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id *)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getCachedRecentStationsResponseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithCurrentStationStringID:(id)arg1;
- (id)initWithCurrentStation:(id)arg1;

@end

