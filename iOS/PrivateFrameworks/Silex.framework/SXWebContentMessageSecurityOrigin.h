//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessageSecurityOrigin-Protocol.h>

@class NSString, NSURLRequest;

@interface SXWebContentMessageSecurityOrigin : NSObject <SXWebContentMessageSecurityOrigin>
{
    NSString *_protocol;
    NSString *_host;
    NSURLRequest *_request;
}

@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)arg1 host:(id)arg2 request:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

