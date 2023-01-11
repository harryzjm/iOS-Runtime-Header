//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXSpeechSynthesisResultMutating-Protocol.h>

@class NSError, NSString, SVXSpeechSynthesisResult, SVXSpeechSynthesisUtteranceInfo;

__attribute__((visibility("hidden")))
@interface _SVXSpeechSynthesisResultMutation : NSObject <SVXSpeechSynthesisResultMutating>
{
    SVXSpeechSynthesisResult *_baseModel;
    long long _type;
    SVXSpeechSynthesisUtteranceInfo *_utteranceInfo;
    NSError *_error;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasType:1;
        unsigned int hasUtteranceInfo:1;
        unsigned int hasError:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setError:(id)arg1;
- (void)setUtteranceInfo:(id)arg1;
- (void)setType:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
