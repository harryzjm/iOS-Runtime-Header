//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI2/NSObject-Protocol.h>

@class FCReadingHistory, NSArray, NSDictionary;
@protocol FCHeadlineProviding;

@protocol FCReadingHistoryObserving <NSObject>

@optional
- (void)readingHistory:(FCReadingHistory *)arg1 didAddHeadline:(id <FCHeadlineProviding>)arg2 fromGroupType:(long long)arg3 swipedToArticle:(_Bool)arg4 withOnScreenChecker:(_Bool (^)(void))arg5;
- (void)readingHistory:(FCReadingHistory *)arg1 didChangeOffensiveStateForArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistory:(FCReadingHistory *)arg1 didChangeFeaturesForArticles:(NSDictionary *)arg2;
- (void)readingHistory:(FCReadingHistory *)arg1 didAddArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistory:(FCReadingHistory *)arg1 didRemoveArticlesWithIDs:(NSArray *)arg2;
- (void)readingHistoryLikelyClearedRemotely:(FCReadingHistory *)arg1;
- (void)readingHistoryDidClear:(FCReadingHistory *)arg1;
@end

