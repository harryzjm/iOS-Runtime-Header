//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsFoundation/_CNAmbObserverDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString;

@interface _CNAmbObservable <_CNAmbObserverDelegate>
{
    NSArray *_observables;
    NSMapTable *_tokensByObserver;
    _Bool _winnerDeclared;
}

- (void).cxx_destruct;
- (void)cancelRemainingObservables;
- (void)observerWillRelayEvent:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservables:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
