//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolNetworkResourceTiming;

@interface RWIProtocolNetworkResponse
{
}

@property(retain, nonatomic) RWIProtocolNetworkResourceTiming *timing;
@property(copy, nonatomic) NSString *requestHeadersText;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property(nonatomic) long long source;
@property(copy, nonatomic) NSString *mimeType;
@property(copy, nonatomic) NSString *headersText;
@property(retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property(copy, nonatomic) NSString *statusText;
@property(nonatomic) double status;
@property(copy, nonatomic) NSString *url;
- (id)initWithUrl:(id)arg1 status:(double)arg2 statusText:(id)arg3 headers:(id)arg4 mimeType:(id)arg5 source:(long long)arg6;

@end

