//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HMNetworkConfigurationProfileDelegatePrivate-Protocol.h>

@class NSSet;

@protocol HFNetworkConfigurationObserver <HMNetworkConfigurationProfileDelegatePrivate>

@optional
- (void)profilesDidUpdateAllowedHosts:(NSSet *)arg1;
- (void)profilesDidUpdateNetworkProtectionMode:(NSSet *)arg1;
@end
