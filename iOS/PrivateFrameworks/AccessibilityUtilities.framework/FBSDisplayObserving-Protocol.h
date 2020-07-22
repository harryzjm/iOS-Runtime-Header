//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/NSObject-Protocol.h>

@class FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplayMonitor;

@protocol FBSDisplayObserving <NSObject>

@optional
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 willDisconnectIdentity:(FBSDisplayIdentity *)arg2;
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 didUpdateIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
- (void)displayMonitor:(FBSDisplayMonitor *)arg1 didConnectIdentity:(FBSDisplayIdentity *)arg2 withConfiguration:(FBSDisplayConfiguration *)arg3;
@end

