//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICStoreURLRequest.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ICRadioURLRequest : ICStoreURLRequest
{
    _Bool _backgroundRadioRequest;
    NSNumber *_privateListeningEnabled;
    NSNumber *_delegatedPrivateListeningEnabled;
    long long _protocolVersion;
    CDUnknownBlockType _radioContentDictionaryCreationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType radioContentDictionaryCreationBlock; // @synthesize radioContentDictionaryCreationBlock=_radioContentDictionaryCreationBlock;
@property(nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(copy, nonatomic, getter=isDelegatedPrivateListeningEnabled) NSNumber *delegatedPrivateListeningEnabled; // @synthesize delegatedPrivateListeningEnabled=_delegatedPrivateListeningEnabled;
@property(copy, nonatomic, getter=isPrivateListeningEnabled) NSNumber *privateListeningEnabled; // @synthesize privateListeningEnabled=_privateListeningEnabled;
@property(nonatomic, getter=isBackgroundRadioRequest) _Bool backgroundRadioRequest; // @synthesize backgroundRadioRequest=_backgroundRadioRequest;
- (void)_decorateHeaderPropertiesForURLRequest:(id)arg1 withBuilderProperties:(id)arg2;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithURLRequest:(id)arg1 requestContext:(id)arg2;

@end

