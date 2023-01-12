//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServicesCore/ACMonitoredAccountStoreDelegateProtocol-Protocol.h>

@class ACMonitoredAccountStore, NSString, OTClique;
@protocol OS_dispatch_queue;

@interface ASFeatureManager : NSObject <ACMonitoredAccountStoreDelegateProtocol>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    ACMonitoredAccountStore *_accountStore;
    OTClique *_keychainClique;
    NSString *_primaryAppleAccountAltDSID;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)accountCredentialChanged:(id)arg1;
- (void)accountWasModified:(id)arg1;
- (void)accountWasRemoved:(id)arg1;
- (void)accountWasAdded:(id)arg1;
- (void)_updateKeychainSyncingStatusOnInternalQueue;
- (void)_updateAccountOnInternalQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
