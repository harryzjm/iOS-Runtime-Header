//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/XCDebugLogDelegate-Protocol.h>
#import <XCTestCore/XCTHarnessEventReporting-Protocol.h>
#import <XCTestCore/XCTMessagingChannel_IDEToRunner-Protocol.h>
#import <XCTestCore/XCTMessagingRole_ProcessMonitoring-Protocol.h>
#import <XCTestCore/XCTMessagingRole_TestExecution-Protocol.h>
#import <XCTestCore/_XCTestObservationInternal-Protocol.h>

@class DTXConnection, NSString, XCTCapabilities, XCTFuture, XCTPromise, XCTestRun;
@protocol XCTMessagingChannel_RunnerToIDE><NSObject, XCTRunnerIDESessionDelegate, XCUIApplicationMonitor;

@interface XCTRunnerIDESession : NSObject <XCDebugLogDelegate, XCTHarnessEventReporting, XCTMessagingRole_TestExecution, XCTMessagingRole_ProcessMonitoring, _XCTestObservationInternal, XCTMessagingChannel_IDEToRunner>
{
    struct os_unfair_lock_s _lock;
    XCTCapabilities *_IDECapabilities;
    XCTFuture *_readyForTestingFuture;
    XCTFuture *_testConfigurationFuture;
    XCTFuture *_IDEProxyFuture;
    id <XCTRunnerIDESessionDelegate> _delegate;
    id <XCUIApplicationMonitor> _applicationMonitor;
    DTXConnection *_IDEConnection;
    id <XCTMessagingChannel_RunnerToIDE><NSObject> _IDEProxy;
    XCTPromise *_readyForTestingPromise;
    XCTPromise *_IDEProxyPromise;
    XCTestRun *_currentTestRun;
    CDUnknownBlockType _readinessReply;
}

+ (id)exportedCapabilities;
+ (void)daemonMediatedSessionForSessionIdentifier:(id)arg1 daemonSession:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (double)IDEConnectionTimeout;
+ (void)setSharedSession:(id)arg1;
+ (id)sharedSession;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType readinessReply; // @synthesize readinessReply=_readinessReply;
@property(retain) XCTestRun *currentTestRun; // @synthesize currentTestRun=_currentTestRun;
@property(readonly) XCTPromise *IDEProxyPromise; // @synthesize IDEProxyPromise=_IDEProxyPromise;
@property(readonly) XCTPromise *readyForTestingPromise; // @synthesize readyForTestingPromise=_readyForTestingPromise;
@property(readonly) id <XCTMessagingChannel_RunnerToIDE><NSObject> IDEProxy; // @synthesize IDEProxy=_IDEProxy;
@property(readonly) DTXConnection *IDEConnection; // @synthesize IDEConnection=_IDEConnection;
@property __weak id <XCUIApplicationMonitor> applicationMonitor; // @synthesize applicationMonitor=_applicationMonitor;
@property __weak id <XCTRunnerIDESessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) XCTCapabilities *IDECapabilities; // @synthesize IDECapabilities=_IDECapabilities;
- (void)flushOutgoingMessagesWithIDEConfirmationTimeout:(double)arg1;
@property(readonly) XCTFuture *IDEProxyFuture; // @synthesize IDEProxyFuture=_IDEProxyFuture;
@property(readonly) XCTFuture *readyForTestingFuture; // @synthesize readyForTestingFuture=_readyForTestingFuture;
@property(readonly) XCTFuture *testConfigurationFuture; // @synthesize testConfigurationFuture=_testConfigurationFuture;
- (id)initWithTransport:(id)arg1 delegate:(id)arg2;
- (void)logDebugMessage:(id)arg1;
- (void)reportSelfDiagnosisIssue:(id)arg1 description:(id)arg2;
- (void)reportStallOnMainThreadInTestCase:(id)arg1 file:(id)arg2 line:(unsigned long long)arg3;
- (void)reportDidFinishExecutingTestPlanWithCompletion:(CDUnknownBlockType)arg1;
- (void)reportInitializationForUITestingFinishedWithError:(id)arg1;
- (void)reportDidBeginExecutingTestPlan;
- (void)reportTestWithIdentifier:(id)arg1 didExceedExecutionTimeAllowance:(double)arg2;
- (void)reportBootstrappingFailure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_IDE_shutdown;
- (id)_IDE_executeTestsWithIdentifiersToRun:(id)arg1 identifiersToSkip:(id)arg2;
- (void)_debugLogCIState;
- (id)_IDE_fetchAllTestIdentifiers;
- (id)_IDE_fetchParallelizableTestIdentifiers;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(id)arg1;
- (id)_IDE_processWithToken:(id)arg1 exitedWithStatus:(id)arg2;
- (id)_IDE_stopTrackingProcessWithToken:(id)arg1;
- (id)_IDE_processWithBundleID:(id)arg1 path:(id)arg2 pid:(id)arg3 crashedUnderSymbol:(id)arg4;
- (void)testBundleDidFinish:(id)arg1;
- (void)_context:(id)arg1 didFinishActivity:(id)arg2;
- (void)_context:(id)arg1 willStartActivity:(id)arg2;
- (void)_testCase:(id)arg1 didMeasureValues:(id)arg2 forPerformanceMetricID:(id)arg3 name:(id)arg4 unitsOfMeasurement:(id)arg5 baselineName:(id)arg6 baselineAverage:(id)arg7 maxPercentRegression:(id)arg8 maxPercentRelativeStandardDeviation:(id)arg9 maxRegression:(id)arg10 maxStandardDeviation:(id)arg11 file:(id)arg12 line:(unsigned long long)arg13 polarity:(long long)arg14;
- (void)testCase:(id)arg1 didRecordExpectedFailure:(id)arg2;
- (void)testCase:(id)arg1 didRecordIssue:(id)arg2;
- (void)testCaseDidFinish:(id)arg1;
- (void)testCasePlaceholder:(id)arg1 isUnavailableWithReason:(id)arg2;
- (void)testCase:(id)arg1 didRecordSkipWithDescription:(id)arg2 sourceCodeContext:(id)arg3;
- (void)testCaseWillStart:(id)arg1;
- (void)testSuiteDidFinish:(id)arg1;
- (void)testSuite:(id)arg1 didRecordExpectedFailure:(id)arg2;
- (void)testSuite:(id)arg1 didRecordIssue:(id)arg2;
- (void)testSuiteWillStart:(id)arg1;
- (void)testBundleWillStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

