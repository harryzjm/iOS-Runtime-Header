//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface SNTestSuite : NSObject
{
    NSMutableDictionary *_testCases;
    NSMutableArray *_subTestSuites;
    SNTestSuite *_parentTestSuite;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SNTestSuite *parentTestSuite; // @synthesize parentTestSuite=_parentTestSuite;
@property(readonly, nonatomic) NSMutableArray *subTestSuites; // @synthesize subTestSuites=_subTestSuites;
@property(readonly, nonatomic) NSMutableDictionary *testCases; // @synthesize testCases=_testCases;
- (id)testSetupList;
- (id)testRunForTestName:(id)arg1;
- (void)addSubTestSuite:(id)arg1;
- (void)addTestCase:(id)arg1;
- (id)init;

@end
