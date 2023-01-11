//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (FCCKAdditions)
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 descriptionFormat:(id)arg2;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 description:(id)arg2;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1;
+ (id)fc_encryptionRequiredError;
+ (id)fc_secureSubscriptionsDisallowedError;
+ (id)fc_emptyM3UPlaylistError;
+ (id)fc_authUserAccountInvalid;
+ (id)fc_invalidSectionErrorForTagID:(id)arg1;
+ (id)fc_invalidChannelErrorForTagID:(id)arg1;
+ (id)fc_missingANFDocumentErrorForArticleID:(id)arg1;
+ (id)fc_missingAssetKeyError;
+ (id)fc_invalidAVAssetKeyURIError;
+ (id)fc_expiredAVAssetCertificateError;
+ (id)fc_unauthorizedAVAssetCertificateError;
+ (id)fc_unauthorizedAVAssetKeyErrorWithKeyURI:(id)arg1;
+ (id)fc_unauthorizedAssetKeyErrorWithWrappingKeyID:(id)arg1;
+ (id)fc_unzipFailedErrorWithErrorCode:(int)arg1;
+ (id)fc_missingAssetErrorWithAssetHandles:(id)arg1;
+ (id)fc_invalidGapErrorWithUserInfo:(id)arg1;
+ (id)fc_invalidBookmarkErrorWithUserInfo:(id)arg1;
+ (id)fc_missingBridgedGroupError;
+ (id)fc_partialFailureErrorWithUserInfo:(id)arg1;
+ (id)fc_blockedInCurrentStorefrontErrorWithIdentifiers:(id)arg1;
+ (id)fc_operationCancelledErrorWithAdditionalUserInfo:(id)arg1;
+ (id)fc_missingResourceErrorWithDescription:(id)arg1;
+ (id)fc_missingAppConfigErrorWithUnderlyingError:(id)arg1;
+ (id)fc_offlineErrorWithReason:(long long)arg1;
+ (id)fc_canaryDownError;
+ (id)fc_notAvailableError;
+ (id)fc_requestDroppedErrorForDroppedFeeds:(unsigned long long)arg1 totalFeeds:(unsigned long long)arg2;
+ (id)fc_feedDroppedError;
+ (id)fc_belowMinimumVersionError;
+ (id)fc_notCachedError;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
- (id)fc_underlyingCKErrorUserInfoValueForKey:(id)arg1 forItemID:(id)arg2;
- (_Bool)fc_hasCKErrorWithCodePassingTest:(CDUnknownBlockType)arg1;
- (_Bool)fc_isCKErrorWithCodePassingTest:(CDUnknownBlockType)arg1;
- (_Bool)fc_isCKErrorWithCode:(long long)arg1;
- (_Bool)fc_hasIdentityLostError;
- (_Bool)fc_hasIdentityStillSyncingError;
- (_Bool)fc_isTemporaryNetworkOrServerError;
- (_Bool)fc_isMissingZoneError;
- (_Bool)fc_isCKUnknownItemError;
- (_Bool)fc_hasErrorCode:(long long)arg1;
- (id)fc_errorWithMaximumRetryAfter:(double)arg1;
- (_Bool)fc_isAVUnauthorizedError;
- (_Bool)fc_isBlockedInStoreFrontError;
- (_Bool)fc_isUnknownItemError;
- (_Bool)fc_isOfflineErrorOfflineReason:(long long *)arg1;
- (_Bool)fc_isOfflineError;
- (_Bool)fc_isOperationThrottledError;
- (_Bool)fc_isServiceUnavailableError;
- (_Bool)fc_isCancellationError;
- (_Bool)fc_isNetworkUnavailableError;
- (_Bool)fc_shouldRetry;
@end
