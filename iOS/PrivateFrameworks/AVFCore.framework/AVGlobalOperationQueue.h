//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue;

__attribute__((visibility("hidden")))
@interface AVGlobalOperationQueue : NSObject
{
    NSOperationQueue *_operationQueue;
}

+ (id)defaultQueue;
@property(readonly, copy) NSArray *unfinishedOperations;
- (void)enqueueOperation:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

