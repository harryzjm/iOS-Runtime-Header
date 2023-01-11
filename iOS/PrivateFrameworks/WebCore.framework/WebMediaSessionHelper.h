//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebMediaSessionHelper : NSObject
{
    struct MediaSessionHelperiOS *_callback;
    struct RetainPtr<AVRouteDetector> _routeDetector;
    _Bool _monitoringAirPlayRoutes;
    _Bool _startMonitoringAirPlayRoutesPending;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)carPlayIsConnectedDidChange:(id)arg1;
- (void)mediaServerConnectionDied:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)wirelessRoutesAvailableDidChange:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)stopMonitoringAirPlayRoutes;
- (void)startMonitoringAirPlayRoutes;
- (_Bool)hasWirelessTargetsAvailable;
- (void)clearCallback;
- (void)dealloc;
- (id)initWithCallback:(struct MediaSessionHelperiOS *)arg1;

@end
