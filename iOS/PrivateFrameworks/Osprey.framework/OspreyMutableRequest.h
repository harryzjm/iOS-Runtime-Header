//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface OspreyMutableRequest : NSObject
{
    NSMutableDictionary *_additionalHeaders;
    _Bool _enableDeviceAuthentication;
    _Bool _allowsCellularAccess;
    _Bool _compressionEnabled;
    _Bool _forceHTTPv2;
    NSString *_methodName;
    NSString *_clientTraceIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceHTTPv2; // @synthesize forceHTTPv2=_forceHTTPv2;
@property(nonatomic, getter=isCompressionEnabled) _Bool compressionEnabled; // @synthesize compressionEnabled=_compressionEnabled;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) _Bool enableDeviceAuthentication; // @synthesize enableDeviceAuthentication=_enableDeviceAuthentication;
@property(copy, nonatomic) NSString *clientTraceIdentifier; // @synthesize clientTraceIdentifier=_clientTraceIdentifier;
@property(readonly, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(nonatomic) _Bool requireAbsintheAuthentication;
- (id)buildInternalRequest;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)initWithMethodName:(id)arg1;

@end
