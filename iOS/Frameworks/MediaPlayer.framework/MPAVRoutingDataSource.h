//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPAVRoutingDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _devicePresenceDetected;
    long long _discoveryMode;
}

@property(readonly, nonatomic) _Bool devicePresenceDetected; // @synthesize devicePresenceDetected=_devicePresenceDetected;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
- (void).cxx_destruct;
- (void)_superclassUnregisterNotifications;
- (void)_superclassRegisterNotifications;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unpickAirPlayAVRoutesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getPickedRouteHasVolumeControlWithCompletion:(CDUnknownBlockType)arg1;
- (void)getExternalScreenTypeWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

