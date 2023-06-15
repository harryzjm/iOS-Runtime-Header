//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HFExecutionEnvironment;

@protocol HFExecutionEnvironmentObserver <NSObject>

@optional
- (void)executionEnvironmentDidBecomeScreenUnlocked:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeScreenLocked:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeOccluded:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeVisible:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidEnterBackground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillResignActive:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeActive:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillEnterForeground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentRunningStateDidChange:(HFExecutionEnvironment *)arg1;
@end

