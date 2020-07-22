//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, SSURLConnectionRequest;
@protocol OS_dispatch_queue;

@interface RadioGetFeaturedStationsRequest
{
    NSObject<OS_dispatch_queue> *_artworkQueue;
    SSURLConnectionRequest *_request;
    unsigned int _stationCount;
    _Bool _disableArtworkLoading;
    _Bool _disableCachedResponses;
}

@property(nonatomic) _Bool disableCachedResponses; // @synthesize disableCachedResponses=_disableCachedResponses;
@property(nonatomic) _Bool disableArtworkLoading; // @synthesize disableArtworkLoading=_disableArtworkLoading;
- (void).cxx_destruct;
- (id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id *)arg2;
- (id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(_Bool)arg3;
- (void)startWithFeaturedStationsCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithStationCount:(unsigned int)arg1;
- (id)init;

@end

