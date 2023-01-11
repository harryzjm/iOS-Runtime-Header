//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailFoundation/EFConnectableObservable-Protocol.h>

@class EFCancelationToken, NSLock, NSString;
@protocol EFObservable, EFObservable><EFObserver;

@interface _EFConnectableObservable <EFConnectableObservable>
{
    id <EFObservable> _observable;
    id <EFObservable><EFObserver> _subject;
    NSLock *_lock;
    EFCancelationToken *_cancelable;
}

- (void).cxx_destruct;
- (void)_disconnect;
- (id)connect;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 subject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
