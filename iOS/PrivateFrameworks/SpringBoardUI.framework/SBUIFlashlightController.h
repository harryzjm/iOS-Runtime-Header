//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVFlashlight, NSHashTable;
@protocol OS_dispatch_queue;

@interface SBUIFlashlightController : NSObject
{
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    unsigned long long _level;
    NSHashTable *_observers;
    _Bool _overheated;
    _Bool _available;
}

+ (id)sharedInstance;
@property(readonly, nonatomic, getter=isAvailable) _Bool available; // @synthesize available=_available;
@property(readonly, nonatomic, getter=isOverheated) _Bool overheated; // @synthesize overheated=_overheated;
- (void).cxx_destruct;
- (unsigned long long)_loadFlashlightLevel;
- (void)_storeFlashlightLevel:(unsigned long long)arg1;
- (void)_turnPowerOff;
- (void)_turnPowerOn;
- (void)_setFlashlightLevel:(float)arg1;
- (void)_postLevelChangeNotification:(unsigned long long)arg1;
- (void)_postAvailabilityChangeNotification:(_Bool)arg1;
- (void)_postOverheatedChangeNotification:(_Bool)arg1;
- (void)_updateStateWithAvailable:(_Bool)arg1 level:(unsigned long long)arg2 overheated:(_Bool)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)coolDown;
- (void)warmUp;
@property(nonatomic) unsigned long long level;
- (void)turnFlashlightOffForReason:(id)arg1;
- (void)turnFlashlightOnForReason:(id)arg1;
- (id)init;

@end

