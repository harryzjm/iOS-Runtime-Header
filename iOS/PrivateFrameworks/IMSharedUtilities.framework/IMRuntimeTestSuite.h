//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMRuntimeTest, NSArray, NSMutableArray, NSTimer;

@interface IMRuntimeTestSuite
{
    NSMutableArray *_tests;
    double _testSuiteStartDelay;
    double _testStartDelay;
    NSMutableArray *_runningTests;
    IMRuntimeTest *_currentTest;
    NSTimer *_timer;
}

+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1;
+ (void)runTestsIfNeededWithRepeatCount:(long long)arg1 withCount:(long long)arg2;
- (void).cxx_destruct;
@property __weak NSTimer *timer; // @synthesize timer=_timer;
@property(retain) IMRuntimeTest *currentTest; // @synthesize currentTest=_currentTest;
@property(retain) NSMutableArray *runningTests; // @synthesize runningTests=_runningTests;
@property double testStartDelay; // @synthesize testStartDelay=_testStartDelay;
@property double testSuiteStartDelay; // @synthesize testSuiteStartDelay=_testSuiteStartDelay;
@property(retain) NSArray *tests; // @synthesize tests=_tests;
- (void)currentTestDidFinish;
- (void)_timerExpired:(id)arg1;
- (void)_startNextTest;
- (void)_cancelTimer;
- (void)startTest;
- (void)removeTest:(id)arg1;
- (void)addTest:(id)arg1;
- (id)init;

@end
