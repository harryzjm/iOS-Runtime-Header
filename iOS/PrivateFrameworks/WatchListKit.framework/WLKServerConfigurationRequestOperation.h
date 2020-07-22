//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError, NSString, WLKServerConfigurationResponse, WLKUserEnvironment;

@interface WLKServerConfigurationRequestOperation : NSOperation
{
    NSString *_nextEK;
    NSError *_error;
    WLKServerConfigurationResponse *_response;
    WLKUserEnvironment *_userEnvironment;
    CDUnknownBlockType _requestCompletionBlock;
}

+ (id)_caller;
@property(copy, nonatomic) CDUnknownBlockType requestCompletionBlock; // @synthesize requestCompletionBlock=_requestCompletionBlock;
@property(readonly, nonatomic) WLKUserEnvironment *userEnvironment; // @synthesize userEnvironment=_userEnvironment;
@property(readonly, nonatomic) WLKServerConfigurationResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *nextEK; // @synthesize nextEK=_nextEK;
- (void).cxx_destruct;
- (id)_queryStringForKey:(id)arg1 values:(id)arg2;
- (void)_finishWithResponse:(id)arg1;
- (void)_failWithError:(id)arg1;
- (id)_runNetworkOperationAndReturnError:(id *)arg1;
- (id)_consentQueryString;
- (id)_entitlementsQueryString;
- (id)_requestProperties;
- (id)_defaultBaseURL;
- (void)main;
- (id)init;

@end

