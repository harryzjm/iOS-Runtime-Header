//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccountCredentials, DVTDeveloperAccountPortalContext, DVTDeveloperAccountSession, DVTDispatchLock, NSDictionary, NSString, _TtC13DVTFoundation36DVTServicesSessionProviderCredential;
@protocol DVTDeveloperPortalDefaultsProtocol;

@interface DVTDeveloperAccount : NSObject
{
    DVTDispatchLock *_lock;
    _Bool _enabled;
    DVTDeveloperAccountSession *_session;
    DVTDeveloperAccountCredentials *_accountCredentials;
    NSString *_credentialsErrorDescription;
    DVTDeveloperAccountPortalContext *_context;
    NSString *_userDescription;
    NSString *_password;
}

+ (_Bool)isInvalidCredentialsError:(id)arg1;
+ (id)keyPathsForValuesAffectingUserDescriptionOrBestGuess;
+ (id)keyPathsForValuesAffectingHasPassword;
+ (id)keyPathsForValuesAffectingPassword;
+ (id)keyPathsForValuesAffectingSession;
+ (id)accountWithCredentials:(id)arg1;
+ (id)accountWithCredentials:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *userDescription; // @synthesize userDescription=_userDescription;
@property _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) DVTDeveloperAccountPortalContext *context; // @synthesize context=_context;
@property(retain) NSString *credentialsErrorDescription; // @synthesize credentialsErrorDescription=_credentialsErrorDescription;
@property(copy) DVTDeveloperAccountCredentials *accountCredentials; // @synthesize accountCredentials=_accountCredentials;
@property(readonly) _TtC13DVTFoundation36DVTServicesSessionProviderCredential *serializableCredential;
- (void)checkForValidCredentials:(CDUnknownBlockType)arg1;
- (void)validateCredentialsWithCallback:(CDUnknownBlockType)arg1;
@property(readonly) NSDictionary *propertyListRepresentation;
@property(readonly) NSString *userDescriptionOrBestGuess;
@property(readonly) _Bool hasPassword;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy) NSString *username;
- (void)revokeSession:(id)arg1;
- (id)sessionIfAvailable;
@property(readonly) DVTDeveloperAccountSession *session; // @synthesize session=_session;
- (void)executeWithSession:(CDUnknownBlockType)arg1;
- (id)_sessionByLoggingInIfNeededWithinLock:(id *)arg1;
- (id)sessionByLoggingInIfNeeded:(id *)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (id)servicesSessionWithError:(id *)arg1;
@property(readonly, nonatomic) id <DVTDeveloperPortalDefaultsProtocol> sessionDefaults;
- (id)init;
@property(readonly) long long accountType;
- (id)description;

@end

