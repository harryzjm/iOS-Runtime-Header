//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CNObservable, CNScheduler;

@interface _CNScheduledObservable
{
    id <CNObservable> _observable;
    id <CNScheduler> _scheduler;
}

- (void).cxx_destruct;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1 scheduler:(id)arg2;

@end

