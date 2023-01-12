//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDTrustedTargetWrappedKey, NSArray, NSData, NSString;

@interface CKDCodeFunctionInvokeURLRequest : CKDURLRequest
{
    CDUnknownBlockType _serializedResultsCallback;
    NSString *_serviceName;
    NSString *_functionName;
    NSData *_serializedParameters;
    NSData *_attestationEntropy;
    NSArray *_pccWrappedInvocationKeys;
    CKDTrustedTargetWrappedKey *_trustedTargetWrappedInvocationKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CKDTrustedTargetWrappedKey *trustedTargetWrappedInvocationKey; // @synthesize trustedTargetWrappedInvocationKey=_trustedTargetWrappedInvocationKey;
@property(copy, nonatomic) NSArray *pccWrappedInvocationKeys; // @synthesize pccWrappedInvocationKeys=_pccWrappedInvocationKeys;
@property(retain, nonatomic) NSData *attestationEntropy; // @synthesize attestationEntropy=_attestationEntropy;
@property(retain, nonatomic) NSData *serializedParameters; // @synthesize serializedParameters=_serializedParameters;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType serializedResultsCallback; // @synthesize serializedResultsCallback=_serializedResultsCallback;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (_Bool)requestGETPreAuth;
- (id)requestOperationClasses;
- (long long)databaseScope;
- (_Bool)allowsAnonymousAccount;
- (id)initWithOperation:(id)arg1 serviceName:(id)arg2 functionName:(id)arg3 serializedParameters:(id)arg4 attestationEntropy:(id)arg5 pccWrappedInvocationKeys:(id)arg6 trustedTargetWrappedInvocationKey:(id)arg7;

@end

