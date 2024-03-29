//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/XCTRunnerIDESessionDelegate-Protocol.h>
#import <XCTestCore/XCTestDriverUIAutomationDelegate-Protocol.h>

@class NSBundle, NSString, NSURL, NSUUID, XCTFuture, XCTPromise, XCTReportingSession, XCTRunnerIDESession, XCTestConfiguration;

@interface XCTestDriver : NSObject <XCTestDriverUIAutomationDelegate, XCTRunnerIDESessionDelegate>
{
    XCTRunnerIDESession *_ideSession;
    NSURL *_testBundleURLFromEnvironment;
    NSUUID *_sessionIdentifierFromEnvironment;
    NSURL *_testConfigurationURLFromEnvironment;
    CDUnknownBlockType _daemonSessionProvider;
    XCTestConfiguration *_testConfiguration;
    NSBundle *_testBundle;
    id _testBundlePrincipalClassInstance;
    XCTFuture *_executionWorkerFuture;
    XCTPromise *_executionWorkerPromise;
    XCTReportingSession *_reportingSession;
}

+ (void)_applyRandomExecutionOrderingSeed:(id)arg1;
+ (_Bool)environmentSpecifiesTestConfiguration;
+ (_Bool)shouldSkipInitialBundleLoadBeforeXCTestMain;
+ (id)testBundleURLFromEnvironment;
+ (id)sharedTestDriver;
+ (void)initializeSharedTestDriverWithRunConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(retain) id testBundlePrincipalClassInstance; // @synthesize testBundlePrincipalClassInstance=_testBundlePrincipalClassInstance;
@property(retain) NSBundle *testBundle; // @synthesize testBundle=_testBundle;
@property(retain) XCTestConfiguration *testConfiguration; // @synthesize testConfiguration=_testConfiguration;
@property(readonly, copy) CDUnknownBlockType daemonSessionProvider; // @synthesize daemonSessionProvider=_daemonSessionProvider;
@property(readonly, copy) NSURL *testConfigurationURLFromEnvironment; // @synthesize testConfigurationURLFromEnvironment=_testConfigurationURLFromEnvironment;
@property(readonly, copy) NSUUID *sessionIdentifierFromEnvironment; // @synthesize sessionIdentifierFromEnvironment=_sessionIdentifierFromEnvironment;
@property(readonly, copy) NSURL *testBundleURLFromEnvironment; // @synthesize testBundleURLFromEnvironment=_testBundleURLFromEnvironment;
@property(retain) XCTRunnerIDESession *ideSession; // @synthesize ideSession=_ideSession;
- (id)testWorkerForIDESession:(id)arg1;
- (void)IDESessionDidDisconnect:(id)arg1;
- (id)harnessEventReporter;
- (Class)_declaredPrincipalClassFromTestBundle:(id)arg1;
- (void)_createTestBundlePrincipalClassInstance;
- (id)_loadTestBundleFromURL:(id)arg1 error:(id *)arg2;
- (void)_reportBootstrappingFailure:(id)arg1;
- (id)_prepareIDESessionWithIdentifier:(id)arg1 exitCode:(int *)arg2;
- (void)_reportFinishedExecutingTests;
- (void)flushIDEConnectionAndExitWithCode:(int)arg1;
- (int)_runTests;
- (id)suspendAppSleep;
- (_Bool)_preTestingInitialization;
- (void)_configureGlobalState;
- (int)_prepareTestConfigurationAndIDESession;
- (int)run;
- (id)initWithTestConfiguration:(id)arg1;
- (id)initWithTestBundleURLFromEnvironment:(id)arg1 sessionIdentifierFromEnvironment:(id)arg2 testConfigurationURLFromEnvironment:(id)arg3 testConfiguration:(id)arg4 daemonSessionProvider:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

