//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CLSNSOperationsManager : NSObject
{
    struct os_unfair_recursive_lock_s _lock;
    NSMutableArray *_operations;
}

- (void).cxx_destruct;
- (void)performOperation:(id)arg1 onOperationQueue:(id)arg2 withTimeOut:(double)arg3;
- (unsigned long long)count;
- (void)removeOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)unlock;
- (void)lock;
- (id)init;

@end
