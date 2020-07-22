//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSURLSessionDataDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLRequest;

@interface AARequest : NSObject <NSURLSessionDataDelegate>
{
    NSString *_initialURLString;
    _Bool _flushCache;
    struct OpaqueCFHTTPCookieStorage *_cookieStorage;
    NSString *_oneTimePassword;
    NSString *_machineId;
    CDUnknownBlockType _handler;
    NSDictionary *_customHeaders;
}

+ (id)protocolVersion;
+ (Class)responseClass;
@property(copy, nonatomic) NSDictionary *customHeaders; // @synthesize customHeaders=_customHeaders;
@property(nonatomic) _Bool flushCache; // @synthesize flushCache=_flushCache;
- (void).cxx_destruct;
- (id)_redactedHeadersFromHTTPHeaders:(id)arg1;
- (id)redactedBodyStringWithPropertyList:(id)arg1;
- (void)dealloc;
- (void)_handleDataTaskCompletionWithData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)performRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)bodyDictionary;
- (id)urlCredential;
@property(readonly) NSURLRequest *urlRequest;
- (id)urlString;
- (void)setDeviceProvisioningMachineId:(id)arg1;
- (void)setDeviceProvisioningOneTimePassword:(id)arg1;
- (void)setCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (id)initWithURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

