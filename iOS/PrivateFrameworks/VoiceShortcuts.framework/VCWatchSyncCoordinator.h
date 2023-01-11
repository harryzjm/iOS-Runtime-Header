//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/PSYSyncCoordinatorDelegate-Protocol.h>
#import <VoiceShortcuts/VCCompanionSyncServiceDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, PSYServiceSyncSession, PSYSyncCoordinator;
@protocol OS_dispatch_queue;

@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate>
{
    int _pairedDeviceDidChangeNotificationToken;
    PSYSyncCoordinator *_psySyncCoordinator;
    PSYServiceSyncSession *_psySyncSession;
    NSArray *_syncDataHandlers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_syncServiceByPairingID;
    NSMutableDictionary *_pairedDeviceByPairingID;
}

+ (void)initialize;
@property(readonly, nonatomic) NSMutableDictionary *pairedDeviceByPairingID; // @synthesize pairedDeviceByPairingID=_pairedDeviceByPairingID;
@property(readonly, nonatomic) NSMutableDictionary *syncServiceByPairingID; // @synthesize syncServiceByPairingID=_syncServiceByPairingID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) NSArray *syncDataHandlers; // @synthesize syncDataHandlers=_syncDataHandlers;
@property(retain, nonatomic) PSYServiceSyncSession *psySyncSession; // @synthesize psySyncSession=_psySyncSession;
@property(readonly, nonatomic) PSYSyncCoordinator *psySyncCoordinator; // @synthesize psySyncCoordinator=_psySyncCoordinator;
- (void).cxx_destruct;
- (void)companionSyncServiceDidFinishSyncSession:(id)arg1;
- (void)handleDidUnpairNotification:(id)arg1;
- (void)handleDidPairNotification:(id)arg1;
- (void)handleDidBecomeInactiveNotification:(id)arg1;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)unsubscribeFromNanoRegistryNotifications;
- (void)subscribeToNanoRegistryNotifications;
- (void)notifyPairedSyncThatSyncFinished;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)stopCompanionSyncServiceForPairingID:(id)arg1;
- (void)actuallyStartSyncServiceForActivePairedDevice:(id)arg1;
- (_Bool)shouldSyncWithActivePairedDevice:(id)arg1;
- (void)startSyncToActivePairedDeviceIfAvailable;
- (_Bool)isRunningOnWatch;
- (void)start;
- (void)dealloc;
- (id)initWithSyncDataHandlers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

