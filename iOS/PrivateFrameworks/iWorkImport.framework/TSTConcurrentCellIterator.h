//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, TSTCellRegion, TSTInfo, TSUWidthLimitedQueue;

__attribute__((visibility("hidden")))
@interface TSTConcurrentCellIterator : NSObject
{
    TSTInfo *_tableInfo;
    TSTCellRegion *_region;
    TSTCellRegion *_forcingRegion;
    TSUWidthLimitedQueue *_queue;
    NSMutableArray *_arrayOfArraysOfRowRocks;
    unsigned long long _flags;
    unsigned long long _searchFlags;
}

+ (id)p_sharedQueue;
@property(nonatomic) unsigned long long searchFlags; // @synthesize searchFlags=_searchFlags;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSMutableArray *arrayOfArraysOfRowRocks; // @synthesize arrayOfArraysOfRowRocks=_arrayOfArraysOfRowRocks;
@property(nonatomic) __weak TSUWidthLimitedQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) TSTCellRegion *forcingRegion; // @synthesize forcingRegion=_forcingRegion;
@property(retain, nonatomic) TSTCellRegion *region; // @synthesize region=_region;
@property(retain, nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (void).cxx_destruct;
- (id)collectRowRocks;
- (void)waitForConcurrentEnumerationToComplete;
- (id)p_subRegionsOfRegion:(id)arg1;
- (void)enumerateConcurrentlyUsingRowBeginBlock:(CDUnknownBlockType)arg1 concurrentBlock:(CDUnknownBlockType)arg2 finalBlock:(CDUnknownBlockType)arg3;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 forcingRegion:(id)arg3 flags:(unsigned long long)arg4 searchFlags:(unsigned long long)arg5;
- (id)initWithTableInfo:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 searchFlags:(unsigned long long)arg4;
- (id)initWithTableInfo:(id)arg1 flags:(unsigned long long)arg2 searchFlags:(unsigned long long)arg3;

@end

