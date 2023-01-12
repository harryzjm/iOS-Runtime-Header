//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFXPCClient.h"

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SFContinuityScanManager : SFXPCClient
{
    NSMutableSet *_foundDevices;
    NSHashTable *_observers;
    unsigned long long _scanTypes;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property unsigned long long scanTypes; // @synthesize scanTypes=_scanTypes;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableSet *foundDevices; // @synthesize foundDevices=_foundDevices;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)pairedDevicesChanged:(id)arg1;
- (void)lostDeviceWithDevice:(id)arg1;
- (void)foundDeviceWithDevice:(id)arg1;
- (void)receivedAdvertisement:(id)arg1;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionEstablished;
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (void)scanForTypes:(unsigned long long)arg1;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

