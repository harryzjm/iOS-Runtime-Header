//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SSURLConnectionRequest;

@interface RadioOptInRequest
{
    unsigned long long _accountIdentifier;
    SSURLConnectionRequest *_request;
}

- (void).cxx_destruct;
- (void)startWithOptInCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)init;

@end
