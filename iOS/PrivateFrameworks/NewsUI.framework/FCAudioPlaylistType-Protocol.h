//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString;
@protocol FCAudioPlaylistObserving;

@protocol FCAudioPlaylistType
@property(readonly, nonatomic) NSArray *articleIDs;
- (void)save;
- (void)removeObserver:(id <FCAudioPlaylistObserving>)arg1;
- (void)addObserver:(id <FCAudioPlaylistObserving>)arg1;
- (void)ensureSyncedWithCompletion:(void (^)(void))arg1;
- (void)removeArticleID:(NSString *)arg1;
- (void)insertArticleID:(NSString *)arg1 atIndex:(unsigned long long)arg2;
- (NSDate *)dateAddedForArticleID:(NSString *)arg1;
- (_Bool)containsArticleID:(NSString *)arg1;
@end

