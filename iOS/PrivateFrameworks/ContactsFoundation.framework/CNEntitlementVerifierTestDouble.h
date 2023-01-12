//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNEntitlementVerification-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNEntitlementVerifierTestDouble : NSObject <CNEntitlementVerification>
{
    NSMutableDictionary *_entitlements;
}

+ (id)keyForEntitlement:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;
+ (id)keyForEntitlement:(id)arg1;
- (void).cxx_destruct;
- (_Bool)auditToken:(CDStruct_4c969caf)arg1 isFirstOrSecondPartyWithError:(id *)arg2;
- (_Bool)auditToken:(CDStruct_4c969caf)arg1 hasBooleanEntitlement:(id)arg2 error:(id *)arg3;
- (_Bool)currentProcessHasBooleanEntitlement:(id)arg1 error:(id *)arg2;
- (void)setAuditToken:(CDStruct_4c969caf)arg1 isFirstOrSecondPartyError:(id)arg2;
- (void)setAuditToken:(CDStruct_4c969caf)arg1 isFirstOrSecondParty:(_Bool)arg2;
- (void)setAuditToken:(CDStruct_4c969caf)arg1 hasError:(id)arg2 forEntitlement:(id)arg3;
- (void)setAuditToken:(CDStruct_4c969caf)arg1 hasBooleanValue:(_Bool)arg2 forEntitlement:(id)arg3;
- (void)setCurrentProcessHasError:(id)arg1 forEntitlement:(id)arg2;
- (void)setCurrentProcessHasBooleanValue:(_Bool)arg1 forEntitlement:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
