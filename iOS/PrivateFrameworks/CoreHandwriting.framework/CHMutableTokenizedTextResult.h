//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CHMutableTokenizedTextResult
{
}

+ (id)refineAlternativeTokens:(id)arg1 historyTokenIDs:(id)arg2 languageModel:(void *)arg3;
- (void)filterCandidatesWithOutOfPattern:(_Bool)arg1 duplicateTokenIDs:(_Bool)arg2;
- (void)trimTokensToTranscriptionPathCount:(long long)arg1;
- (void)adjustColumns;
- (id)_columnStrokeSetsFromTokenRows:(id)arg1;
- (id)commonStrokeSetsFromSets:(id)arg1 tokenRow:(id)arg2;
- (void)appendTokenColumns:(id)arg1;
- (void)setTranscriptionPaths:(id)arg1 scores:(id)arg2;
@property(copy, nonatomic) NSArray *tokenColumns; // @dynamic tokenColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
