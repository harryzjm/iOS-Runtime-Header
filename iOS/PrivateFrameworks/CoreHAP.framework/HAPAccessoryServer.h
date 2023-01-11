//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HAPAccessory, HAPDeviceID, HMFVersion, NSArray, NSData, NSHashTable, NSNumber, NSObject, NSString;
@protocol HAPAccessoryServerDelegate, HAPKeyStore, OS_dispatch_queue;

@interface HAPAccessoryServer : HMFObject
{
    NSString *_name;
    NSString *_identifier;
    _Bool _hasPairings;
    _Bool _reachable;
    _Bool _securitySessionOpen;
    _Bool _supportsTimedWrite;
    _Bool _bleLinkConnected;
    _Bool _incompatibleUpdate;
    NSNumber *_category;
    unsigned long long _configNumber;
    id <HAPAccessoryServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSData *_setupHash;
    unsigned long long _authMethod;
    HAPAccessory *_primaryAccessory;
    NSArray *_accessories;
    long long _linkType;
    HMFVersion *_version;
    NSHashTable *_internalDelegates;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    id <HAPKeyStore> _keyStore;
    unsigned long long _pairSetupType;
}

+ (_Bool)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2;
@property(nonatomic) unsigned long long pairSetupType; // @synthesize pairSetupType=_pairSetupType;
@property(readonly, nonatomic) __weak id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
@property(nonatomic, getter=isIncompatibleUpdate) _Bool incompatibleUpdate; // @synthesize incompatibleUpdate=_incompatibleUpdate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalDelegateQueue; // @synthesize internalDelegateQueue=_internalDelegateQueue;
@property(readonly, nonatomic) NSHashTable *internalDelegates; // @synthesize internalDelegates=_internalDelegates;
@property(readonly, nonatomic, getter=isBLELinkConnected) _Bool bleLinkConnected; // @synthesize bleLinkConnected=_bleLinkConnected;
@property(copy) HMFVersion *version; // @synthesize version=_version;
@property(nonatomic) _Bool supportsTimedWrite; // @synthesize supportsTimedWrite=_supportsTimedWrite;
@property(readonly, nonatomic) long long linkType; // @synthesize linkType=_linkType;
@property(copy, nonatomic) NSArray *accessories; // @synthesize accessories=_accessories;
@property(retain, nonatomic) HAPAccessory *primaryAccessory; // @synthesize primaryAccessory=_primaryAccessory;
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
- (void).cxx_destruct;
- (void)enumerateInternalDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeInternalDelegate:(id)arg1;
- (void)addInternalDelegate:(id)arg1;
- (_Bool)requiresTimedWrite:(id)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)discoverAccessories;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)stopPairingWithError:(id *)arg1;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)startPairingWithConsentRequired:(_Bool)arg1;
- (void)continuePairingUsingWAC;
- (void)continuePairingAfterAuthPrompt;
- (_Bool)matchesSetupID:(id)arg1;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
- (void)reconfirm;
- (void)notifyDelegateUpdatedCategory:(id)arg1;
@property(copy, nonatomic) NSNumber *category; // @synthesize category=_category;
- (void)notifyDelegateUpdatedName:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long authMethod; // @synthesize authMethod=_authMethod;
@property(copy, nonatomic) NSData *setupHash; // @synthesize setupHash=_setupHash;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) HAPDeviceID *deviceID;
- (void)notifyDelegateUpdatedHasPairings:(_Bool)arg1;
@property(nonatomic) _Bool hasPairings; // @synthesize hasPairings=_hasPairings;
@property(getter=isSecuritySessionOpen) _Bool securitySessionOpen; // @synthesize securitySessionOpen=_securitySessionOpen;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <HAPAccessoryServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithKeystore:(id)arg1;
- (id)init;

@end

