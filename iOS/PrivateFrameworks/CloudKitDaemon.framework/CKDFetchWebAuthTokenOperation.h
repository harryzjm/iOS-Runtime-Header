//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDFetchWebAuthTokenOperation
{
    NSString *_webAuthToken;
    NSString *_APIToken;
}

@property(copy, nonatomic) NSString *APIToken; // @synthesize APIToken=_APIToken;
@property(copy, nonatomic) NSString *webAuthToken; // @synthesize webAuthToken=_webAuthToken;
- (void).cxx_destruct;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
