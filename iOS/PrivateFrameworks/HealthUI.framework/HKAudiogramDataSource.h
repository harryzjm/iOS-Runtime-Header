//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKGraphSeriesDataBlock;

@interface HKAudiogramDataSource
{
    HKGraphSeriesDataBlock *_dataBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKGraphSeriesDataBlock *dataBlock; // @synthesize dataBlock=_dataBlock;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2 priorityDelegate:(id)arg3;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (id)_flatPointsFromSensitivityData:(id)arg1 leftEarSeries:(_Bool)arg2;
- (id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(_Bool)arg2;
- (id)initWithFlatSensitivityData:(id)arg1 forLeftEar:(_Bool)arg2;
- (id)initWithSensitivityData:(id)arg1 forLeftEar:(_Bool)arg2;

@end
