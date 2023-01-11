//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUTResult, NSMutableArray, NSRecursiveLock;

@interface _CUTLockingPromise
{
    NSRecursiveLock *_lock;
    _Bool _done;
    CUTResult *_result;
    NSMutableArray *_resultBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableArray *resultBlocks; // @synthesize resultBlocks=_resultBlocks;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool done; // @synthesize done=_done;
- (void)registerResultBlock:(CDUnknownBlockType)arg1;
- (void)_fulfillWithResult:(id)arg1;
- (id)init;

@end
