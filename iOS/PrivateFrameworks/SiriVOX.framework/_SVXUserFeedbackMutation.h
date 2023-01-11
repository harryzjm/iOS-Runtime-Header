//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXUserFeedbackMutating-Protocol.h>

@class NSString, SVXUserFeedback, SVXUserFeedbackAudioContent, SVXUserFeedbackVoiceContent;

__attribute__((visibility("hidden")))
@interface _SVXUserFeedbackMutation : NSObject <SVXUserFeedbackMutating>
{
    SVXUserFeedback *_baseModel;
    NSString *_identifier;
    long long _contentType;
    SVXUserFeedbackAudioContent *_audioContent;
    SVXUserFeedbackVoiceContent *_voiceContent;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIdentifier:1;
        unsigned int hasContentType:1;
        unsigned int hasAudioContent:1;
        unsigned int hasVoiceContent:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setVoiceContent:(id)arg1;
- (void)setAudioContent:(id)arg1;
- (void)setContentType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
