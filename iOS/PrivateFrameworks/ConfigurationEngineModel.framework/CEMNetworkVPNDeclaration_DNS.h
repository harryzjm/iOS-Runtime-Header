//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString;

@interface CEMNetworkVPNDeclaration_DNS
{
    NSArray *_payloadServerAddresses;
    NSArray *_payloadSearchDomains;
    NSString *_payloadDomainName;
    NSArray *_payloadSupplementalMatchDomains;
    NSNumber *_payloadSupplementalMatchDomainsNoSearch;
}

+ (id)buildRequiredOnlyWithServerAddresses:(id)arg1;
+ (id)buildWithServerAddresses:(id)arg1 withSearchDomains:(id)arg2 withDomainName:(id)arg3 withSupplementalMatchDomains:(id)arg4 withSupplementalMatchDomainsNoSearch:(id)arg5;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadSupplementalMatchDomainsNoSearch; // @synthesize payloadSupplementalMatchDomainsNoSearch=_payloadSupplementalMatchDomainsNoSearch;
@property(copy, nonatomic) NSArray *payloadSupplementalMatchDomains; // @synthesize payloadSupplementalMatchDomains=_payloadSupplementalMatchDomains;
@property(copy, nonatomic) NSString *payloadDomainName; // @synthesize payloadDomainName=_payloadDomainName;
@property(copy, nonatomic) NSArray *payloadSearchDomains; // @synthesize payloadSearchDomains=_payloadSearchDomains;
@property(copy, nonatomic) NSArray *payloadServerAddresses; // @synthesize payloadServerAddresses=_payloadServerAddresses;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end
