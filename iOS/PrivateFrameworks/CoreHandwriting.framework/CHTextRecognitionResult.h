//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHRecognitionResult.h"

@class NSArray, NSIndexSet, NSString;

@interface CHTextRecognitionResult : CHRecognitionResult
{
    _Bool _isTextReplacement;
    NSString *_string;
    NSArray *_wordRanges;
    NSArray *_wordIDs;
    NSArray *_wordRecognitionScores;
    NSArray *_wordCombinedScores;
    NSArray *_wordStrokeSets;
    NSArray *_wordLexicalEntries;
    NSArray *_wordPatternEntries;
    NSIndexSet *_rareWordIndexes;
    NSIndexSet *_inappropriateWordIndexes;
}

- (void).cxx_destruct;
@property(readonly) _Bool isTextReplacement; // @synthesize isTextReplacement=_isTextReplacement;
@property(readonly) NSIndexSet *inappropriateWordIndexes; // @synthesize inappropriateWordIndexes=_inappropriateWordIndexes;
@property(readonly) NSIndexSet *rareWordIndexes; // @synthesize rareWordIndexes=_rareWordIndexes;
@property(readonly) NSArray *wordPatternEntries; // @synthesize wordPatternEntries=_wordPatternEntries;
@property(readonly) NSArray *wordLexicalEntries; // @synthesize wordLexicalEntries=_wordLexicalEntries;
@property(readonly) NSArray *wordStrokeSets; // @synthesize wordStrokeSets=_wordStrokeSets;
@property(readonly) NSArray *wordCombinedScores; // @synthesize wordCombinedScores=_wordCombinedScores;
@property(readonly) NSArray *wordRecognitionScores; // @synthesize wordRecognitionScores=_wordRecognitionScores;
@property(readonly) NSArray *wordIDs; // @synthesize wordIDs=_wordIDs;
@property(readonly) NSArray *wordRanges; // @synthesize wordRanges=_wordRanges;
@property(readonly) NSString *string; // @synthesize string=_string;
- (id)mecabraCandidate;
- (id)initWithString:(id)arg1 score:(double)arg2 wordRanges:(id)arg3 wordIDs:(id)arg4 wordRecognitionScores:(id)arg5 wordCombinedScores:(id)arg6 wordStrokeSets:(id)arg7 wordLexicalEntries:(id)arg8 wordPatternEntries:(id)arg9 rareWordIndexes:(id)arg10 inappropriateWordIndexes:(id)arg11 isTextReplacement:(_Bool)arg12;

@end

