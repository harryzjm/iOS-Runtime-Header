//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSIDSSyncEngineSynchronizing-Protocol.h>
#import <DoNotDisturbServer/DNDSKeybagStateObserver-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncServiceDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSSysdiagnoseDataProvider-Protocol.h>

@class DNDSPairedDevice, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol DNDSIDSSyncEngineMetadataStoring, DNDSKeybagStateProviding, DNDSSyncService, OS_dispatch_queue, OS_dispatch_source;

@interface DNDSIDSSyncEngine : NSObject <DNDSSyncServiceDelegate, DNDSKeybagStateObserver, DNDSSysdiagnoseDataProvider, DNDSIDSSyncEngineSynchronizing>
{
    NSMapTable *_sourcesByZone;
    id <DNDSSyncService> _syncService;
    DNDSPairedDevice *_pairedDevice;
    unsigned long long _syncState;
    id <DNDSIDSSyncEngineMetadataStoring> _metadataStore;
    id <DNDSKeybagStateProviding> _keybag;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_inflightExpirationTimer;
    unsigned long long _retriesAvailable;
    unsigned long long _inflightExpirationTime;
    NSMutableDictionary *_inflightMetadataByRequestIdentifier;
    NSMutableDictionary *_inflightDateByRequestIdentifier;
    NSMutableSet *_inflightMetadata;
    unsigned long long _role;
    CDUnknownBlockType _didReceiveUnlockMessage;
    CDUnknownBlockType _didFireMetadataExpirationTimer;
}

- (void).cxx_destruct;
- (void)_queue_validate;
- (void)_queue_handleReplaceMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleUpdateMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleUnlockMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleAckMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleResyncMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_handleMessage:(id)arg1 fromPairedDeviceIdentifier:(id)arg2;
- (void)_queue_removeAllInflightMetadataWithExpirationDate:(id)arg1;
- (void)_queue_removeAllInflightMetadata;
- (_Bool)_queue_cancelInflightExpirationTimer;
- (void)_queue_startInflightExpirationTimer;
- (void)_queue_restartInflightExpirationTimer;
- (double)_queue_earliestExpirationTimeSinceNowForInflightMetadata;
- (_Bool)_queue_cancelRetryTimer;
- (void)_queue_resetRetryTimer;
- (void)_queue_startRetryTimer;
- (void)_queue_sendModifiedRecordIDs:(id)arg1 deletedRecordIDs:(id)arg2 toDeviceWithIdentifier:(id)arg3;
- (void)_queue_sendResyncMessageToDeviceWithIdentifier:(id)arg1;
- (void)_queue_sendUnlockMessageToDeviceWithIdentifier:(id)arg1;
- (void)_queue_sendAckWithMetadata:(id)arg1 forAction:(id)arg2 toDeviceWithIdentifier:(id)arg3;
- (void)_queue_syncDataSourcesToDeviceWithIdentifier:(id)arg1;
- (id)_queue_dataSourceForZone:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (void)syncService:(id)arg1 didSendWithRequestIdentifier:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (_Bool)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;
- (void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 messageType:(id)arg4 fromDeviceIdentifier:(id)arg5;
- (id)inflightMetadata;
- (void)sync;
- (void)validate;
@property(readonly, nonatomic) unsigned long long pairSyncState;
- (void)setDidFireMetadataExpirationTimer:(CDUnknownBlockType)arg1;
- (void)setDidReceiveUnlockMessage:(CDUnknownBlockType)arg1;
- (void)setPairedDevice:(id)arg1 syncEnabled:(_Bool)arg2;
- (void)setDataSource:(id)arg1 forZone:(id)arg2;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (id)initWithMetadataStore:(id)arg1 syncService:(id)arg2 keybag:(id)arg3 role:(unsigned long long)arg4 syncState:(unsigned long long)arg5 inflightExpirationTime:(unsigned long long)arg6;
- (id)initWithMetadataStore:(id)arg1 syncService:(id)arg2 keybag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
