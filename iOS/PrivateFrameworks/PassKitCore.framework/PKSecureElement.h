//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSLock, NSNumber, NSString, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKSecureElement : NSObject
{
    _Bool _deletingAllApplets;
    NSObject<OS_dispatch_source> *_deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsTimerConcurrentQueue;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsPropertyConcurrentQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    CDUnknownBlockType _secureElementSessionPrelude;
    CDUnknownBlockType _secureElementSessionPostlude;
    NSHashTable *_observers;
    NSLock *_observersLock;
    _Bool _registeredForHardwareUpdates;
}

+ (id)secureElementIdentifiers;
+ (id)primarySecureElementIdentifier;
+ (_Bool)isInFailForward;
+ (_Bool)hardwareSupportsExpressMode:(id)arg1;
+ (_Bool)supportsExpressMode:(id)arg1 byHardware:(_Bool *)arg2;
+ (_Bool)supportsExpressMode:(id)arg1;
+ (_Bool)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
+ (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
+ (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 byHardware:(_Bool *)arg2;
+ (id)sharedSecureElement;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *ownerUserUUID;
@property(readonly, nonatomic) NSArray *secureElementIdentifiers;
@property(readonly, nonatomic) NSString *primarySecureElementIdentifier;
@property(readonly, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property(readonly, nonatomic) NSString *primaryRegionTopic;
@property(readonly, nonatomic) unsigned long long hardwareVersion;
@property(readonly, nonatomic) unsigned long long supportedTechnologies;
@property(readonly, nonatomic) _Bool isDeletingAllApplets;
@property(readonly, nonatomic) _Bool isInRestrictedMode;
@property(readonly, nonatomic) _Bool isProductionSigned;
@property(readonly, nonatomic) _Bool isOwnable;
@property(copy, nonatomic) CDUnknownBlockType secureElementSessionPostlude;
@property(copy, nonatomic) CDUnknownBlockType secureElementSessionPrelude;
- (_Bool)setOwnerUserUUID:(id)arg1 keybagUUID:(id)arg2;
- (unsigned long long)ownershipStateForUserUUID:(id)arg1;
- (_Bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)peerPaymentEnrollmentDataWithAlternateDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)connectToServerWithPushTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)queueConnectionToSeverForAppletIdentifiers:(id)arg1;
- (_Bool)queueConnectionToSeverWithPushTopic:(id)arg1;
- (void)signedPlatformDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)stateInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)appletWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allAppletsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2;
- (_Bool)hasRegistrationInformation;
- (void)pairingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)SEPPairingInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeSecureElementQueuingServerConnection:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateHardwareManagerListener;
- (void)contactlessPaymentPassesAvailableDidChange;
- (void)dealloc;
- (id)init;

@end

