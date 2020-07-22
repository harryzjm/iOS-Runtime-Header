//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSpeechSynthesisRecord, NSString;

@interface AFSpeechSynthesisRecordBuilder : NSObject
{
    AFSpeechSynthesisRecord *_baseObject;
    NSString *_utterance;
    unsigned long long _beginTimestamp;
    unsigned long long _endTimestamp;
    struct _builderFlags {
        unsigned int isDirty:1;
        unsigned int hasUtterance:1;
        unsigned int hasBeginTimestamp:1;
        unsigned int hasEndTimestamp:1;
    } _builderFlags;
}

- (void).cxx_destruct;
- (id)build;
- (id)setEndTimestamp:(unsigned long long)arg1;
- (id)setBeginTimestamp:(unsigned long long)arg1;
- (id)setUtterance:(id)arg1;
- (id)initWithBaseObject:(id)arg1;
- (id)init;

@end
