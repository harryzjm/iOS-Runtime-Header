//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCPerAccountVPNPayloadProtocol-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface MCGmailAccountPayload <MCPerAccountVPNPayloadProtocol>
{
    NSString *_VPNUUID;
    NSString *_acAccountIdentifier;
    NSString *_accountDescription;
    NSString *_accountName;
    NSString *_emailAddress;
    NSDictionary *_communicationServiceRules;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(readonly, retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, retain, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
@property(retain, nonatomic) NSString *acAccountIdentifier; // @synthesize acAccountIdentifier=_acAccountIdentifier;
@property(readonly, retain, nonatomic) NSString *VPNUUID; // @synthesize VPNUUID=_VPNUUID;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)restrictions;
- (id)verboseDescription;
- (id)stubDictionary;
- (_Bool)mustInstallNonInteractively;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
@property(readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;

// Remaining properties
@property(readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;
@property(readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;

@end
