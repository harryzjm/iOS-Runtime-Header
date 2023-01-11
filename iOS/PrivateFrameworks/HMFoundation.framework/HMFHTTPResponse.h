//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/NSCopying-Protocol.h>
#import <HMFoundation/NSMutableCopying-Protocol.h>

@class HMFHTTPRequest, HMFHTTPResponseInternal, NSData, NSDictionary;

@interface HMFHTTPResponse <NSCopying, NSMutableCopying>
{
    HMFHTTPResponseInternal *_internal;
    HMFHTTPRequest *_request;
}

@property(readonly, nonatomic) HMFHTTPResponseInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic) HMFHTTPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *body;
@property(readonly, nonatomic) NSDictionary *headerFields;
@property(readonly, nonatomic) long long statusCode;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;
- (id)initWithRequest:(id)arg1 internalResponse:(id)arg2;
- (id)init;

@end

