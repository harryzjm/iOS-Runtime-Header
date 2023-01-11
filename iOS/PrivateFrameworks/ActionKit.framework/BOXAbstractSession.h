//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BOXAPIQueueManager, BOXURLSessionManager, BOXUserMini, NSDate, NSString;

@interface BOXAbstractSession : NSObject
{
    _Bool _credentialsPersistenceEnabled;
    BOXAPIQueueManager *_queueManager;
    BOXURLSessionManager *_urlSessionManager;
    NSString *_accessToken;
    NSDate *_accessTokenExpiration;
    NSString *_userAgentPrefix;
    BOXUserMini *_user;
}

+ (id)usersInKeychain;
+ (void)revokeAllCredentials;
+ (id)keychainItemWrapperForUserWithID:(id)arg1;
+ (id)userIDFromKeychainIdentifier:(id)arg1;
+ (id)keychainIdentifierForUserWithID:(id)arg1;
+ (id)keychainAccessGroup;
+ (void)setKeychainAccessGroup:(id)arg1;
+ (id)keychainIdentifierPrefix;
+ (void)setKeychainIdentifierPrefix:(id)arg1;
@property(retain, nonatomic) BOXUserMini *user; // @synthesize user=_user;
@property(nonatomic) NSString *userAgentPrefix; // @synthesize userAgentPrefix=_userAgentPrefix;
@property(nonatomic) _Bool credentialsPersistenceEnabled; // @synthesize credentialsPersistenceEnabled=_credentialsPersistenceEnabled;
@property(retain, nonatomic) NSDate *accessTokenExpiration; // @synthesize accessTokenExpiration=_accessTokenExpiration;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) BOXURLSessionManager *urlSessionManager; // @synthesize urlSessionManager=_urlSessionManager;
@property(nonatomic) __weak BOXAPIQueueManager *queueManager; // @synthesize queueManager=_queueManager;
- (void).cxx_destruct;
- (void)prepareRequest:(id)arg1;
- (void)clearCurrentSessionWithUserID:(id)arg1;
- (void)restoreSessionWithKeyChainDictionary:(id)arg1;
- (id)keychainDictionary;
- (void)revokeCredentials;
- (void)restoreCredentialsFromKeychainForUserWithID:(id)arg1;
- (void)storeCredentialsToKeychain;
- (void)addAuthorizationParametersToRequest:(id)arg1;
- (_Bool)isAuthorized;
- (void)reassignTokensFromSession:(id)arg1;
- (void)performRefreshTokenGrant:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)performAuthorizationCodeGrantWithReceivedURL:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithQueueManager:(id)arg1 urlSessionManager:(id)arg2;
- (id)init;

@end
