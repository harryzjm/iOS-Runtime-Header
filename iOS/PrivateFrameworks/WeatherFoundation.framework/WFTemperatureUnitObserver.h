//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface WFTemperatureUnitObserver : NSObject
{
    struct os_unfair_lock_s _dataSynchronizationLock;
    int _userTemperatureUnit;
    NSObject<OS_dispatch_queue> *_temperatureUnitUpdateQueue;
    NSMutableDictionary *_blockObserversForUUID;
    NSHashTable *_observerObjects;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property int userTemperatureUnit; // @synthesize userTemperatureUnit=_userTemperatureUnit;
@property(retain) NSHashTable *observerObjects; // @synthesize observerObjects=_observerObjects;
@property(retain) NSMutableDictionary *blockObserversForUUID; // @synthesize blockObserversForUUID=_blockObserversForUUID;
@property struct os_unfair_lock_s dataSynchronizationLock; // @synthesize dataSynchronizationLock=_dataSynchronizationLock;
@property(retain) NSObject<OS_dispatch_queue> *temperatureUnitUpdateQueue; // @synthesize temperatureUnitUpdateQueue=_temperatureUnitUpdateQueue;
- (void)removeAllObservers;
- (void)q_notifyObserversOfUpdatedTemperatureUnit:(int)arg1;
- (void)q_updateTemperatureUnit;
- (void)_updateTemperatureUnit;
- (_Bool)removeBlockObserverWithHandle:(id)arg1;
- (id)addBlockObserver:(CDUnknownBlockType)arg1;
- (_Bool)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) int temperatureUnit;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
