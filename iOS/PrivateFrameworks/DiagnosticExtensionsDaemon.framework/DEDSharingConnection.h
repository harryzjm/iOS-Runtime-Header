//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DEDController, DEDSharingInbound, NSMutableDictionary, NSMutableSet, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log;

@interface DEDSharingConnection : NSObject
{
    _Bool _listenForClients;
    _Bool _started;
    DEDSharingInbound *_inbound;
    DEDController *_controller;
    NSMutableDictionary *_pongingDevices;
    NSMutableDictionary *_deviceSessions;
    NSMutableDictionary *_discoveredDevices;
    NSObject<OS_dispatch_queue> *_run_queue;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_semaphore> *_bluetoothSessionSemaphore;
    SFService *_pingService;
    SFDeviceDiscovery *_pingDiscovery;
    NSMutableSet *_visiblePingUUIDs;
    SFService *_workerService;
    SFDeviceDiscovery *_pongDiscovery;
    CDUnknownBlockType _deviceStatusCallback;
}

+ (void)checkIn;
@property(copy) CDUnknownBlockType deviceStatusCallback; // @synthesize deviceStatusCallback=_deviceStatusCallback;
@property(retain, nonatomic) SFDeviceDiscovery *pongDiscovery; // @synthesize pongDiscovery=_pongDiscovery;
@property(retain, nonatomic) SFService *workerService; // @synthesize workerService=_workerService;
@property(retain) NSMutableSet *visiblePingUUIDs; // @synthesize visiblePingUUIDs=_visiblePingUUIDs;
@property(retain, nonatomic) SFDeviceDiscovery *pingDiscovery; // @synthesize pingDiscovery=_pingDiscovery;
@property(retain, nonatomic) SFService *pingService; // @synthesize pingService=_pingService;
@property(retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore; // @synthesize bluetoothSessionSemaphore=_bluetoothSessionSemaphore;
@property(retain) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain) NSObject<OS_dispatch_queue> *run_queue; // @synthesize run_queue=_run_queue;
@property(retain) NSMutableDictionary *discoveredDevices; // @synthesize discoveredDevices=_discoveredDevices;
@property(retain) NSMutableDictionary *deviceSessions; // @synthesize deviceSessions=_deviceSessions;
@property(retain) NSMutableDictionary *pongingDevices; // @synthesize pongingDevices=_pongingDevices;
@property _Bool started; // @synthesize started=_started;
@property _Bool listenForClients; // @synthesize listenForClients=_listenForClients;
@property __weak DEDController *controller; // @synthesize controller=_controller;
@property(retain) DEDSharingInbound *inbound; // @synthesize inbound=_inbound;
- (void).cxx_destruct;
- (void)addIncomingSFSession:(id)arg1 forIdentifier:(id)arg2;
- (void)stopSession:(id)arg1;
- (void)_verifyPairingForSession:(id)arg1 holdForPIN:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createSharingSessionForSFDevice:(id)arg1 holdForPIN:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)blockingSharingSessionForDevice:(id)arg1;
- (id)_existingSharingSessionForDevice:(id)arg1;
- (void)_configureService:(id)arg1 withLabel:(id)arg2 needsSetup:(_Bool)arg3 actionType:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_distanceWithinRange:(long long)arg1;
- (void)_saveDevice:(id)arg1;
- (void)updateControllerWithDevice:(id)arg1 andStatus:(long long)arg2;
- (void)didStartBugSessionWithInfo:(id)arg1 forCaller:(id)arg2;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (id)sharingOutboundForBugSessionIdentifier:(id)arg1 device:(id)arg2;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)startPairSetupForDevice:(id)arg1;
- (void)checkReadinessForSFDevice:(id)arg1 session:(id)arg2;
- (void)getSystemInfoForDevice:(id)arg1;
- (void)trySessionWithFoundDevice:(id)arg1;
- (void)stopPongDiscovery;
- (void)startPongDiscovery;
- (void)stopPingDiscovery;
- (void)startPingDiscovery;
- (void)startWorkerService;
- (void)stopPongAdvertisement;
- (void)startPongAdvertisement;
- (void)updatePongAdvertisement;
- (void)stopPingService;
- (void)startPingServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopDiscovery;
- (void)discoverDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDeviceDiscoveryCallback:(CDUnknownBlockType)arg1;
- (void)start;
- (void)configureListenForClients:(_Bool)arg1;
- (void)configureSharingInbound:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

