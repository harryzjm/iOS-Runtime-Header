//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOMapAssetMetadataFetcher, GEOSPRMetroAvailabilityFetcher, GEOTileKeyList, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEONavRoutePreloadStep : NSObject
{
    CDStruct_2c43369c coord;
    double routeIdx;
    NSMutableDictionary *wantedTiles;
    GEOTileKeyList *assetMetadataTiles;
    double startTime;
    double endTime;
    unsigned int bytesLoadedFromNetwork;
    unsigned int generation;
    int cellularCoverage;
    unsigned int nearManeuver:1;
    unsigned int loading:1;
    unsigned int loaded:1;
    GEOApplicationAuditToken *_auditToken;
    GEOSPRMetroAvailabilityFetcher *_sprMetrosAvailabilityFetcher;
    GEOMapAssetMetadataFetcher *_assetMetadataFetcher;
    unsigned int _errorCount;
    unsigned int _lifetimeErrorCount;
    unsigned char _metrosSupported;
    unsigned long long _parentSignpostID;
    unsigned long long _signpostID;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)_loadTiles:(id)arg1 requireWiFi:(_Bool)arg2 unsuccessfulKeysAccumulator:(id)arg3 errorsAccumulator:(id)arg4 queue:(id)arg5 group:(id)arg6 willLoadHandler:(CDUnknownBlockType)arg7 progressHandler:(CDUnknownBlockType)arg8;
- (void)_loadAssetMetadataRequireWiFi:(_Bool)arg1 unsuccessfulKeysAccumulator:(id)arg2 errorsAccumulator:(id)arg3 queue:(id)arg4 willLoadHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)loadWithCallbackQueue:(id)arg1 requireWiFi:(_Bool)arg2 willLoadHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 finishedHandler:(CDUnknownBlockType)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)encounteredErrors:(id)arg1;
- (double)networkDataRateKB;
- (void)resetErrors;
@property(readonly, nonatomic) _Bool hasLifetimeError;
@property(readonly, nonatomic) _Bool hasError;
- (_Bool)okToLoad;
- (id)description;
- (id)initWithAuditToken:(id)arg1 highZoomMetrosAvailabilityFetcher:(id)arg2 assetMetadataFetcher:(id)arg3 preloaderSignpostID:(unsigned long long)arg4;
- (id)init;

@end
