//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXAppStateMonitor <NSObject>
- (void)performOnApplicationDidBecomeActive:(void (^)(void))arg1;
- (void)performOnApplicationDidEnterBackground:(void (^)(void))arg1;
@end
