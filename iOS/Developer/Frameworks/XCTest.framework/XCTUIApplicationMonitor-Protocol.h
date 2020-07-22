//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTest/NSObject-Protocol.h>

@class NSNumber, NSString, XCTApplicationStateSnapshot;

@protocol XCTUIApplicationMonitor <NSObject>
- (void)updatedApplicationStateSnapshot:(XCTApplicationStateSnapshot *)arg1;
- (void)applicationWithBundleID:(NSString *)arg1 didUpdatePID:(int)arg2 state:(unsigned long long)arg3;
- (void)processWithToken:(NSNumber *)arg1 exitedWithStatus:(int)arg2;
- (void)stopTrackingProcessWithToken:(NSNumber *)arg1;
- (void)crashInProcessWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(int)arg3 symbol:(NSString *)arg4;
@end

