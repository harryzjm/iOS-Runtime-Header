//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCMutexLock, NSArray, NSMutableArray;

@interface FCThreadSafeMutableArray : NSObject
{
    FCMutexLock *_mutexLock;
    NSMutableArray *_array;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *readOnlyArray;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (void)addObject:(id)arg1;
- (id)init;

@end
