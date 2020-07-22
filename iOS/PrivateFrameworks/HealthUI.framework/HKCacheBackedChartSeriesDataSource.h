//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKChartDataCacheObserver-Protocol.h>

@class HKChartCache, NSString;

@interface HKCacheBackedChartSeriesDataSource <HKChartDataCacheObserver>
{
    CDStruct_6ca94699 _lastStartPath;
    CDStruct_6ca94699 _lastEndPath;
    HKChartCache *_chartCache;
}

@property(retain, nonatomic) HKChartCache *chartCache; // @synthesize chartCache=_chartCache;
- (void).cxx_destruct;
- (void)_resetCachedPaths;
- (void)chartCacheDidUpdate:(id)arg1;
- (void)invalidateCache;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
