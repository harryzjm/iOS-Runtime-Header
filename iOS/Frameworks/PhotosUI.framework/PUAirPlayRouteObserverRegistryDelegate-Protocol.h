//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAirPlayRouteObserverRegistry;
@protocol PHAirPlayControllerRouteObserver;

@protocol PUAirPlayRouteObserverRegistryDelegate <NSObject>
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(PUAirPlayRouteObserverRegistry *)arg1 forRouteObserver:(id <PHAirPlayControllerRouteObserver>)arg2;
@end

