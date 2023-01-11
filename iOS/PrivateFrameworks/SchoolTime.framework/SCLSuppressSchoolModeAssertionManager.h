//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSXPCListenerDelegate-Protocol.h>
#import <SchoolTime/SCLSuppressSchoolModeAssertionClientDelegate-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface SCLSuppressSchoolModeAssertionManager : NSObject <NSXPCListenerDelegate, SCLSuppressSchoolModeAssertionClientDelegate>
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableSet *_clients;
    NSMutableSet *_acquiredClients;
    NSHashTable *_observers;
    unsigned long long _stateHandle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableSet *acquiredClients; // @synthesize acquiredClients=_acquiredClients;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
- (struct os_state_data_s *)_stateDataWithHints:(struct os_state_hints_s *)arg1;
- (void)performObserverBlock:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) unsigned long long status;
- (void)clientDidInvalidate:(id)arg1;
- (void)clientDidAcquireAssertion:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)activate;
- (void)dealloc;
- (id)initWithTargetQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
