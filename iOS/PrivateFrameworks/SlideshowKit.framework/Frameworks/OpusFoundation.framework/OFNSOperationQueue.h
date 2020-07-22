//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperationQueue.h>

@class NSMutableIndexSet, NSObject, NSPointerArray;
@protocol OS_dispatch_queue;

@interface OFNSOperationQueue : NSOperationQueue
{
    NSObject<OS_dispatch_queue> *_operationsLookupTableQueue;
    NSPointerArray *_operationsLookupTable;
    NSMutableIndexSet *_operationsLookupTableFreeIndices;
}

- (void)cancelSlideshowOperationWithID:(unsigned long long)arg1;
- (unsigned long long)addOperation:(id)arg1 withPriority:(long long)arg2;
- (id)_operationLookupObjectForKey:(unsigned long long)arg1;
- (void)_setOperationLookupObject:(id)arg1 forKey:(unsigned long long)arg2;
- (void)_setupOperationsLookupTable;
- (void)cancelAllOperationsWithContext:(id)arg1 andIdentifier:(id)arg2;
- (void)cancelAllOperationsWithIdentifier:(id)arg1;
- (void)cancelAllOperationsWithContext:(id)arg1;
- (void)addOperation:(id)arg1 context:(id)arg2 identifier:(id)arg3 queuePriority:(long long)arg4;
- (void)dealloc;
- (id)init;

@end

