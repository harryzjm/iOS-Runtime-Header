//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailFoundation/EFObserver-Protocol.h>

@class EFQueue, NSError, NSLock, NSMutableArray, NSString;

@interface _EFReplayObservable <EFObserver>
{
    NSLock *_lock;
    _Bool _isStopped;
    NSError *_error;
    EFQueue *_queue;
    NSMutableArray *_observers;
}

- (void).cxx_destruct;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidComplete;
- (void)observerDidReceiveResult:(id)arg1;
- (void)_unsubscribe:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
