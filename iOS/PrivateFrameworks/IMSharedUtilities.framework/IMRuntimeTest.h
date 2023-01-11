//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject
{
    IMRuntimeTestRun *_testRun;
    CDUnknownBlockType _completion;
}

+ (void)testLog:(id)arg1;
+ (id)testName;
+ (id)logHandle;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) IMRuntimeTestRun *testRun; // @synthesize testRun=_testRun;
- (void).cxx_destruct;
- (void)testLog:(id)arg1;
- (void)finishTestAfterInterval:(double)arg1;
- (void)dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)testName;
- (void)runTest:(CDUnknownBlockType)arg1;
- (Class)testRunClass;
- (void)finishTest;
- (id)logHandle;
- (void)startTest;
- (void)tearDown;
- (void)setUp;

@end

