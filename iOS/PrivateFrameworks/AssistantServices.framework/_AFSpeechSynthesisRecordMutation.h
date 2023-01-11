//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSpeechSynthesisRecordMutating-Protocol.h>

@class AFSpeechSynthesisRecord, NSString;

@interface _AFSpeechSynthesisRecordMutation : NSObject <AFSpeechSynthesisRecordMutating>
{
    AFSpeechSynthesisRecord *_baseModel;
    NSString *_utterance;
    unsigned long long _beginTimestamp;
    unsigned long long _endTimestamp;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasUtterance:1;
        unsigned int hasBeginTimestamp:1;
        unsigned int hasEndTimestamp:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setEndTimestamp:(unsigned long long)arg1;
- (void)setBeginTimestamp:(unsigned long long)arg1;
- (void)setUtterance:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

