//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface XCTestObserver : NSObject
{
}

- (void)testCaseDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testCaseDidStop:(id)arg1;
- (void)testCaseDidStart:(id)arg1;
- (void)testSuiteDidFail:(id)arg1 withDescription:(id)arg2 inFile:(id)arg3 atLine:(unsigned long long)arg4;
- (void)testSuiteDidStop:(id)arg1;
- (void)testSuiteDidStart:(id)arg1;
- (void)stopObserving;
- (void)startObserving;

@end

