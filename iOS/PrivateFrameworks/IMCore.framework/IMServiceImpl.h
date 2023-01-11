//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMAccount, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface IMServiceImpl
{
    NSString *_name;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSMutableDictionary *_cardMap;
    NSDictionary *_personToIDMap;
    NSString *_countryCode;
    IMAccount *_bestAccount;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProps;
    NSDictionary *_defaultSettings;
    NSData *_imageData;
    NSArray *_abProperties;
    NSArray *_emailDomains;
    NSArray *_siblingServiceNames;
    unsigned int _screenNameSensitivity;
    _Bool _hasLoadedServiceProperties;
    _Bool _handlesChatInvites;
    _Bool _supportsSMS;
    _Bool _supportsPhoneNumberMapping;
    _Bool _supportsGroupAttachments;
    _Bool _supportsMutatingGroupMembers;
    _Bool _supportsOneSessionForAllAccounts;
    _Bool _supportsAuthorization;
    _Bool _supportsRegistration;
    _Bool _supportsAdding;
    _Bool _supportsPresence;
    _Bool _supportsIDStatusLookup;
    _Bool _supportsDatabaseStorage;
    _Bool _supportsAudioMessages;
    _Bool _shouldInternationalizeNumbers;
    _Bool _supportsOfflineTransfers;
    _Bool _shouldDisableDeactivation;
    _Bool _ignoresNetworkConnectivity;
    _Bool _isPersistent;
    _Bool _isPlugInService;
    _Bool _allowsMultipleConnections;
}

+ (_Bool)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long *)arg2;
+ (_Bool)systemSupportsSMSSending;
+ (id)supportedCountryCodes;
+ (_Bool)iMessageEnabled;
+ (_Bool)mmsEnabled;
+ (_Bool)smsEnabled;
+ (_Bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;
+ (_Bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2;
+ (_Bool)hasAlias:(id)arg1 onAccountForService:(id)arg2;
+ (_Bool)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)operationalServicesWithCapability:(unsigned long long)arg1;
+ (id)connectedServicesWithCapability:(unsigned long long)arg1;
+ (id)servicesWithCapability:(unsigned long long)arg1;
+ (id)connectedServices;
+ (id)activeServices;
+ (id)serviceWithInternalName:(id)arg1;
+ (id)serviceWithName:(id)arg1;
+ (id)allServicesNonBlocking;
+ (id)allServices;
+ (void)setServiceClass:(Class)arg1;
+ (Class)serviceClass;
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_localizedShortName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *emailDomains; // @synthesize emailDomains=_emailDomains;
@property(readonly, nonatomic) NSArray *addressBookProperties; // @synthesize addressBookProperties=_abProperties;
@property(readonly, nonatomic) unsigned int IDSensitivity; // @synthesize IDSensitivity=_screenNameSensitivity;
@property(readonly, nonatomic) _Bool shouldDisableDeactivation; // @synthesize shouldDisableDeactivation=_shouldDisableDeactivation;
@property(readonly, nonatomic) _Bool allowsMultipleConnections; // @synthesize allowsMultipleConnections=_allowsMultipleConnections;
@property(readonly, nonatomic) _Bool isPlugInService; // @synthesize isPlugInService=_isPlugInService;
@property(readonly, nonatomic) _Bool supportsAdding; // @synthesize supportsAdding=_supportsAdding;
@property(readonly, nonatomic) _Bool supportsGroupAttachments; // @synthesize supportsGroupAttachments=_supportsGroupAttachments;
@property(readonly, nonatomic) _Bool supportsOneSessionForAllAccounts; // @synthesize supportsOneSessionForAllAccounts=_supportsOneSessionForAllAccounts;
@property(readonly, nonatomic) _Bool supportsMutatingGroupMembers; // @synthesize supportsMutatingGroupMembers=_supportsMutatingGroupMembers;
@property(readonly, nonatomic) _Bool supportsPresence; // @synthesize supportsPresence=_supportsPresence;
@property(readonly, nonatomic) _Bool supportsOfflineTransfers; // @synthesize supportsOfflineTransfers=_supportsOfflineTransfers;
@property(readonly, nonatomic) _Bool ignoresNetworkConnectivity; // @synthesize ignoresNetworkConnectivity=_ignoresNetworkConnectivity;
@property(readonly, nonatomic) _Bool supportsRegistration; // @synthesize supportsRegistration=_supportsRegistration;
@property(readonly, nonatomic) _Bool handlesChatInvites; // @synthesize handlesChatInvites=_handlesChatInvites;
@property(readonly, nonatomic) _Bool isPersistent; // @synthesize isPersistent=_isPersistent;
@property(readonly, nonatomic) _Bool supportsAuthorization; // @synthesize supportsAuthorization=_supportsAuthorization;
@property(readonly, nonatomic) _Bool supportsPhoneNumberMapping; // @synthesize supportsPhoneNumberMapping=_supportsPhoneNumberMapping;
@property(readonly, nonatomic) _Bool supportsAudioMessages; // @synthesize supportsAudioMessages=_supportsAudioMessages;
@property(readonly, nonatomic) _Bool supportsIDStatusLookup; // @synthesize supportsIDStatusLookup=_supportsIDStatusLookup;
@property(retain, nonatomic) NSDictionary *defaultAccountSettings; // @synthesize defaultAccountSettings=_defaultSettings;
@property(retain, nonatomic) NSDictionary *serviceDefaults; // @synthesize serviceDefaults=_serviceDefaults;
- (void).cxx_destruct;
@property(readonly, nonatomic) Class accountClass;
- (void)activeAccountsChanged:(id)arg1;
- (void)defaultsChanged:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (id)_personToIDMap;
- (id)peopleWithScreenName:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 options:(unsigned long long)arg2;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 identifier:(int *)arg2;
- (id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int *)arg3;
@property(readonly, nonatomic) NSDictionary *cardMap;
- (void)clearIDToCardMap;
@property(retain, nonatomic) NSString *countryCode;
- (void)updateIDToCardMapWithNotification:(id)arg1;
- (id)_newIDToCardMap;
- (void)_dumpCardMap;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSArray *accountIDs;
@property(readonly, nonatomic) long long buddyNotesMaxByteLength;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) NSArray *siblingServices;
@property(readonly, nonatomic) NSString *addressBookProperty;
- (id)localizedShortName;
- (id)localizedName;
@property(readonly, nonatomic) _Bool _wantsInternationizedNumbers;
@property(readonly, nonatomic) _Bool _supportsDatabaseStorage;
- (_Bool)isEnabled;
@property(readonly, nonatomic) long long maxAttachmentSize;
- (long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2;
@property(readonly, nonatomic) NSData *serviceImageData;
- (id)subtypeInformationForAccount:(id)arg1;
@property(retain, nonatomic) NSDictionary *serviceProperties;
- (void)_loadPropertiesIfNeeded;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (id)myScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForAllScreenNames;
- (id)infoForScreenName:(id)arg1;
- (unsigned long long)status;
- (void)_blockUntilInitialSyncPerformed;
- (long long)compareNames:(id)arg1;
- (id)canonicalFormOfID:(id)arg1;
- (id)normalizedFormOfID:(id)arg1;
- (_Bool)equalID:(id)arg1 andID:(id)arg2;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)disconnect;
- (void)doneSetup;
- (_Bool)initialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_syncWithRemoteBuddies;
- (void)dealloc;
- (id)initWithName:(id)arg1;
@property(readonly, nonatomic, getter=isDiscontinued) _Bool discontinued;

@end

