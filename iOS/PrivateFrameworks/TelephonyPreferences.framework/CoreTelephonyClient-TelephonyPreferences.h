//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreTelephony/CoreTelephonyClient.h>

@class NSString;

@interface CoreTelephonyClient (TelephonyPreferences)
- (id)localizedCarrierBundleStringForKey:(id)arg1 subscription:(id)arg2 error:(id *)arg3;
- (id)carrierBundleForSubscription:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

