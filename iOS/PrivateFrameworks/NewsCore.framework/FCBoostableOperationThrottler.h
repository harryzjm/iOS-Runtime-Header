//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottler-Protocol.h>

@protocol FCBoostableOperationThrottlerDelegate, OS_dispatch_queue;

@interface FCBoostableOperationThrottler : NSObject <FCOperationThrottler>
{
    _Bool _workPending;
    struct os_unfair_lock_s _workPendingLock;
    unsigned long long _mergedData;
    id <FCBoostableOperationThrottlerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_serialWorkQueue;
    long long _workPendingQualityOfService;
    unsigned long long _workPendingMergedData;
}

- (void).cxx_destruct;
@property(nonatomic) struct os_unfair_lock_s workPendingLock; // @synthesize workPendingLock=_workPendingLock;
@property(nonatomic) unsigned long long workPendingMergedData; // @synthesize workPendingMergedData=_workPendingMergedData;
@property(nonatomic) long long workPendingQualityOfService; // @synthesize workPendingQualityOfService=_workPendingQualityOfService;
@property(nonatomic) _Bool workPending; // @synthesize workPending=_workPending;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialWorkQueue; // @synthesize serialWorkQueue=_serialWorkQueue;
@property(nonatomic) __weak id <FCBoostableOperationThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long mergedData; // @synthesize mergedData=_mergedData;
@property _Bool suspended;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)tickle;
- (void)tickleWithQualityOfService:(long long)arg1 data:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)tickleWithQualityOfService:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tickleWithQualityOfService:(long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end
