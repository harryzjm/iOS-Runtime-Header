//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RCEndpointError : NSObject
{
    NSString *_errorCode;
    NSString *_message;
    NSString *_stacktrace;
}

+ (id)endpointErrorWithDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSString *stacktrace; // @synthesize stacktrace=_stacktrace;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithErrorCode:(id)arg1 message:(id)arg2 stacktrace:(id)arg3;

@end

