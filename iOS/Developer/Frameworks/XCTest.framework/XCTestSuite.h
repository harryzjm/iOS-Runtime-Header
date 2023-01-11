//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@interface XCTestSuite
{
    id _internalImplementation;
}

+ (id)testClassSuitesForTestIdentifiers:(id)arg1 skippingTestIdentifiers:(id)arg2 testExecutionOrdering:(long long)arg3;
+ (id)testSuiteForTestConfiguration:(id)arg1;
+ (void)_applyRandomExecutionOrderingSeed:(id)arg1;
+ (id)defaultTestSuite;
+ (id)allTests;
+ (id)testSuiteForTestCaseClass:(Class)arg1;
+ (id)testSuiteForTestCaseWithName:(id)arg1;
+ (id)testSuiteForBundlePath:(id)arg1;
+ (id)suiteForBundleCache;
+ (void)invalidateCache;
+ (id)_suiteForBundleCache;
+ (id)emptyTestSuiteNamedFromPath:(id)arg1;
+ (id)testSuiteWithName:(id)arg1;
+ (id)testCaseNamesForScopeNames:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithTestConfiguration:(id)arg1;
- (void)_applyRandomExecutionOrdering;
- (void)_sortTestsUsingDefaultExecutionOrdering;
- (long long)defaultExecutionOrderCompare:(id)arg1;
@property(readonly) NSDictionary *activityAggregateStatistics;
- (void)_mergeActivityStatistics:(id)arg1;
- (void)performTest:(id)arg1;
- (void)_performProtectedSectionForTest:(id)arg1 testSection:(CDUnknownBlockType)arg2;
- (void)_recordUnexpectedFailureForTestRun:(id)arg1 description:(id)arg2 exception:(id)arg3;
- (void)recordFailureWithDescription:(id)arg1 inFile:(id)arg2 atLine:(unsigned long long)arg3 expected:(_Bool)arg4;
- (Class)testRunClass;
- (Class)_requiredTestRunBaseClass;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)testCaseCount;
- (void)setTests:(id)arg1;
@property(readonly, copy) NSArray *tests;
- (void)addTest:(id)arg1;
- (id)_testSuiteWithIdentifier:(id)arg1;
- (id)description;
@property(copy) NSString *name;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)removeTestsWithNames:(id)arg1;

@end

