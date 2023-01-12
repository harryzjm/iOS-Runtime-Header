//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DVTDeviceStateManager, DVTDispatchLock, DVTLocalComputer, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet;

@interface DVTDeviceManager : NSObject
{
    DVTDeviceStateManager *_stateManager;
    NSMutableDictionary *_locatorTrackers;
    NSMapTable *_observingTokens;
    NSMutableSet *_availableDevices;
    DVTLocalComputer *_localComputer;
    DVTDispatchLock *_startStopLocatingLock;
    DVTDispatchLock *_availableDevicesLock;
}

+ (id)defaultDeviceManager;
+ (void)initialize;
- (void).cxx_destruct;
- (id)deviceLocatorForDeviceType:(id)arg1;
- (id)searchForDevicesWithType:(id)arg1 options:(id)arg2 timeout:(double)arg3 error:(id *)arg4;
- (id)searchForDeviceWithType:(id)arg1 options:(id)arg2 genericOnly:(_Bool)arg3 timeout:(double)arg4 error:(id *)arg5;
- (id)_searchForDevicesWithType:(id)arg1 options:(id)arg2 genericOnly:(_Bool)arg3 allowMultiple:(_Bool)arg4 timeout:(double)arg5 error:(id *)arg6;
- (id)_waitForDeviceUsingLocatorsToOptions:(id)arg1 genericOnly:(_Bool)arg2 allowMultiple:(_Bool)arg3 timeout:(double)arg4 error:(id *)arg5;
- (id)_lookUpAvailableDevicesUsingLocatorsToOptions:(id)arg1 genericOnly:(_Bool)arg2 allowMultiple:(_Bool)arg3 error:(id *)arg4;
- (id)_deviceLocatorForDeviceSpecifierPrefix:(id)arg1 error:(id *)arg2;
- (_Bool)locateOnlyLocalComputerWithError:(id *)arg1;
- (void)locateOnlyLocalComputer;
- (void)stopLocating;
- (_Bool)startLocatingWithError:(id *)arg1;
- (void)startLocating;
- (void)_updateDefaultsForDevice:(id)arg1;
- (void)_adjustAvailableDevicesForChangeKind:(unsigned long long)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3;
- (void)_stopObservingDevice:(id)arg1;
- (void)_startObservingDevice:(id)arg1;
@property(readonly, copy) NSSet *deviceLocators;
- (id)deviceAtDeviceLocation:(id)arg1;
- (id)_deviceLocatorForDeviceLocationScheme:(id)arg1;
- (id)devicesMatchingPredicate:(id)arg1;
@property(readonly) DVTLocalComputer *localComputer;
- (id)init;
@property(copy) NSSet *availableDevices; // @dynamic availableDevices;

// Remaining properties
@property(readonly, copy) NSMutableSet *mutableAvailableDevices; // @dynamic mutableAvailableDevices;

@end
