//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NLExternalSeymourSessionStatusObserver;

@protocol NLExternalSeymourSessionStatusObservable
- (void)notifyObservers;
- (void)removeObserver:(id <NLExternalSeymourSessionStatusObserver>)arg1;
- (void)addObserver:(id <NLExternalSeymourSessionStatusObserver>)arg1;
@property(nonatomic, readonly) id observers;
@end

