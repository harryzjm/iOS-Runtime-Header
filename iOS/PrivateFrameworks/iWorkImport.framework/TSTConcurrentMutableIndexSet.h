//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface TSTConcurrentMutableIndexSet : NSObject
{
    struct _opaque_pthread_rwlock_t mRWLock;
    NSMutableIndexSet *mMutableIndexSet;
}

- (void)removeAllIndexes;
- (void)addIndex:(unsigned long long)arg1;
- (void)enumerateIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

