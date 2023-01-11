//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNTCCSimulation-Protocol.h>

@class CNAuditToken, NSNumber;
@protocol CNTCC><CNTCCSimulation;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation>
{
    CNAuditToken *_auditToken;
    id <CNTCC><CNTCCSimulation> _tccServices;
    Class _entitlementVerifier;
    NSNumber *_authorizationStatusCachedValue;
    NSNumber *_isNotesAccessGrantedCachedValue;
    NSNumber *_isClientFirstOrSecondPartyCachedValue;
}

+ (id)sharedInstance;
+ (id)os_log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue; // @synthesize isClientFirstOrSecondPartyCachedValue=_isClientFirstOrSecondPartyCachedValue;
@property(retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue; // @synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue;
@property(retain, nonatomic) NSNumber *authorizationStatusCachedValue; // @synthesize authorizationStatusCachedValue=_authorizationStatusCachedValue;
@property(retain, nonatomic) Class entitlementVerifier; // @synthesize entitlementVerifier=_entitlementVerifier;
@property(retain, nonatomic) id <CNTCC><CNTCCSimulation> tccServices; // @synthesize tccServices=_tccServices;
@property(retain, nonatomic) CNAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (long long)resolveRequestAuthorizationFuture:(id)arg1;
- (id)requestAuthorizationFuture:(long long)arg1;
- (_Bool)isAccessGrantedRequestingAccessIfNeeded;
- (id)checkIsFirstPartyOrSecondPartyOrContactsSPIEntitled;
- (_Bool)checkIsClientNotesEntitled;
- (_Bool)checkIsClientTCCWhitelisted;
- (id)checkIfNotesAccessGranted;
- (void)checkAndUpdateAuthorizationStatusIfUnknown;
- (void)stopSimulation;
- (void)simulateStatus:(long long)arg1;
- (id)errorForStatus:(long long)arg1;
- (void)requestAuthorization:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)requestAccessWithError:(id *)arg1;
@property(readonly, nonatomic) _Bool isClientFirstOrSecondParty;
@property(readonly, nonatomic) _Bool isClientTCCWhitelisted;
@property(readonly, nonatomic) _Bool isAccessRestricted;
@property(readonly, nonatomic) _Bool isNotesAccessGranted;
@property(readonly, nonatomic) _Bool isAccess2Granted;
@property(readonly, nonatomic) _Bool isAccess1Granted;
@property(readonly, nonatomic) _Bool isAccessGranted;
@property(readonly, nonatomic) long long authorizationStatus;
- (id)initWithCNAuditToken:(id)arg1 tccServices:(id)arg2 entitlementVerifier:(Class)arg3;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;
- (id)init;

@end
