//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NLSeymourAvailabilityObserver;

@protocol NLSeymourAvailabilityObservable
- (void)notifyObservers;
- (void)removeObserver:(id <NLSeymourAvailabilityObserver>)arg1;
- (void)addObserver:(id <NLSeymourAvailabilityObserver>)arg1;
@property(nonatomic, readonly) id observers;
@end

