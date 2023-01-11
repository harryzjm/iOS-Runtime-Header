//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject
{
    _Bool _isCelsius;
    NSHashTable *_observers;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) _Bool isCelsius; // @synthesize isCelsius=_isCelsius;
- (void)_temperatureUnitDidChange;
- (void)_updateIsCelsiusNotifyingObservers:(_Bool)arg1;
- (void)setIsCelsius:(_Bool)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)init;

@end
