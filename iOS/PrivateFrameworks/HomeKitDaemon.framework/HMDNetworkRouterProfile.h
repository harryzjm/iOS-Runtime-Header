//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterProfile
{
    unsigned long long _networkStatus;
    unsigned long long _wanStatus;
    long long _routerStatus;
}

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
@property(nonatomic) long long routerStatus; // @synthesize routerStatus=_routerStatus;
@property(nonatomic) unsigned long long wanStatus; // @synthesize wanStatus=_wanStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;
- (void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg1;
- (void)handleAccessoryConfigured:(id)arg1;
- (void)handleCharacteristicsChangedNotification:(id)arg1;
- (void)__handleNetworkAccessViolationUpdate:(id)arg1;
- (void)_updateWANStatus:(unsigned long long)arg1;
- (void)_updateRouterStatus:(long long)arg1;
- (void)__notifyClientsOfNetworkStatus:(unsigned long long)arg1;
- (void)handleInitialState;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)registerForMessages;
- (id)runtimeState;
- (void)dealloc;
- (void)unconfigure;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRouterService:(id)arg1 msgDispatcher:(id)arg2;

@end

