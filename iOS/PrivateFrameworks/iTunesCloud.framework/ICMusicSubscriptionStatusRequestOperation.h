//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation
{
    ICMusicSubscriptionStatusRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, copy, nonatomic) ICMusicSubscriptionStatusRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(_Bool)arg3 maximumRetryCount:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)execute;
- (id)initWithRequest:(id)arg1;

@end
