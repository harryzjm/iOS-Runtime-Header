//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate
{
    unsigned long long _customInfoType;
    UITextSuggestion *_textSuggestion;
}

+ (id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;
+ (id)candidateWithSuggestion:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITextSuggestion *textSuggestion; // @synthesize textSuggestion=_textSuggestion;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2;
- (unsigned long long)customInfoType;
- (id)label;
- (id)input;
- (id)candidate;

@end
