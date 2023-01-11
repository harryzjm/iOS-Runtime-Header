//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>
#import <iTunesStore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSLock, NSString, NSURL, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject <NSSecureCoding, NSCopying>
{
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
}

+ (id)requestWithURL:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)requestProperties;
@property(retain) NSArray *URLs;
@property long long URLBagType;
@property double timeoutInterval;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
@property(retain) NSDictionary *queryStringDictionary;
@property(retain) NSString *HTTPMethod;
@property(retain) NSInputStream *HTTPBodyStream;
@property(retain) NSData *HTTPBody;
@property long long expectedContentLength;
@property(retain) NSDictionary *customHeaders;
@property unsigned long long cachePolicy;
@property(retain) NSString *appleClientApplication;
@property long long allowedRetryCount;
@property(readonly) NSURL *primaryURL;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)init;
- (id)_initCommon;

@end

