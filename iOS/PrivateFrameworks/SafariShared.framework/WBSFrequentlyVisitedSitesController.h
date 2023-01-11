//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory;

@interface WBSFrequentlyVisitedSitesController : NSObject
{
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3 withMinimumVisitCount:(unsigned long long)arg4;
+ (float)scoreWithHistoryItemForVisitScoring:(id)arg1 historyItemForURLScoring:(id)arg2 atTime:(double)arg3;
+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2 withMinimumVisitCount:(unsigned long long)arg3;
+ (float)scoreForHistoryItem:(id)arg1 atTime:(double)arg2;
- (void).cxx_destruct;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (_Bool)_saveFrequentlyVisitedSites:(id)arg1;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg1;
- (float)_scoreForHistoryItem:(id)arg1;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (void)clearFrequentlyVisitedSites;
- (_Bool)recomputeFrequentlyVisitedSitesIfNecessary;
@property(readonly, nonatomic) NSArray *frequentlyVisitedSites;
- (id)initWithHistory:(id)arg1 bannedURLStore:(id)arg2;

@end
