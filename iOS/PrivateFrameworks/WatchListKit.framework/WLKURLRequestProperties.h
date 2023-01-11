//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface WLKURLRequestProperties : NSObject
{
    NSString *_endpoint;
    NSString *_httpMethod;
    NSDictionary *_queryParameters;
    NSDictionary *_headers;
    NSString *_caller;
    NSNumber *_timeout;
    NSNumber *_apiVersion;
    long long _options;
}

+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 apiVersion:(id)arg7 options:(long long)arg8;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7;
+ (id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4;
+ (id)requestPropertiesWithEndpoint:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(copy, nonatomic) NSNumber *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(copy, nonatomic) NSNumber *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(copy, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (id)shortDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)URLRequestWithConfiguration:(id)arg1;

@end
