//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSPersistence/TSPContainedObject.h>

#import <TSTables/TSTCompatibilityVersionProviding-Protocol.h>

@class NSIndexSet, TSPObject, TSTTableHeaderStorageBucket;

@interface TSTTableHeaderStorage : TSPContainedObject <TSTCompatibilityVersionProviding>
{
    TSTTableHeaderStorageBucket *_buckets[16];
    unsigned long long _bucketCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexSet *populatedIndexes;
@property(readonly, nonatomic) unsigned int maxIndex;
@property(readonly, nonatomic) unsigned int minIndex;
@property(readonly, nonatomic) unsigned long long count;
- (void)reset;
- (void)forceLoadHeaders;
- (unsigned long long)totalCellCount;
- (void)resetAllCellCounts;
- (void)incrementCellCountAtIndex:(unsigned int)arg1 byAmount:(unsigned long long)arg2;
- (void)decrementCellCountAtIndex:(unsigned int)arg1 byAmount:(unsigned long long)arg2;
- (unsigned long long)cellCountAtIndex:(unsigned int)arg1;
- (void)updateStylesWithBlock:(CDUnknownBlockType)arg1;
- (void)setTextStyle:(id)arg1 atIndex:(unsigned int)arg2;
- (id)textStyleAtIndex:(unsigned int)arg1;
- (void)setCellStyle:(id)arg1 atIndex:(unsigned int)arg2;
- (id)cellStyleAtIndex:(unsigned int)arg1;
- (void)setHidingState:(unsigned char)arg1 atIndex:(unsigned int)arg2;
- (unsigned char)hidingStateAtIndex:(unsigned int)arg1;
- (void)setSize:(double)arg1 atIndex:(unsigned int)arg2;
- (double)sizeAtIndex:(unsigned int)arg1;
- (void)moveIndexRange:(struct _NSRange)arg1 toIndex:(unsigned int)arg2;
- (void)swapIndex:(unsigned int)arg1 withIndex:(unsigned int)arg2;
- (void)shiftIndexesBackAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)shiftIndexesForwardAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)removeIndexesAtIndex:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)_setHeader:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_headerAtIndex:(unsigned int)arg1;
- (id)_mutableNoCreateHeaderAtIndex:(unsigned int)arg1;
- (id)_mutableHeaderAtIndex:(unsigned int)arg1;
- (void)updateHeaderAtIndex:(unsigned int)arg1 fromMetadata:(id)arg2;
- (id)metadataAtIndex:(unsigned int)arg1 hidingAction:(unsigned char)arg2 defaultSize:(double)arg3 uuid:(UUIDData_5fbc143e)arg4;
- (void)p_allocateBuckets;
@property(readonly, nonatomic) unsigned long long archivingCompatibilityVersion;
- (void)encodeToArchive:(struct HeaderStorage *)arg1 archiver:(id)arg2;
- (id)initFromArchive:(const struct HeaderStorage *)arg1 unarchiver:(id)arg2 owner:(id)arg3;
@property(readonly, nonatomic) TSPObject *firstBucketForArchiving;
- (id)initWithBucket:(id)arg1 owner:(id)arg2;
- (id)initWithOwner:(id)arg1;

@end
