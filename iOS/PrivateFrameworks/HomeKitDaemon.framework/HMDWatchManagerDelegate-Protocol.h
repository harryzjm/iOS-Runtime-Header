//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, HMDWatchManager;

@protocol HMDWatchManagerDelegate <NSObject>

@optional
- (void)watchManager:(HMDWatchManager *)arg1 didRemoveConnectedWatch:(HMDDevice *)arg2;
- (void)watchManager:(HMDWatchManager *)arg1 didAddConnectedWatch:(HMDDevice *)arg2;
@end
