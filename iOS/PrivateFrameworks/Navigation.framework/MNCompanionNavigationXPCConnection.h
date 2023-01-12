//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOCompanionRouteDetails, GEOCompanionRouteStatus, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface MNCompanionNavigationXPCConnection : NSObject
{
    NSXPCConnection *_connection;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
}

- (void).cxx_destruct;
- (void)updateNavigationRouteWithUpdate:(id)arg1;
- (void)updateNavigationRouteStatus:(id)arg1;
- (void)updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2;
- (void)_resendRouteDetailsAndStatus;
- (void)_closeConnection;
- (void)_connectionWasInvalidated;
- (void)_connectionWasInterrupted;
- (void)_openConnection;
- (void)_stop;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

