//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface MGRemoteQueryServerHandlerPing : NSObject
{
    _Bool _replied;
    NSURLRequest *_request;
    NSData *_responsePayload;
}

+ (id)handlerForRequest:(id)arg1;
+ (id)urlPath;
- (void).cxx_destruct;
@property(nonatomic) _Bool replied; // @synthesize replied=_replied;
@property(retain, nonatomic) NSData *responsePayload; // @synthesize responsePayload=_responsePayload;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)provideResponseData:(CDUnknownBlockType)arg1;
- (int)prepareResponse:(id)arg1;
- (_Bool)validateRequest;
@property(readonly, copy) NSString *description;
- (id)_initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

