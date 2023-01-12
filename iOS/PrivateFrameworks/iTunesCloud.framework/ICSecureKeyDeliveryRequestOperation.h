//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICSecureKeyDeliveryRequest;

__attribute__((visibility("hidden")))
@interface ICSecureKeyDeliveryRequestOperation : ICAsyncOperation
{
    ICSecureKeyDeliveryRequest *_request;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) ICSecureKeyDeliveryRequest *request; // @synthesize request=_request;
- (void)_createServerPlaybackContextUsingCertificateData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_createSimplifiedProtocolRequestBodyUsingPlaybackContextData:(id)arg1;
- (id)_createDefaultProtocolRequestBodyUsingPlaybackContextData:(id)arg1;
- (void)execute;

@end

