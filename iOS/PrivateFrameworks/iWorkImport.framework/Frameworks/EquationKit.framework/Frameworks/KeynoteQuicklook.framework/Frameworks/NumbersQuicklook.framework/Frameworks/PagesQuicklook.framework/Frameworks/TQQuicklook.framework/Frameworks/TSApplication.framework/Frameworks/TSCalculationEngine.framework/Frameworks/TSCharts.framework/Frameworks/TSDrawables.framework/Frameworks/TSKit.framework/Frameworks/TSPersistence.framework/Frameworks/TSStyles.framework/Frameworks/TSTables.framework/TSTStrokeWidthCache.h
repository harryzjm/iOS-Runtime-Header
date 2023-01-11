//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTStrokeWidthCache : NSObject
{
    struct vector<TSTStrokeWidthCacheEntry, std::__1::allocator<TSTStrokeWidthCacheEntry>> _indexToCacheEntriesMap;
    struct _opaque_pthread_rwlock_t _rwlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct _opaque_pthread_rwlock_t rwlock; // @synthesize rwlock=_rwlock;
- (void)unlock;
- (void)lockForWriting;
- (void)updateCacheForGridIndex:(unsigned int)arg1 withMergedStrokes:(id)arg2;
- (void)strokeWidthForGridIndex:(unsigned int)arg1 outWidth:(double *)arg2 outNextWidth:(double *)arg3;
- (double)strokeWidthForGridIndex:(unsigned int)arg1 inRange:(struct TSTSimpleRange)arg2;
- (void)setCount:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
