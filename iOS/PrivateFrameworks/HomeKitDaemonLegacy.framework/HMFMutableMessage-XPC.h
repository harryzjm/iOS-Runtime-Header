//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFMutableMessage.h>

@class HMDBackingStoreTransactionActions, HMDRemoteMessageSenderContext, NSString;

@interface HMFMutableMessage (XPC)
+ (id)internalMessageWithName:(id)arg1 destination:(id)arg2 messagePayload:(id)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
+ (id)internalMessageWithName:(id)arg1 messagePayload:(id)arg2;
- (void)setRequiresWalletKeyEntitlement;
- (void)setSendPolicy:(id)arg1;
- (void)setRequiresPersonManagerEntitlement;
- (void)setRequiresMultiUserSetupEntitlement;
- (void)setRequiresCameraClipsEntitlement;
- (void)setRequiresMatterSetupPayloadEntitlement;
- (void)setRequiresSetupPayloadEntitlement;
@property(nonatomic) _Bool requiresNoSPIEntitlement;
- (void)setRequiresNoSPIEntitlement;
@property(nonatomic) _Bool requiresSPIEntitlement;
- (void)setRequiresSPIEntitlement;
@property(retain) HMDBackingStoreTransactionActions *transactionResult;
@property(nonatomic, getter=isInternal) _Bool internal;
@property(retain, nonatomic) HMDRemoteMessageSenderContext *remoteSenderContext;
- (void)setRemoteResponseRestriction:(unsigned long long)arg1;
@property(nonatomic) unsigned long long remoteRestriction;
@property(retain, nonatomic) NSString *remoteToID;
@property(retain, nonatomic) NSString *remoteSourceID;
@property(nonatomic, getter=isSecureRemote) _Bool secureRemote;
@property(nonatomic, getter=isRemote) _Bool remote;
@end

