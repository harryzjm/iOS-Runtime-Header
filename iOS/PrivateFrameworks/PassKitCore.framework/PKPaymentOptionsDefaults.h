//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <PassKitCore/PKPaymentOptionsProtocol-Protocol.h>

@class CNContact, NSDictionary, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsProtocol>
{
    int _defaultsChangedNotifyToken;
    unsigned long long _postedNotificationCount;
    NSDictionary *_defaultBillingAddresses;
    CNContact *_defaultShippingAddress;
    CNContact *_defaultContactName;
    CNContact *_defaultContactEmail;
    CNContact *_defaultContactPhone;
}

+ (id)defaults;
- (void).cxx_destruct;
- (void)migrateToSyncable;
- (void)deleteDefaultForContactKey:(id)arg1;
- (void)deleteAllDefaults;
- (void)deleteDefaultContactName;
@property(retain, nonatomic) CNContact *defaultContactName; // @synthesize defaultContactName=_defaultContactName;
- (void)deleteDefaultContactPhone;
@property(retain, nonatomic) CNContact *defaultContactPhone; // @synthesize defaultContactPhone=_defaultContactPhone;
- (void)deleteDefaultContactEmail;
@property(retain, nonatomic) CNContact *defaultContactEmail; // @synthesize defaultContactEmail=_defaultContactEmail;
- (void)_hardDeleteDefaultBillingAddress;
- (void)deleteDefaultBillingAddress:(id)arg1;
- (void)setDefaultBillingAddress:(id)arg1 forPrimaryAccountIdentifier:(id)arg2;
- (void)setDefaultBillingAddress:(id)arg1 forRemotePaymentInstrument:(id)arg2;
- (void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
- (id)defaultBillingAddressForPrimaryAccountIdentifier:(id)arg1;
- (id)defaultBillingAddressForRemotePaymentInstrument:(id)arg1;
- (id)defaultBillingAddressForPaymentPass:(id)arg1;
- (void)_setRawDefaultBillingAddresses:(id)arg1;
- (id)_rawDefaultBillingAddresses;
@property(readonly, nonatomic) NSDictionary *defaultBillingAddresses; // @synthesize defaultBillingAddresses=_defaultBillingAddresses;
- (void)deleteDefaultShippingAddress;
@property(retain, nonatomic) CNContact *defaultShippingAddress; // @synthesize defaultShippingAddress=_defaultShippingAddress;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_setContact:(id)arg1 forKeychainKey:(id)arg2;
- (void)_setContact:(id)arg1 property:(id)arg2 forKeychainKey:(id)arg3;
- (void)_deleteKeychainDataForKey:(id)arg1;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (id)_keychainDataForKey:(id)arg1;
- (void)_unregisterForChangeNotifications;
- (void)_registerForChangeNotifications;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

