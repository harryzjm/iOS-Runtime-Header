//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface XCTResult : NSObject
{
    id _value;
    NSError *_error;
}

+ (id)resultWithError:(id)arg1;
+ (id)resultWithValue:(id)arg1;
+ (id)result;
+ (id)resultWithValue:(id)arg1 error:(id)arg2;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) id value; // @synthesize value=_value;
@property(readonly) _Bool hasError;
@property(readonly) _Bool hasValue;
- (void)dealloc;
- (id)initWithValue:(id)arg1 error:(id)arg2;

@end

