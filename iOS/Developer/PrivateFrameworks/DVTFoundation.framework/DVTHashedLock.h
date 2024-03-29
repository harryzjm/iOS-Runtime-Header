//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DVTHashedLock : NSObject
{
    int _count;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } *_mutexes;
}

+ (id)sharedLock;
- (void)dealloc;
- (void)performWithHash:(unsigned long long)arg1 lockedBlock:(CDUnknownBlockType)arg2;
- (void)performWithObject:(id)arg1 lockedBlock:(CDUnknownBlockType)arg2;
- (id)initWithLockCount:(int)arg1;

@end

