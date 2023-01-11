//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransforming-Protocol.h>

@class NSString;
@protocol NTFeedTransforming;

@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming>
{
    unsigned long long _embedsLimit;
    id <NTFeedTransforming> _underlyingTransformation;
}

@property(readonly, nonatomic) id <NTFeedTransforming> underlyingTransformation; // @synthesize underlyingTransformation=_underlyingTransformation;
@property(readonly, nonatomic) unsigned long long embedsLimit; // @synthesize embedsLimit=_embedsLimit;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithSubscribedTagIDs:(id)arg1 mutedTagIDs:(id)arg2 purchasedTagIDs:(id)arg3 readArticlesFilterMethod:(int)arg4 recentlyReadHistoryItems:(id)arg5 seenArticlesFilterMethod:(int)arg6 minimumTimeSinceFirstSeenToFilter:(double)arg7 recentlySeenHistoryItems:(id)arg8 supplementalFeedFilterOptions:(long long)arg9 embedsLimit:(unsigned long long)arg10 otherArticleIDs:(id)arg11 otherClusterIDs:(id)arg12 filterDate:(id)arg13;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

