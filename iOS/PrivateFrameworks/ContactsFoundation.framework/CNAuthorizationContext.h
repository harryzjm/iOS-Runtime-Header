//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CNAuthorizationContext : NSObject
{
    NSNumber *_number_isFirstParty;
    _Bool _hasAuditToken;
    Class _entitlementVerifierClass;
    CDStruct_4c969caf _auditToken;
}

@property(readonly, nonatomic) Class entitlementVerifierClass; // @synthesize entitlementVerifierClass=_entitlementVerifierClass;
@property(readonly, nonatomic) _Bool hasAuditToken; // @synthesize hasAuditToken=_hasAuditToken;
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isValidatingFirstPartyClient;
- (struct NSNumber *)_isFirstParty;
- (id)initWithEntitlementVerifier:(Class)arg1 isFirstParty:(_Bool)arg2;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

@end
