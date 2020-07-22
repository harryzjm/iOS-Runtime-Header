//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICDelegationPlayInfoRequest, ICStoreRequestContext;

@interface ICDelegationPlayInfoRequestOperation
{
    ICDelegationPlayInfoRequestOperation *_strongSelf;
    ICDelegationPlayInfoRequest *_playInfoRequest;
    ICStoreRequestContext *_storeRequestContext;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(copy, nonatomic) ICDelegationPlayInfoRequest *playInfoRequest; // @synthesize playInfoRequest=_playInfoRequest;
- (void).cxx_destruct;
- (void)_finishWithResult:(_Bool)arg1 tokens:(id)arg2 error:(id)arg3;
- (void)finishWithError:(id)arg1;
- (void)execute;
- (void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3;

@end

