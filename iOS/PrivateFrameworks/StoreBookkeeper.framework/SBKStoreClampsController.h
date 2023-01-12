//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKStoreClampsController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_transactionClamps;
    double _accountIdentifierCheckTimestamp;
    double _authenticationNeededTimestamp;
    double _userAcceptedSyncTimestamp;
    double _networkingBlockedUntil;
    double _backOffUntil;
    double _userCancelledSignInBackOffUntil;
    double _nextUserCancelBackOffInterval;
    NSData *_pendingUserDefaultArchivedData;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedClampsController;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property(nonatomic) double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property(nonatomic) double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property(nonatomic) double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property(nonatomic) double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property(nonatomic) double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property(nonatomic) double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property(nonatomic) double accountIdentifierCheckTimestamp; // @synthesize accountIdentifierCheckTimestamp=_accountIdentifierCheckTimestamp;
@property(retain, nonatomic) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;
- (id)_keyForTransaction:(id)arg1;
- (double)_rightNow;
- (_Bool)isNetworkingBlocked;
- (void)clearNetworkingBlocked;
- (void)setNetworkingBlocked;
- (void)clearBackOff;
- (void)backOffForTimeInterval:(double)arg1;
- (void)clearUserCancelledSignIn;
- (void)setUserCancelledSignIn;
- (_Bool)hasUserRecentlyAcceptedSync;
- (void)clearUserAcceptedSyncTimestamp;
- (void)setUserAcceptedSyncTimestamp;
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;
- (void)clearAuthenticationRequest;
- (void)setAuthenticationRequest;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)setAccountIdentifierCheckTimestamp;
- (void)clearTimestampForTransaction:(id)arg1;
- (void)setTimestampForTransaction:(id)arg1;
- (void)reset;
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;
- (void)saveToUserDefaults;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

