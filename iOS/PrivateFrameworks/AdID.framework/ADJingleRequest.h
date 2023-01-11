//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSMutableDictionary, NSNumber, NSString;

@interface ADJingleRequest : NSObject
{
    NSNumber *_token;
    NSData *_responseBody;
    NSDictionary *_responseHeaders;
    NSError *_error;
    long long _statusCode;
    NSString *_DSID;
    CDUnknownBlockType _completionHandler;
    NSString *_bagKey;
    NSData *_requestBody;
    NSMutableDictionary *_requestHeaders;
}

+ (id)incrementToken;
@property(retain, nonatomic) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(retain, nonatomic) NSData *requestBody; // @synthesize requestBody=_requestBody;
@property(retain, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy) NSError *error; // @synthesize error=_error;
@property(retain) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain) NSData *responseBody; // @synthesize responseBody=_responseBody;
@property(retain, nonatomic) NSNumber *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)sendJingleRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleJingleResponse;
- (void)send;
- (id)init:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

