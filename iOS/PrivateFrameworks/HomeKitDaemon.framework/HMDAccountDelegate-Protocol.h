//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAccount, HMDDevice;

@protocol HMDAccountDelegate <NSObject>
- (void)account:(HMDAccount *)arg1 didUpdateDevice:(HMDDevice *)arg2;
- (void)account:(HMDAccount *)arg1 didRemoveDevice:(HMDDevice *)arg2;
- (void)account:(HMDAccount *)arg1 didAddDevice:(HMDDevice *)arg2;
@end
