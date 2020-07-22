//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CNObservable;

@interface _CNOnEmptyObservable
{
    id <CNObservable> _observable;
    id <CNObservable> _nextObservable;
    _Bool _observableIsEmpty;
}

@property(retain, nonatomic) id <CNObservable> observable; // @synthesize observable=_observable;
- (void).cxx_destruct;
- (id)subscribeNextObservable:(id)arg1;
- (_Bool)isObservableEmpty;
- (void)observableDidSendResult;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 nextObservable:(id)arg2;

@end

