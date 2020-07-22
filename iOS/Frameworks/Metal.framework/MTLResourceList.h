//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class MTLResourceListPool;

@interface MTLResourceList : NSObject
{
    struct {
        unsigned short buckets[64];
        unsigned int numEntries;
        unsigned int capacity;
        struct MTLResourceListEntry *entries;
        MTLResourceListPool *pool;
        struct {
            MTLResourceList *tqe_next;
            id *tqe_prev;
        } entry;
        unsigned long long time_added;
    } _listPriv;
}

- (void)dealloc;
- (void)releaseAllObjectsAndReset;
- (id)initWithCapacity:(int)arg1;

@end

