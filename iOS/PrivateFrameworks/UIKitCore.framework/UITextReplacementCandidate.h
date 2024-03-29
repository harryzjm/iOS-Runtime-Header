//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class UITextReplacement;

__attribute__((visibility("hidden")))
@interface UITextReplacementCandidate : TIKeyboardCandidateSingle
{
    UITextReplacement *_replacement;
}

+ (id)textReplacementCandidateForTextReplacement:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UITextReplacement *replacement; // @synthesize replacement=_replacement;
- (id)label;
- (id)_initWithTextReplacement:(id)arg1;

@end

