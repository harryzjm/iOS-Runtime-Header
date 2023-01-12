//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTestCore/XCTIssueHandling-Protocol.h>

@class NSBundle, NSDictionary, NSString, XCTExpectedFailureContextManager, XCTTestIdentifier, XCTestObservationCenter, XCTestRun;

@interface XCTest : NSObject <XCTIssueHandling>
{
    XCTExpectedFailureContextManager *_expectedFailureContextManager;
    XCTestRun *_testRun;
    XCTestObservationCenter *_observationCenter;
}

+ (id)bundle;
- (void).cxx_destruct;
- (void)removeTestsWithIdentifierInSet:(id)arg1;
@property(readonly, getter=_activityAggregateStatistics) NSDictionary *activityAggregateStatistics;
@property(readonly) NSBundle *bundle;
- (void)expectFailureWithContext:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (void)expectFailureWithContext:(id)arg1;
- (void)_checkForExpectedFailureMatchingIssue:(id)arg1;
- (id)expectedFailureContextManager;
- (void)handleIssue:(id)arg1;
- (long long)defaultExecutionOrderCompare:(id)arg1;
@property(readonly) NSString *nameForLegacyLogging;
@property(readonly) NSString *languageAgnosticTestMethodName;
@property(readonly) NSString *languageAgnosticTestClassName;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)tearDownWithError:(id *)arg1;
- (void)tearDown;
- (void)setUp;
- (_Bool)setUpWithError:(id *)arg1;
- (void)setUpWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_shouldRepeatTest;
- (void)runTest;
- (void)performTest:(id)arg1;
@property(retain) XCTestObservationCenter *observationCenter; // @synthesize observationCenter=_observationCenter;
@property(readonly) XCTestRun *testRun; // @synthesize testRun=_testRun;
@property(readonly) Class testRunClass;
@property(readonly) Class _requiredTestRunBaseClass;
@property(readonly, copy) NSString *name;
@property(readonly) unsigned long long testCaseCount;
- (id)_duplicate;
@property(readonly) NSString *_methodNameForReporting;
@property(readonly) NSString *_classNameForReporting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=_identifier) XCTTestIdentifier *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end
