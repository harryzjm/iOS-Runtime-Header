//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, VGExternalAccessoryModelFilter, VGExternalAccessoryState, VGVehicle, VGVehicleState;
@protocol OS_dispatch_queue, VGExternalAccessoryUpdating;

__attribute__((visibility("hidden")))
@interface VGExternalAccessory : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    VGExternalAccessoryModelFilter *_modelFilter;
    id <VGExternalAccessoryUpdating> _accessoryUpdateDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <VGExternalAccessoryUpdating> accessoryUpdateDelegate; // @synthesize accessoryUpdateDelegate=_accessoryUpdateDelegate;
- (void)listCarsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getStateOfChargeForVehicle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isConnectedToAccessoryWithIdentifier:(id)arg1;
- (_Bool)isConnectedToVehicle:(id)arg1;
- (id)_firmwareId;
- (id)_bluetoothIdentifier;
- (id)_identifier;
- (_Bool)_isConnectedToCarPlayAccessory;
- (_Bool)_isConnectedToElectricVehicle;
- (_Bool)_isConnectedVehicleAllowlisted;
- (id)_modelIdFromArguments:(id)arg1;
- (_Bool)_currentStatePassesEVRoutingRequirements;
- (id)_vehicleStateForCurrentState;
- (id)_vehicleForCurrentState;
- (void)_notifyDelegateWithCurrentVehicle;
- (void)_updateFromVehicleInfo:(id)arg1;
- (void)_accessoryDidUpdateVehicle:(id)arg1;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)_accessoryDidConnect:(id)arg1;
- (_Bool)_isAccessoryTracked:(id)arg1;
- (void)_removeCarPlayAccessory:(id)arg1;
- (void)_addNewCarPlayAccessory:(id)arg1;
- (void)_checkAvailableAccessoriesAndAttachIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

