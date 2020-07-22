//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet;

@interface HDCloudSyncSession
{
    NSSet *_excludedSyncStores;
    NSDictionary *_anchorClockForExcludedStores;
}

@property(readonly, nonatomic) NSDictionary *anchorClockForExcludedStores; // @synthesize anchorClockForExcludedStores=_anchorClockForExcludedStores;
- (void).cxx_destruct;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (void)setExcludedSyncStores:(id)arg1;
- (id)excludedSyncStores;

@end

