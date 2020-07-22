//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _OSLogTracepointBuffer : NSObject
{
    CDStruct_c6d697a1 *_events;
    unsigned long long _cursor;
    unsigned long long _count;
    unsigned long long _size;
    _Bool _mutable;
}

- (void)enumerateEventsFromTime:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)finishedInsertingTracepointsWithNextMajorTime:(unsigned long long)arg1 options:(unsigned int)arg2;
- (void)insertTracepoints:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2 options:(unsigned int)arg3;
- (void)insertStatedumpChunk:(struct tracev3_chunk_s *)arg1 subchunk:(id)arg2;
- (void)insertNonsparsePoint:(unsigned long long)arg1 uuid:(unsigned char [16])arg2 ttl:(unsigned char)arg3 inMemory:(_Bool)arg4;
- (void)insertTimesyncPoints:(struct _os_timesync_db_s *)arg1 forBoot:(unsigned char [16])arg2 oldestContinuousTime:(unsigned long long)arg3;
- (void)beginInsertingTracepointsClippingFromTime:(unsigned long long)arg1;
- (_Bool)_isEmpty;
- (void)dealloc;
- (id)init;

@end

