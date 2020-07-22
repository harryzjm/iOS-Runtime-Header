//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MTSyncOperationQueue : NSObject
{
    NSMutableArray *_operations;
}

@property(retain, nonatomic) NSMutableArray *operations; // @synthesize operations=_operations;
- (void).cxx_destruct;
- (id)description;
- (void)removeAllOperations;
- (id)dequeue;
- (id)peek;
- (void)enqueue:(id)arg1;
- (_Bool)shouldEnqueue:(id)arg1;
- (id)init;

@end
