//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebUI/NSObject-Protocol.h>

@class MCProfileConnection, NSDictionary;

@protocol MCProfileConnectionObserver <NSObject>

@optional
- (void)profileConnectionDidReceiveAppWhitelistChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveDefaultsChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceivePasscodePolicyChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(MCProfileConnection *)arg1 userInfo:(NSDictionary *)arg2;
@end

