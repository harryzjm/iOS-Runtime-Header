//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol WBSURLCompletionDataSource;

@interface WBSURLCompletionDatabase : NSObject
{
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _fullTextBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _fullTextHistoryMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _prefixBookmarkMatchesCache;
    struct Vector<id<WBSURLCompletionMatchData>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _prefixHistoryMatchesCache;
    NSString *_fullTextBookmarkMatchesCacheString;
    NSString *_fullTextHistoryMatchesCacheString;
    NSString *_prefixBookmarkMatchesCacheString;
    NSString *_prefixHistoryMatchesCacheString;
    id <WBSURLCompletionDataSource> _dataSource;
}

+ (_Bool)_matchIsNotURLMatchAndTitleLooksLikeURLForBookmarkAndHistoryCompletionMatch:(const struct BookmarkAndHistoryCompletionMatch *)arg1;
+ (void)initializeURLCompletionOnMainThread;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WBSURLCompletionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_getUnsortedPrefixMatchesForTypedString:(id)arg1 historyMatches:(Vector_3aefaf4b *)arg2 bookmarkMatches:(Vector_3aefaf4b *)arg3;
- (void)_getUnsortedFullTextMatchesForTypedString:(id)arg1 historyMatches:(Vector_3aefaf4b *)arg2 bookmarkMatches:(Vector_3aefaf4b *)arg3 dataTypes:(unsigned int)arg4;
- (void)_getSortedMatchesForTypedString:(id)arg1 topHits:(Vector_3aefaf4b *)arg2 historyMatches:(Vector_3aefaf4b *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_3aefaf4b *)arg5 bookmarkLimit:(unsigned long long)arg6 prefixMatchesOnly:(_Bool)arg7;
- (void)_removeMatchesWithTitlesThatLookLikeURLsRemovedFromMatches:(Vector_3aefaf4b *)arg1;
- (void)_getSortedPrefixMatchesForTypedString:(id)arg1 topHits:(Vector_3aefaf4b *)arg2 historyMatches:(Vector_3aefaf4b *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_3aefaf4b *)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)_getSortedFullTextMatchesForTypedString:(id)arg1 topHits:(Vector_3aefaf4b *)arg2 historyMatches:(Vector_3aefaf4b *)arg3 historyLimit:(unsigned long long)arg4 bookmarkMatches:(Vector_3aefaf4b *)arg5 bookmarkLimit:(unsigned long long)arg6;
- (void)clearMatchesCaches;
- (void)clearHistoryMatchesCache;
- (void)clearBookmarkMatchesCaches;
- (void)clearBookmarkMatchesCachesKeepingEmptyValues:(_Bool)arg1;
- (void)getBestMatchesForTypedString:(id)arg1 topHits:(id *)arg2 matches:(id *)arg3 limit:(unsigned long long)arg4 forQueryID:(long long)arg5;
- (id)init;

@end
