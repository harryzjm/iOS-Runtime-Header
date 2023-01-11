//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFConnectableObservable-Protocol.h>

@class MFCancelationToken, MFObservable, NSLock, NSString;
@protocol MFObservable, MFObserver;

__attribute__((visibility("hidden")))
@interface _MFConnectableObservable <MFConnectableObservable>
{
    id <MFObservable> _observable;
    MFObservable<MFObserver> *_subject;
    NSLock *_lock;
    MFCancelationToken *_cancelable;
}

- (void)_disconnect;
- (id)connect;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 subject:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

