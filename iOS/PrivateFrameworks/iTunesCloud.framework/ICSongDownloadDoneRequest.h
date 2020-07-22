//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICStoreRequestContext, ICStoreURLRequest, NSString;

@interface ICSongDownloadDoneRequest
{
    ICStoreRequestContext *_requestContext;
    NSString *_downloadIdentifier;
    unsigned long long _songID;
    ICStoreURLRequest *_storeURLRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 downloadIdentifier:(id)arg2 songID:(unsigned long long)arg3;

@end

