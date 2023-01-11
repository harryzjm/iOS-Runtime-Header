//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFMutexLock, NSMutableSet, NSSet;

@interface FCThreadSafeMutableSet : NSObject
{
    NFMutexLock *_mutexLock;
    NSMutableSet *_set;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *readOnlySet;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)removeObjectsInSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end

