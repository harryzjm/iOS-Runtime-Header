//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface ESExchangeEmptyBearerResponse : NSObject
{
    NSString *_authURI;
    long long _statusCode;
    NSError *_error;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSString *authURI; // @synthesize authURI=_authURI;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;

@end
