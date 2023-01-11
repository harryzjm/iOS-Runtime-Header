//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GQSSpiceTable
{
    struct __CFDictionary *mVectorUidToAlongMap;
    _Bool mReadingRowVectors;
    vector_f9ed6fc8 *mRowPositions;
    vector_f9ed6fc8 *mColumnPositions;
    float mCurrentCellMinX;
    float mCurrentCellMaxX;
    float mCurrentCellMinY;
    float mCurrentCellMaxY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
}

- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;
- (float)alongValueForVectorUid:(const char *)arg1;
- (void)aboutToReadCells;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadRowVectors;
- (void)dealloc;
- (id)init;

@end
