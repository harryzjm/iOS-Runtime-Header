//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSHTTPURLResponse, NSNumber, NSString;

@interface AAResponse : NSObject
{
    NSDictionary *_responseDictionary;
    NSHTTPURLResponse *_httpResponse;
    NSError *_error;
    long long _statusCode;
    NSData *_data;
    NSNumber *_maxAge;
}

@property(readonly, nonatomic) NSNumber *maxAge; // @synthesize maxAge=_maxAge;
@property(readonly, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *protocolVersion;
- (id)_deviceSpecificLocalizedString:(id)arg1;
- (id)_stringWithDescriptionForResponseError:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(_Bool)arg3;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (void)_parseJSONResponse:(id)arg1;
- (void)_parsePlistResponse:(id)arg1;

@end
