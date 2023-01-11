//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber, NSString;

@interface MCEASAccountPayload
{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    _Bool _syncDefaultFoldersOnly;
    NSNumber *_enableMailNum;
    NSNumber *_enableContactsNum;
    NSNumber *_enableCalendarsNum;
    NSNumber *_enableRemindersNum;
    NSNumber *_enableNotesNum;
    NSNumber *_enableMailUserOverridableNum;
    NSNumber *_enableContactsUserOverridableNum;
    NSNumber *_enableCalendarsUserOverridableNum;
    NSNumber *_enableRemindersUserOverridableNum;
    NSNumber *_enableNotesUserOverridableNum;
    _Bool _overridePreviousPassword;
    NSString *_acAccountIdentifier;
    NSNumber *_useSSL;
    NSNumber *_useOAuth;
    NSString *_OAuthSignInURL;
    NSString *_OAuthTokenRequestURL;
    NSDictionary *_communicationServiceRules;
    NSNumber *_syncDefaultFoldersOnlyNum;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *syncDefaultFoldersOnlyNum; // @synthesize syncDefaultFoldersOnlyNum=_syncDefaultFoldersOnlyNum;
@property(readonly, nonatomic) _Bool overridePreviousPassword; // @synthesize overridePreviousPassword=_overridePreviousPassword;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(retain, nonatomic) NSString *OAuthTokenRequestURL; // @synthesize OAuthTokenRequestURL=_OAuthTokenRequestURL;
@property(retain, nonatomic) NSString *OAuthSignInURL; // @synthesize OAuthSignInURL=_OAuthSignInURL;
@property(retain, nonatomic) NSNumber *useOAuth; // @synthesize useOAuth=_useOAuth;
@property(retain, nonatomic) NSNumber *useSSL; // @synthesize useSSL=_useSSL;
@property(retain, nonatomic) NSString *acAccountIdentifier; // @synthesize acAccountIdentifier=_acAccountIdentifier;
@property(nonatomic) _Bool syncDefaultFoldersOnly; // @synthesize syncDefaultFoldersOnly=_syncDefaultFoldersOnly;
@property(retain, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property(readonly, retain, nonatomic) NSString *certificateUUID; // @synthesize certificateUUID=_certificateUUID;
@property(copy, nonatomic) NSString *embeddedCertificatePassword; // @synthesize embeddedCertificatePassword=_embeddedCertificatePassword;
@property(readonly, retain, nonatomic) NSString *embeddedCertificateName; // @synthesize embeddedCertificateName=_embeddedCertificateName;
@property(readonly, retain, nonatomic) NSData *embeddedCertificate; // @synthesize embeddedCertificate=_embeddedCertificate;
@property(readonly, retain, nonatomic) NSNumber *mailNumberOfPastDaysToSync; // @synthesize mailNumberOfPastDaysToSync=_mailNumberOfPastDaysToSync;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (_Bool)containsSensitiveUserInformation;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)restrictions;
- (id)stubDictionary;
- (id)verboseDescription;
@property(readonly, nonatomic) _Bool enableNotesUserOverridable;
@property(readonly, nonatomic) _Bool enableRemindersUserOverridable;
@property(readonly, nonatomic) _Bool enableCalendarsUserOverridable;
@property(readonly, nonatomic) _Bool enableContactsUserOverridable;
@property(readonly, nonatomic) _Bool enableMailUserOverridable;
@property(readonly, nonatomic) _Bool enableNotes;
@property(readonly, nonatomic) _Bool enableReminders;
@property(readonly, nonatomic) _Bool enableCalendars;
@property(readonly, nonatomic) _Bool enableContacts;
@property(readonly, nonatomic) _Bool enableMail;
@property(readonly, nonatomic) _Bool hasCertificate;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)mailAccountIdentifiers;

@end
