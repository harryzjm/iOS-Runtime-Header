//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PLAtomicObject : NSObject
{
    struct os_unfair_lock_s _lock;
    id _object;
}

- (void).cxx_destruct;
- (void)atomicallyPerformBlockAndWait:(CDUnknownBlockType)arg1;
- (void)atomicSetObject:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)init;

@end
