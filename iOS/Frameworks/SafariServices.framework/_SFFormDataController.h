//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/WBUFormDataController.h>

#import <SafariServices/_SFAuthenticationContextDelegate-Protocol.h>

@class NSString, _SFAuthenticationContext, _SFAutoFillAuthenticationCache;

@interface _SFFormDataController : WBUFormDataController <_SFAuthenticationContextDelegate>
{
    _SFAutoFillAuthenticationCache *_autoFillAuthenticationCache;
    _SFAuthenticationContext *_autoFillAuthenticationContext;
}

+ (id)sharedController;
@property(readonly, nonatomic) _SFAuthenticationContext *autoFillAuthenticationContext; // @synthesize autoFillAuthenticationContext=_autoFillAuthenticationContext;
@property(readonly, nonatomic) _SFAutoFillAuthenticationCache *autoFillAuthenticationCache; // @synthesize autoFillAuthenticationCache=_autoFillAuthenticationCache;
- (void).cxx_destruct;
- (double)invalidationTimeoutIfApplicationEntersBackgroundDuringAuthenticationForContext:(id)arg1;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (_Bool)authenticationEnabledForContext:(id)arg1;
- (void)_authenticationContextInvalidated:(id)arg1;
- (id)initWithAggressiveKeychainCaching:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

