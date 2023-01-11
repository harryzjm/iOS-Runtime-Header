//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTest/XCTTestRunSessionDelegate-Protocol.h>
#import <XCTest/XCTestDriverInterface-Protocol.h>
#import <XCTest/XCTestObservation-Protocol.h>
#import <XCTest/XCUIXcodeApplicationManaging-Protocol.h>

@class DTXConnection, NSString, XCTestRun;
@protocol OS_dispatch_queue, XCTRunnerIDESessionDelegate, XCTTestWorker, XCTUIApplicationMonitor, XCTestManager_IDEInterface><NSObject;

@interface XCTRunnerIDESession : NSObject <XCTestObservation, XCTestDriverInterface, XCTTestRunSessionDelegate, XCUIXcodeApplicationManaging>
{
    NSObject<OS_dispatch_queue> *_queue;
    DTXConnection *_IDEConnection;
    id <XCTestManager_IDEInterface><NSObject> _IDEProxy;
    long long _IDEProtocolVersion;
    id <XCTRunnerIDESessionDelegate> _delegate;
    id <XCTUIApplicationMonitor> _applicationMonitor;
    id <XCTTestWorker> _testWorker;
    XCTestRun *_currentTestRun;
    CDUnknownBlockType _readinessReply;
}

+ (id)transportForLocalPath:(id)arg1 error:(id *)arg2;
+ (void)setSharedSession:(id)arg1;
+ (id)sharedSession;
+ (id)sharedSessionQueue;
@property __weak id <XCTTestWorker> testWorker; // @synthesize testWorker=_testWorker;
@property(copy) CDUnknownBlockType readinessReply; // @synthesize readinessReply=_readinessReply;
@property(retain) id <XCTestManager_IDEInterface><NSObject> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
@property(retain) DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property __weak id <XCTUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property __weak id <XCTRunnerIDESessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)testBundleDidFinish:(id)arg1;
- (void)_testCase:(id)arg1 didFinishActivity:(id)arg2;
- (void)_testCase:(id)arg1 willStartActivity:(id)arg2;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13;
- (void)testCase:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuite:(id)arg1 didFailWithDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteWillStart:(id)arg1;
- (void)testBundleWillStart:(id)arg1;
- (id)_IDE_processWithToken:(id)arg1 exitedWithStatus:(id)arg2;
- (id)_IDE_stopTrackingProcessWithToken:(id)arg1;
- (void)reportSelfDiagnosisIssue:(id)arg1 description:(id)arg2;
- (void)terminateProcessWithToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestLaunchProgressForProcessWithToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)launchProcessWithPath:(id)arg1 bundleID:(id)arg2 arguments:(id)arg3 environmentVariables:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_IDE_processWithBundleID:(id)arg1 path:(id)arg2 pid:(id)arg3 crashedUnderSymbol:(id)arg4;
- (void)reportStallOnMainThreadInTestCase:(id)arg1 method:(id)arg2 file:(id)arg3 line:(unsigned long long)arg4;
- (void)logDebugMessage:(id)arg1;
- (void)testRunSessionDidFinishExecutingTestPlan:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)testRunSession:(id)arg1 initializationForUITestingDidFailWithError:(id)arg2;
- (void)testRunSessionDidBeginInitializingForUITesting:(id)arg1;
- (void)testRunSessionDidBeginExecutingTestPlan:(id)arg1;
- (id)_IDE_shutdown;
- (id)_IDE_executeTestIdentifiers:(id)arg1 skippingTestIdentifiers:(id)arg2;
- (id)_IDE_fetchDiscoveredTestClasses;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (void)requestReadinessForTesting:(CDUnknownBlockType)arg1;
@property(readonly) _Bool supportsVariableScreenshotFormats;
@property(readonly) _Bool reportsCrashes;
@property long long IDEProtocolVersion; // @synthesize IDEProtocolVersion=_IDEProtocolVersion;
- (id)initWithTransport:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

