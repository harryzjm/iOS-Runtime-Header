//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSIntervalFilter : NSObject
{
    unsigned long long _expectedInterval;
    unsigned int _multiIntervalCount;
    unsigned long long _filterCount;
    unsigned long long *_filteredTimestamps;
    unsigned int _timestampIndex;
    unsigned long long _timestampCount[8];
    unsigned long long _timestampIntervals[8];
    long long _validEntry;
    NSObject<OS_dispatch_queue> *_syncQueue;
    unsigned char _filterSize;
    unsigned long long _filterOffset;
    struct IOTS_U128 _filteredSnapshot;
    struct IOTS_U128 _filteredOffset;
}

- (id).cxx_construct;
- (void)dealloc;
- (void)changeToNewFilterSize:(unsigned char)arg1;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned int)arg2;
- (void)resetFilterWithNewExpectedInterval:(unsigned long long)arg1;
- (void)resetFilter;
- (unsigned long long)filterCountForEntry:(long long)arg1;
@property(readonly, nonatomic) unsigned long long filterCount; // @dynamic filterCount;
- (unsigned long long)multiIntervalTimeForEntry:(long long)arg1;
@property(readonly, nonatomic) unsigned long long multiIntervalTime; // @dynamic multiIntervalTime;
- (unsigned long long)addTimestamp:(unsigned long long)arg1 entry:(long long *)arg2;
- (unsigned long long)addTimestamp:(unsigned long long)arg1;
- (unsigned long long)_calculateNewTimestamp:(unsigned long long)arg1;
- (id)initWithExpectedInterval:(unsigned long long)arg1 multiIntervalCount:(unsigned int)arg2 filterSize:(unsigned char)arg3;

@end

