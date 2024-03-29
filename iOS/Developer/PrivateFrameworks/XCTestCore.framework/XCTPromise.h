//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, XCTestExpectation;

@interface XCTPromise : NSObject
{
    struct atomic_flag _promiseFulfilled;
    NSString *_promiseDescription;
    id _value;
    NSError *_error;
    XCTestExpectation *_expectation;
}

- (void).cxx_destruct;
@property(readonly) struct atomic_flag promiseFulfilled; // @synthesize promiseFulfilled=_promiseFulfilled;
@property(readonly) XCTestExpectation *expectation; // @synthesize expectation=_expectation;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id value; // @synthesize value=_value;
@property(readonly, copy) NSString *promiseDescription; // @synthesize promiseDescription=_promiseDescription;
- (void)fulfillWithValue:(id)arg1 error:(id)arg2;
- (void)fulfillWithError:(id)arg1;
- (void)fulfillWithValue:(id)arg1;
- (id)initWithDescription:(id)arg1;

@end

