//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSMutableCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, NSInputStream, NSString, NSURL, NSURLRequestInternal;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    NSURLRequestInternal *_internal;
}

+ (double)defaultTimeoutInterval;
+ (void)setDefaultTimeoutInterval:(double)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)getObjectKeyWithIndex:(long long)arg1;
+ (id)requestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
+ (void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2;
+ (id)allowsSpecificHTTPSCertificateForHost:(id)arg1;
+ (void)setAllowsAnyHTTPSCertificate:(_Bool)arg1 forHost:(id)arg2;
+ (_Bool)allowsAnyHTTPSCertificateForHost:(id)arg1;
- (id)boundInterfaceIdentifier;
@property(readonly) _Bool allowsCellularAccess;
@property(readonly) unsigned long long networkServiceType;
- (void)_removePropertyForKey:(id)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (id)_propertyForKey:(id)arg1;
- (_Bool)_URLHasScheme:(id)arg1;
- (id)_copyReplacingURLWithURL:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
@property(readonly, copy) NSURL *mainDocumentURL;
@property(readonly) double timeoutInterval;
@property(readonly) unsigned long long cachePolicy;
@property(readonly, copy) NSURL *URL;
- (struct _CFURLRequest *)_CFURLRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)_initWithCFURLRequest:(struct _CFURLRequest *)arg1;
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;
- (_Bool)_isSafeRequestForBackgroundDownload;
- (double)_payloadTransmissionTimeout;
- (_Bool)_requiresShortConnectionTimeout;
- (id)_startTimeoutDate;
- (double)_timeWindowDuration;
- (double)_timeWindowDelay;
- (unsigned long long)expectedWorkload;
- (id)contentDispositionEncodingFallbackArray;
@property(readonly) _Bool HTTPShouldUsePipelining;
@property(readonly) _Bool HTTPShouldHandleCookies;
- (id)HTTPUserAgent;
- (id)HTTPReferrer;
- (id)HTTPExtraCookies;
- (id)HTTPContentType;
@property(readonly, retain) NSInputStream *HTTPBodyStream;
@property(readonly, copy) NSData *HTTPBody;
- (id)valueForHTTPHeaderField:(id)arg1;
@property(readonly, copy) NSDictionary *allHTTPHeaderFields;
@property(readonly, copy) NSString *HTTPMethod;

@end

