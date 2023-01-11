//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SORequestQueue : NSObject
{
    NSMutableArray *_queue;
    id _processingItem;
    CDUnknownBlockType _processItemBlock;
}

+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType processItemBlock; // @synthesize processItemBlock=_processItemBlock;
- (void).cxx_destruct;
- (id)description;
- (void)_itemCompleted;
- (void)_processItem:(id)arg1;
- (void)removeAllRequestsWithBlock:(CDUnknownBlockType)arg1;
- (void)processNextRequest;
- (void)enqueueRequest:(id)arg1;
- (id)init;

@end
