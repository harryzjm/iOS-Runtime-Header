//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface SSHTTPServerResponse : NSObject
{
    short _statusCode;
    NSData *_body;
    NSDictionary *_headers;
}

- (void).cxx_destruct;
@property(nonatomic) short statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
- (struct __CFHTTPMessage *)copyHTTPMessage;
- (id)bagFromBody;
- (void)setBodyWithBag:(id)arg1;
- (id)initWithStatusCode:(short)arg1;

@end
