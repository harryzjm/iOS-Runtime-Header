//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class XCTActivityRecordStack, XCTestCase;

@interface _XCTContextImplementation : NSObject
{
    XCTActivityRecordStack *_activityRecordStack;
    XCTestCase *_testCase;
}

@property __weak XCTestCase *testCase; // @synthesize testCase=_testCase;
@property(readonly) XCTActivityRecordStack *activityRecordStack; // @synthesize activityRecordStack=_activityRecordStack;
- (void)dealloc;
- (id)init;

@end
