//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <XCTestCore/XCTestObservation-Protocol.h>

@class NSString, XCActivityRecord, XCTContext, XCTSourceCodeContext, XCTestCase;

@protocol _XCTestObservationPrivate <XCTestObservation>

@optional
- (void)testCase:(XCTestCase *)arg1 didRecordSkipWithDescription:(NSString *)arg2 sourceCodeContext:(XCTSourceCodeContext *)arg3;
- (void)_context:(XCTContext *)arg1 didFinishActivity:(XCActivityRecord *)arg2;
- (void)_context:(XCTContext *)arg1 willStartActivity:(XCActivityRecord *)arg2;
@end
