//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistant/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <SetupAssistant/SUNetworkObserver-Protocol.h>

@class AKAppleIDAuthenticationContext, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, SUNetworkObserver>
{
    AKAppleIDAuthenticationContext *_authContext;
    _Bool _shouldRetrySilentLoginUpgrade;
    long long _silentLoginUpgradeRetryCount;
}

+ (_Bool)isSettingUpMultiUser;
+ (_Bool)isMultiUser;
+ (id)delegateBundleIDsForManagedAccount;
+ (id)sharedManager;
@property(nonatomic) long long silentLoginUpgradeRetryCount; // @synthesize silentLoginUpgradeRetryCount=_silentLoginUpgradeRetryCount;
@property(nonatomic) _Bool shouldRetrySilentLoginUpgrade; // @synthesize shouldRetrySilentLoginUpgrade=_shouldRetrySilentLoginUpgrade;
- (void).cxx_destruct;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)writeAccountConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)_languageConfigurationDictionary;
- (void)_upgradeShortLivedTokenCompletion:(CDUnknownBlockType)arg1;
- (void)_createAppleAccountWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)recoverEMCSWithCompletion:(CDUnknownBlockType)arg1;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_runSilentLoginUpgradeWithCompletion:(CDUnknownBlockType)arg1;
- (void)switchToLoginWindowDueToError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)needsToUpgradeShortLivedToken;
- (void)ingestManagedBuddyData;
- (void)postUserSwitchContextHasBeenUsed;
@property(readonly, nonatomic) _Bool passwordChangeFlowNeedsToRun;
@property(readonly, copy, nonatomic) NSString *shortLivedToken;
- (void)userSwitchContextHasBeenUsed;
- (_Bool)isLoginUser;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

