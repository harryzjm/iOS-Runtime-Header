//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HealthKit)
+ (_Bool)hk_assignError:(id *)arg1 nilArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
+ (_Bool)hk_assignError:(id *)arg1 invalidArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)hk_transactionInterruptedError;
+ (id)hk_databaseSchemaRolledBackError;
+ (id)hk_healthStoreUnavailableError;
+ (id)hk_invalidProfileError;
+ (id)hk_featureUnavailableForProfileError;
+ (id)hk_protectedDataInaccessibilityError;
+ (id)hk_databaseInaccessibleBeforeFirstUnlockError;
+ (id)hk_healthDataUnavailableError;
+ (id)hk_errorForNilArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;
+ (id)hk_error:(long long)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_error:(long long)arg1 userInfo:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(long long)arg1 description:(id)arg2;
+ (id)hk_HTTPErrorWithHTTPStatusCode:(long long)arg1 URLResponse:(id)arg2;
+ (id)hk_HTTPErrorRepresentingResponse:(id)arg1 request:(id)arg2;
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(id *)arg3;
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;
+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;
+ (id)hk_OAuth2_error:(long long)arg1;
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;
- (id)hk_sanitizedErrorForDomain:(id)arg1;
- (id)hk_sanitizedError;
- (id)hk_underlyingErrorWithDomain:(id)arg1;
- (_Bool)hk_isErrorInDomain:(id)arg1 code:(long long)arg2;
- (_Bool)hk_isHFDUnsupportedError;
- (_Bool)hk_isXPCConnectionInterruptedError;
- (_Bool)hk_isXPCConnectionError;
- (_Bool)hk_isCocoaFileExistsError;
- (_Bool)hk_isCocoaNoSuchFileError;
- (_Bool)hk_isUserCanceledError;
- (_Bool)hk_isTimeoutError;
- (_Bool)hk_isStreamFailureError;
- (_Bool)hk_isRequiredAuthorizationError;
- (_Bool)hk_isFeatureDisabledError;
- (_Bool)hk_isInternalFailureError;
- (_Bool)hk_isInvalidArgumentError;
- (_Bool)hk_isAuthorizationNotDeterminedError;
- (_Bool)hk_isAuthorizationDeniedError;
- (_Bool)hk_isServiceDeviceNotFoundError;
- (_Bool)hk_isTransactionInterruptedError;
- (_Bool)hk_isObjectNotFoundError;
- (_Bool)hk_isDuplicateObjectError;
- (_Bool)hk_isDatabaseSchemaRolledBackError;
- (_Bool)hk_isHealthStoreUnavailableError;
- (_Bool)hk_isDatabaseTransactionError;
- (_Bool)hk_isDatabaseAccessibilityError;
- (_Bool)hk_isHealthKitErrorWithCode:(long long)arg1;
- (_Bool)hk_isHealthKitError;
- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;
- (_Bool)hk_OAuth2_isBearerAuthenticationError;
- (_Bool)hk_OAuth2_isAccessDeniedError;
- (_Bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;
- (_Bool)hk_OAuth2_isOAuth2Error;
@end

