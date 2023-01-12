//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StocksUI/NSObject-Protocol.h>

@class ACAccount, NFPromise, NSArray, NSString;
@protocol FCAppleAccountObserver;

@protocol FCAppleAccount <NSObject>
- (void)removeObserver:(id <FCAppleAccountObserver>)arg1;
- (void)addObserver:(id <FCAppleAccountObserver>)arg1;
- (_Bool)isPrimaryAccountEmailAddress;
- (NSString *)currentStoreFrontID;
- (void)invalidateGSTokenCache;
- (NFPromise *)getGSToken;
- (void)getGSTokenWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
- (void)checkAllDevicesRunningMinimumiOSVersion:(CDStruct_912cb5d2)arg1 macOSVersion:(CDStruct_912cb5d2)arg2 orInactiveForTimeInterval:(double)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(CDStruct_912cb5d2)arg1 orInactiveForTimeInterval:(double)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)loadStoreFrontWithCompletionHandler:(void (^)(void))arg1;
- (NSString *)iCloudAccountDSID;
- (NSString *)iTunesAccountDSID;
- (NSString *)iTunesAccountName;
- (_Bool)isUserSignedIntoiTunes;
@property(nonatomic, readonly) NSArray *allEmailAddresses;
@property(nonatomic, readonly) NSString *appStoreEmailAddress;
@property(nonatomic, readonly) NSString *primaryEmailAddress;
@property(nonatomic, readonly) ACAccount *activeiTunesAccount;
@property(nonatomic, readonly) NSString *endpointConnectionClientID;
- (_Bool)isUserSignedInToiCloud;
- (_Bool)isPrivateDataSyncingEnabled;
@property(nonatomic, readonly) NSString *supportedContentStoreFrontID;
@property(nonatomic, readonly) _Bool isSignedInStoreFrontSupported;
@property(nonatomic, readonly) _Bool isContentStoreFrontSupported;
@property(nonatomic, readonly) long long supportedContentLanguage;
@property(nonatomic, readonly) NSString *primaryLanguageCode;
@property(nonatomic, readonly) NSString *contentStoreFrontID;
@property(nonatomic, readonly) NSString *userStoreFrontID;
@property(nonatomic, readonly) NSString *DSID;

// Remaining properties
@property(nonatomic, readonly) _Bool privateDataSyncingEnabled;
@property(nonatomic, readonly) _Bool userSignedInToiCloud;
@end

