//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEOMapServiceTraits, GEORouteMatch, NSObject;
@protocol GEORoutePreloadSessionDelegate, OS_os_log;

@protocol GEORoutePreloadSession <NSObject>
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
@property(nonatomic) unsigned long long networkQuality;
@property __weak id <GEORoutePreloadSessionDelegate> delegate;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)setTraits:(GEOMapServiceTraits *)arg1;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)tearDown;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)beginLoading;
- (_Bool)loggingEnabled;
- (_Bool)fullDebuggingEnabled;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)isSufficientlyLoaded;
@end

