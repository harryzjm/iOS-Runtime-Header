//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BKHIDEventDeliveryResolutionObserver-Protocol.h>
#import <BackBoardHIDEventFoundation/BKSHIDEventObserverServerInterface-Protocol.h>

@class BKHIDEventDeliveryObserverServiceListener, BSMutableIntegerMap, NSMutableIndexSet, NSString;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDEventDeliveryResolutionObserver>
{
    BSMutableIntegerMap *_connectionsByPID;
    BKHIDEventDeliveryObserverServiceListener *_serviceListener;
    NSMutableIndexSet *_observerPIDs;
    struct os_unfair_lock_s _lock;
    BSMutableIntegerMap *_resolutionsByPID;
}

- (void).cxx_destruct;
- (id)setObservesDeferringResolutions:(id)arg1;
- (void)resolutionsDidChange:(id)arg1 forPID:(int)arg2;
- (void)removeConnectionForPID:(int)arg1;
- (void)addConnection:(id)arg1 forPID:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
