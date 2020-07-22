//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKTransientPassAssertionConnectionDelegate-Protocol.h>
#import <NanoPassKit/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableArray, NSMutableSet, NSString, NSXPCListener;
@protocol NPKTransientPassAssertionServerDelegate, OS_dispatch_queue;

@interface NPKTransientPassAssertionServer : NSObject <NSXPCListenerDelegate, NPKTransientPassAssertionConnectionDelegate>
{
    id <NPKTransientPassAssertionServerDelegate> _delegate;
    NSXPCListener *_xpcListener;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_transientPaymentRequests;
    BKSApplicationStateMonitor *_appStateMonitor;
}

@property(retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor; // @synthesize appStateMonitor=_appStateMonitor;
@property(retain, nonatomic) NSMutableArray *transientPaymentRequests; // @synthesize transientPaymentRequests=_transientPaymentRequests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(nonatomic) __weak id <NPKTransientPassAssertionServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateOfTransientPassChangeToUniqueID:(id)arg1;
- (id)_bundleIDForXPCConnection:(id)arg1;
- (void)_updateAppStateMonitor;
- (void)_handleAppStateChangeWithStateDictionary:(id)arg1;
- (_Bool)_queue_serviceModeRequested;
- (id)_queue_transientPassUniqueID;
- (id)_activeTransientPassRequest;
- (void)getTransientPassUniqueID:(id *)arg1 transitServiceModeRequested:(_Bool *)arg2;
- (_Bool)transitServiceModeRequested;
- (id)transientPassUniqueID;
- (void)connection:(id)arg1 hasNewTransientPassRequest:(id)arg2;
- (void)connectionDied:(id)arg1;
- (void)handleNewConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

