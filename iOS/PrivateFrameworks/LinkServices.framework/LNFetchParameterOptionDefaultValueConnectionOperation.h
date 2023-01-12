//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LNRuntimeAssertionsTakingConnectionOperation.h"

@class LNDynamicOption, NSString;

__attribute__((visibility("hidden")))
@interface LNFetchParameterOptionDefaultValueConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation
{
    NSString *_parameterIdentifier;
    LNDynamicOption *_result;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) LNDynamicOption *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *parameterIdentifier; // @synthesize parameterIdentifier=_parameterIdentifier;
- (void)finishWithError:(id)arg1;
- (void)start;
- (id)initWithConnectionInterface:(id)arg1 actionMetadata:(id)arg2 parameterIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

