//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSTransactionLogTask, NSObject;
@protocol OS_dispatch_queue;

@interface IDSTransactionLogBaseTaskHandler
{
    IDSTransactionLogTask *_task;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) IDSTransactionLogTask *task; // @synthesize task=_task;
- (void)perform;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 queue:(id)arg3;

@end
