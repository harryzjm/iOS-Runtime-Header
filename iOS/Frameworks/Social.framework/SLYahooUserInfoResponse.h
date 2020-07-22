//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface SLYahooUserInfoResponse : NSObject
{
    long long _statusCode;
    NSString *_displayName;
    NSString *_emailAddress;
    NSError *_error;
    NSString *_errorMessage;
}

@property(readonly) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end

