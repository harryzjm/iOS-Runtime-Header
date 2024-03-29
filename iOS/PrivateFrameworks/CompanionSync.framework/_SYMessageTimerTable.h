//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _SYMessageTimerTable : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
    NSObject<OS_dispatch_queue> *_rwlock;
    NSMutableDictionary *_bySeqno;
    NSMutableDictionary *_byIdent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long timerCount;
- (void)cancelAllTimers;
- (void)cancelTimerForIdentifier:(id)arg1;
- (void)cancelTimerForSequenceNumber:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1 forSequenceNumber:(unsigned long long)arg2;
- (void)_cleanupTimerForSeqno:(unsigned long long)arg1;
- (void)_fireCallbackForSeqno:(unsigned long long)arg1;
- (void)addTimerWithFireDate:(id)arg1 forSequenceNumber:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 timerCallback:(CDUnknownBlockType)arg2;
- (id)init;

@end

