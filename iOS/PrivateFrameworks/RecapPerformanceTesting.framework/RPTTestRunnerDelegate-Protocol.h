//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RecapPerformanceTesting/NSObject-Protocol.h>

@class NSError, RPTTestRunner;
@protocol RPTTestParameters;

@protocol RPTTestRunnerDelegate <NSObject>

@optional
- (_Bool)testRunner:(RPTTestRunner *)arg1 isReadyForRunningParameters:(id <RPTTestParameters>)arg2;
- (_Bool)testRunner:(RPTTestRunner *)arg1 shouldManagePPTLifetimeEvent:(long long)arg2 forParamaters:(id <RPTTestParameters>)arg3;
- (void)testRunner:(RPTTestRunner *)arg1 didFailRunningParameters:(id <RPTTestParameters>)arg2 withError:(NSError *)arg3;
- (void)testRunner:(RPTTestRunner *)arg1 didFinishRunningParameters:(id <RPTTestParameters>)arg2;
@end

