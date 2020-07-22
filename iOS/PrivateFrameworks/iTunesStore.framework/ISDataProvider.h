//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class ISOperation, NSNumber, NSString, NSURL, SSAuthenticationContext, SSBiometricAuthenticationContext, SSURLBagContext;
@protocol ISBiometricSessionDelegate;

@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    ISOperation *_parentOperation;
    NSURL *_redirectURL;
    SSBiometricAuthenticationContext *_biometricAuthenticationContext;
    long long _errorHandlerResponseType;
    id <ISBiometricSessionDelegate> _biometricSessionDelegate;
}

+ (id)provider;
@property id <ISBiometricSessionDelegate> biometricSessionDelegate; // @synthesize biometricSessionDelegate=_biometricSessionDelegate;
@property(retain) SSBiometricAuthenticationContext *biometricAuthenticationContext; // @synthesize biometricAuthenticationContext=_biometricAuthenticationContext;
@property(retain) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property __weak ISOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain) id output; // @synthesize output=_output;
@property long long errorHandlerResponseType; // @synthesize errorHandlerResponseType=_errorHandlerResponseType;
@property(retain) NSString *contentType; // @synthesize contentType=_contentType;
@property long long contentLength; // @synthesize contentLength=_contentLength;
@property(retain) SSURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
@property(retain) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (void).cxx_destruct;
- (_Bool)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;
- (void)_performActionsForButton:(id)arg1 withDialog:(id)arg2;
- (_Bool)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 metricsDictionary:(id)arg3 error:(id *)arg4;
- (_Bool)runTouchIDAuthorizationDialog:(id)arg1 fallbackDialog:(id)arg2 error:(id *)arg3;
- (_Bool)runSubOperation:(id)arg1 error:(id *)arg2;
- (_Bool)runAuthorizationDialog:(id)arg1 error:(id *)arg2;
- (void)setup;
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;
- (long long)streamedBytes;
- (void)resetStream;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (void)streamDidFailWithError:(id)arg1;
- (void)streamCancelled;
- (_Bool)isStreamComplete;
- (_Bool)isStream;
- (void)configureFromProvider:(id)arg1;
- (id)closeStream;
- (_Bool)canStreamContentLength:(long long)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
