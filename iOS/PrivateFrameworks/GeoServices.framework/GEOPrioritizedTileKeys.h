//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOPrioritizedTileKeys : NSObject
{
    void *_keysAndPriorities;
}

- (void)removeKey:(const struct _GEOTileKey *)arg1;
- (_Bool)popHighestPriorityKey:(struct _GEOTileKey *)arg1 priority:(unsigned int *)arg2;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned int highestPriority;
- (void)setPriority:(unsigned int)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (void)dealloc;
- (id)initWithKeys:(id)arg1 priorities:(id)arg2;
- (id)init;

@end

