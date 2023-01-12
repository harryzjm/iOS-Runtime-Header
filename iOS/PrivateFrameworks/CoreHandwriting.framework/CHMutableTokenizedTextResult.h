//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHTokenizedTextResult.h"

@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult
{
}

- (void)remapAllStrokeIndexesWithArray:(id)arg1;
- (void)offsetAllStrokeIndexesBy:(long long)arg1;
@property(nonatomic) long long changeableTokenColumnCount; // @dynamic changeableTokenColumnCount;
@property(nonatomic) long long precedingLineBreaks; // @dynamic precedingLineBreaks;
- (void)filterCandidatesWithOutOfPattern:(_Bool)arg1 duplicateTokenIDs:(_Bool)arg2 keepOutOfLexiconAlternatives:(_Bool)arg3 keepAlternativeLengths:(_Bool)arg4 keepSubstrings:(_Bool)arg5 shouldKeepOriginalSpelling:(_Bool)arg6;
- (void)trimTokensToTranscriptionPathCount:(long long)arg1;
- (void)prependTokenColumns:(id)arg1 prefixTopPath:(id)arg2;
- (void)adjustColumns;
- (void)appendTokenColumns:(id)arg1;
- (void)setTranscriptionPaths:(id)arg1 scores:(id)arg2;
@property(copy, nonatomic) NSArray *tokenColumns; // @dynamic tokenColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

