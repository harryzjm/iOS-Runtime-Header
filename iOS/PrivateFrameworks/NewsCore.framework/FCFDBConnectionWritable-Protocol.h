//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCFDBConnectionReadable-Protocol.h>

@class NSArray, NSDictionary;

@protocol FCFDBConnectionWritable <FCFDBConnectionReadable>
- (void)insertFeatureIndexesForFeedItems:(NSArray *)arg1 knownFeedsByID:(NSDictionary *)arg2;
- (void)insertIndexesForFeedItems:(NSArray *)arg1 knownFeedsByID:(NSDictionary *)arg2;
- (void)insertFeedItems:(NSArray *)arg1 knownFeedsByID:(NSDictionary *)arg2;
- (void)insertFeeds:(NSArray *)arg1;
- (void)commitTransaction;
- (void)beginTransaction;
@end

