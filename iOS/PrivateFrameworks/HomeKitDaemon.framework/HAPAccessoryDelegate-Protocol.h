//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessory;

@protocol HAPAccessoryDelegate <NSObject>

@optional
- (void)accessoryDidBecomeUnreachable:(HAPAccessory *)arg1;
- (void)accessoryDidBecomeReachable:(HAPAccessory *)arg1;
@end

