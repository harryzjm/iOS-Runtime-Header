//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class NSString;

@protocol GKAccountService <NSObject>
- (oneway void)notifyWidgetPlayerAuthenticationUpdated;
- (oneway void)getLastContactsIntegrationConsentVersionDisplayedForSignedInPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setLastContactsIntegrationConsentVersionDisplayedForSignedInPlayer:(NSString *)arg1;
- (oneway void)getLastFriendSuggestionsVersionDisplayedForSignedInPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setLastFriendSuggestionsVersionDisplayedForSignedInPlayer:(NSString *)arg1;
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(NSString *)arg1;
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(NSString *)arg1;
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;
- (oneway void)getLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayerWithHandler:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)setLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;
- (oneway void)resetCredentialsWithHandler:(void (^)(NSError *))arg1;
- (oneway void)signOutPlayerWithOptOut:(_Bool)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)authenticationWasCancelled;
- (oneway void)fetchItemsForIdentityVerificationSignature:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(void (^)(GKAuthenticateResponse *, NSError *))arg1;
@end

