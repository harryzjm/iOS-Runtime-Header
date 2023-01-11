//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDHealthStoreProviderServer-Protocol.h>

@class NSString;

@interface HDHealthStoreProviderServer <HDHealthStoreProviderServer>
{
}

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_requestAuthorizationToNewIdentifierToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_requestAuthorizationToNewIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchAvailableIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)clientMayAccessProfile:(id)arg1;
- (id)profileManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
