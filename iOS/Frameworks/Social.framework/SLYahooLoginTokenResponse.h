//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface SLYahooLoginTokenResponse : NSObject
{
    long long _statusCode;
    NSError *_error;
    NSString *_body;
    NSString *_loginToken;
}

@property(readonly) NSString *loginToken; // @synthesize loginToken=_loginToken;
@property(readonly) NSString *body; // @synthesize body=_body;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) long long statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
