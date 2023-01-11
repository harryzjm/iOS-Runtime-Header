//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSServiceMonitor-Protocol.h>

@class BSServiceManager, NSDictionary, NSMutableSet, NSString;
@protocol BSInvalidatable, BSServiceConnectionEndpointMonitorDelegate;

@interface BSServiceConnectionEndpointMonitor : NSObject <BSServiceMonitor, BSInvalidatable>
{
    BSServiceManager *_manager;
    struct os_unfair_lock_s _lock;
    id <BSServiceConnectionEndpointMonitorDelegate> _lock_delegate;
    NSDictionary *_lock_endpointToEnvironments;
    NSMutableSet *_lock_serialCallOut_endpoints;
    _Bool _lock_activated;
    _Bool _lock_invalidated;
    struct os_unfair_lock_s _registrationLock;
    id <BSInvalidatable> _registrationLock_assertion;
    NSString *_service;
}

+ (id)monitorForService:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, copy) NSString *description;
- (void)serialCallOut_didUpdateEndpointEnvironments:(id)arg1;
- (id)endpointsForEnvironment:(id)arg1;
- (void)invalidate;
- (void)activate;
@property(retain, nonatomic) id <BSServiceConnectionEndpointMonitorDelegate> delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
