//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface MUWebMessage : NSObject
{
    NSString *_type;
    NSString *_caller;
    NSString *_callee;
    NSString *_method;
    NSNumber *_callNumber;
    NSString *_status;
    id <NSCopying> _arguments;
    id <NSCopying> _result;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(copy, nonatomic) id <NSCopying> result; // @synthesize result=_result;
@property(copy, nonatomic) id <NSCopying> arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSNumber *callNumber; // @synthesize callNumber=_callNumber;
@property(copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(copy, nonatomic) NSString *callee; // @synthesize callee=_callee;
@property(copy, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *JSONObject;
- (id)initWithJSONObject:(id)arg1;

@end

