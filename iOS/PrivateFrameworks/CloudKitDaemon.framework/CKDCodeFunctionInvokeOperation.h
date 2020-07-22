//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDCodeFunctionInvokeOperation
{
    CDUnknownBlockType _functionInvokeCompletionBlock;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedArguments;
    NSData *_serializedResponse;
}

+ (long long)isPredominatelyDownload;
@property(copy, nonatomic) NSData *serializedResponse; // @synthesize serializedResponse=_serializedResponse;
@property(readonly, nonatomic) NSData *serializedArguments; // @synthesize serializedArguments=_serializedArguments;
@property(readonly, copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType functionInvokeCompletionBlock; // @synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock;
- (void).cxx_destruct;
- (void)main;
- (void)_invokeFunction;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

