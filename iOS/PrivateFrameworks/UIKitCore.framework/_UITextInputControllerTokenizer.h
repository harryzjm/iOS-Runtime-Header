//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInputStringTokenizer.h"

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer
{
    UITextInputController *_textInput;
    struct __CFStringTokenizer *_tokenizer;
    CDStruct_627e0f85 _tokenizerRange;
    int _tokenizerType;
    _Bool _tokenizerIsInvalid;
    struct __CFStringTokenizer *_wordTokenizer;
    CDStruct_627e0f85 _wordTokenizerRange;
    _Bool _wordTokenizerIsInvalid;
}

- (void).cxx_destruct;
- (id)_closestTokenSubrangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(_Bool)arg3;
- (long long)_indexForTextPosition:(id)arg1;
- (id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3;
- (_Bool)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2;
- (void)invalidateTokenizer;
- (void)dealloc;
- (id)initWithTextInputController:(id)arg1;

@end

