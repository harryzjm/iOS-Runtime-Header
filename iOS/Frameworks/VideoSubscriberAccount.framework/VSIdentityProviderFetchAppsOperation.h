//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, VSAuditToken, VSOptional;

@interface VSIdentityProviderFetchAppsOperation
{
    VSOptional *_identityProviderID;
    VSAuditToken *_auditToken;
    VSOptional *_result;
    NSOperationQueue *_privateQueue;
}

@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) VSOptional *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;

@end

