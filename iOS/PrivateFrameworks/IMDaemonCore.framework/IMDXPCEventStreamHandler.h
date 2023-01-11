//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface IMDXPCEventStreamHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
}

@property(readonly, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)didReceiveEventWithName:(id)arg1 userInfo:(id)arg2;
- (id)queueForDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithEventStreamName:(const char *)arg1;
- (id)init;

@end
