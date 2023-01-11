//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/EDDeliveryAccount-Protocol.h>

@class ACAccount, NSArray, NSString;

@interface DeliveryAccount <EDDeliveryAccount>
{
}

+ (id)newDefaultInstance;
+ (id)carrierDeliveryAccount;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(_Bool)arg3;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithIdentifier:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (void)removeDeliveryAccount:(id)arg1;
+ (void)addDeliveryAccount:(id)arg1;
+ (id)deliveryAccounts;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (void)reloadDeliveryAccounts;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountTypeIdentifier;
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;
- (_Bool)shouldUseSaveSentForAccount:(id)arg1;
- (_Bool)supportsOutboxCopy;
- (_Bool)hasEnoughInformationForEasySetup;
- (_Bool)canBeFallbackAccount;
- (id)displayHostname;
- (_Bool)hasNoReferences;
- (id)mailAccountIfAvailable;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long maximumMessageBytes;
- (void)_setAccountProperties:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setShouldUseAuthentication:(_Bool)arg1;
- (_Bool)shouldUseAuthentication;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(_Bool)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (Class)deliveryClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *emailAddressStrings;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *hostname;
@property(copy, nonatomic) NSString *password;
@property(readonly, nonatomic) _Bool primaryiCloudAccount;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly) Class superclass;
@property(readonly, nonatomic) ACAccount *systemAccount;

@end
