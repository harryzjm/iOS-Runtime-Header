//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/TURouteControllerXPCServer-Protocol.h>

@class NSDictionary;
@protocol TURouteControllerClient;

@protocol TURouteControllerActions <TURouteControllerXPCServer>
@property(readonly, nonatomic) NSDictionary *routesByUniqueIdentifier;
@property(retain, nonatomic) id <TURouteControllerClient> routeControllerClient;
@end

