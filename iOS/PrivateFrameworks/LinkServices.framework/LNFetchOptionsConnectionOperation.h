//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNAction, LNActionMetadata, LNActionParameterMetadata, LNDynamicOptionsProviderReference, LNDynamicOptionsResult, NSString;

__attribute__((visibility("hidden")))
@interface LNFetchOptionsConnectionOperation
{
    LNAction *_action;
    LNActionMetadata *_actionMetadata;
    LNActionParameterMetadata *_parameterMetadata;
    LNDynamicOptionsProviderReference *_optionsProviderReference;
    NSString *_searchTerm;
    NSString *_localeIdentifier;
    LNDynamicOptionsResult *_result;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) LNDynamicOptionsResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) LNDynamicOptionsProviderReference *optionsProviderReference; // @synthesize optionsProviderReference=_optionsProviderReference;
@property(retain, nonatomic) LNActionParameterMetadata *parameterMetadata; // @synthesize parameterMetadata=_parameterMetadata;
@property(retain, nonatomic) LNActionMetadata *actionMetadata; // @synthesize actionMetadata=_actionMetadata;
@property(retain, nonatomic) LNAction *action; // @synthesize action=_action;
- (void)finishWithError:(id)arg1;
- (void)start;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 actionMetadata:(id)arg3 parameterMetadata:(id)arg4 optionsProviderReference:(id)arg5 searchTerm:(id)arg6 localeIdentifier:(id)arg7 queue:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;

@end

