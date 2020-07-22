//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAVLegacyRoutingDataSource
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    long long _discoveryMode;
    _Bool _routesDetected;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)_parseAVRouteDescriptions:(id)arg1;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_avSessionMediaServicesResetNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)devicePresenceDetected;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end
