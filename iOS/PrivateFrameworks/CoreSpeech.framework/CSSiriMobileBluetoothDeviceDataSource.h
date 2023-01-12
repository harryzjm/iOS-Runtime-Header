//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/AFInvalidating-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSSiriMobileBluetoothDeviceDataSource : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    struct BTSessionImpl *_session;
    struct BTLocalDeviceImpl *_localDevice;
    struct BTAccessoryManagerImpl *_accessoryManager;
    _Bool _attachingToSession;
    NSObject<OS_dispatch_group> *_sessionSetupGroup;
    struct os_unfair_lock_s _deviceProxiesLock;
    NSMutableDictionary *_deviceProxiesByAddress;
    NSMutableDictionary *_deviceProxiesByDeviceUID;
}

- (void).cxx_destruct;
- (id)_deviceProxyWithUID:(id)arg1 createsIfAbsent:(_Bool)arg2;
- (id)_deviceProxyWithAddress:(id)arg1 createsIfAbsent:(_Bool)arg2;
- (id)deviceWithUID:(id)arg1;
- (id)deviceWithAddress:(id)arg1;
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)getBTDeviceWithDeviceUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getBTDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_deviceProxies;
- (void)_reloadForDevice:(struct BTDeviceImpl *)arg1;
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)arg1 event:(int)arg2 device:(struct BTDeviceImpl *)arg3 state:(int)arg4;
- (void)_tearDownAccessoryManager;
- (void)_setUpAccessoryManager;
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;
- (void)_tearDownLocalDevice;
- (void)_setUpLocalDevice;
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;
- (void)_attachToSession;
- (void)_detachFromSession;
- (void)_cleanUpDeviceProxies;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
