//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@protocol GEONavXPCInterface
- (void)updateNavigationRouteStatus:(NSData *)arg1 routeContext:(NSData *)arg2;
- (void)updateNavigationRouteDetails:(NSData *)arg1 routeStatus:(NSData *)arg2 routeContext:(NSData *)arg3;
- (void)clearPreviewRoutesWithRouteContext:(NSData *)arg1;
- (void)updatePreviewRoutes:(NSArray *)arg1 expectedNumberOfRoutes:(unsigned long long)arg2 routeContext:(NSData *)arg3;
- (void)anticipatePreviewRoute:(NSData *)arg1 routeContext:(NSData *)arg2;
@end
