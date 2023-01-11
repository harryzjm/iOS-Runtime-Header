//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPAVRoutingDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _devicePresenceDetected;
    long long _discoveryMode;
    long long _filterMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long filterMode; // @synthesize filterMode=_filterMode;
@property(readonly, nonatomic) _Bool devicePresenceDetected; // @synthesize devicePresenceDetected=_devicePresenceDetected;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (void)_superclassUnregisterNotifications;
- (void)_superclassRegisterNotifications;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
@property(readonly, nonatomic) _Bool supportsMultipleSelection;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getRoutesForCategory:(id)arg1;
- (void)unpickAirPlayAVRoutesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPickedRouteHasVolumeControlWithCompletion:(CDUnknownBlockType)arg1;
- (void)getExternalScreenTypeWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
