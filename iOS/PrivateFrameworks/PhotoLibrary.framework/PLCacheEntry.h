//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface PLCacheEntry : NSObject
{
    id _object;
    struct lruEntry *_entry;
}

- (struct lruEntry *)lruListEntry;
- (id)object;
- (void)setObject:(id)arg1;
- (void)dealloc;

@end
