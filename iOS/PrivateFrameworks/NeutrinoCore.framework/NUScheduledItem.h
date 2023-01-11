//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface NUScheduledItem : NSObject
{
    unsigned long long _scheduledTime;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

@property(readonly) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) unsigned long long scheduledTime; // @synthesize scheduledTime=_scheduledTime;
- (void).cxx_destruct;
- (void)dispatch;
- (long long)compare:(id)arg1;
- (id)initWithScheduledTime:(unsigned long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
