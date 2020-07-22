//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccount, HMDAccountRegistry, HMDDevice;

@protocol HMDAccountRegistryDelegate <NSObject>
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didUpdateCurrentDevice:(HMDDevice *)arg2;
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didRemoveAccount:(HMDAccount *)arg2;
- (void)accountRegistry:(HMDAccountRegistry *)arg1 didAddAccount:(HMDAccount *)arg2;
@end
