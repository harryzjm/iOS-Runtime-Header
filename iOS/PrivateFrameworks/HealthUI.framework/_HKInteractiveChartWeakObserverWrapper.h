//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HKInteractiveChartViewObserver;

@interface _HKInteractiveChartWeakObserverWrapper : NSObject
{
    id <HKInteractiveChartViewObserver> _observer;
}

@property(readonly, nonatomic) __weak id <HKInteractiveChartViewObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1;

@end
