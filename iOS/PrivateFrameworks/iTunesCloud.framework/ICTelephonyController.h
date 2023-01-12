//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICTelephonyController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_telephonyCallbackQueue;
    NSString *_phoneNumber;
    CoreTelephonyClient *_telephonyClient;
    CTXPCServiceSubscriptionContext *_telephonySubscriptionContext;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_updatePhoneNumberAllowingDidChangeNotification:(_Bool)arg1;
- (id)_telephonySubscriptionContext;
- (id)_telephonyClient;
- (void)_handleActiveSubscriptionsDidChange;
- (_Bool)_ensureTelephonyHandlesAreReady;
- (void)phoneNumberChanged:(id)arg1;
- (void)phoneNumberAvailable:(id)arg1;
- (void)activeSubscriptionsDidChange;
- (_Bool)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSString *IMEI;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberNetworkCode;
@property(readonly, copy, nonatomic) NSString *mobileSubscriberCountryCode;
@property(readonly, copy, nonatomic) NSString *providerName;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

