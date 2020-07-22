//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface VSRecognitionDisambiguateAction
{
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    void *_context;
}

- (id)_actionForEmptyResults;
- (struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(CDStruct_90f67059 *)arg1 info:(void *)arg2;
- (struct __VSRecognitionDisambiguationContext *)_disambiguationContext;
- (void)setKeywords:(id)arg1;
- (_Bool)_keywordIndexChanged;
- (id)_keywords;
- (void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)ambiguousValuesForClassIdentifier:(id)arg1;
- (void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValuesForClassIdentifier:(id)arg1;
- (void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3;
- (id)knownValueForClassIdentifier:(id)arg1;
- (void)setSequenceTag:(id)arg1;
- (id)sequenceTag;
- (id)repeatedSpokenFeedbackString;
- (void)setRepeatedSpokenFeedbackString:(id)arg1;
- (int)completionType;
- (void)dealloc;

@end

