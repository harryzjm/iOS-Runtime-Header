//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDFitnessMachineConnectionInitiatorProtocol-Protocol.h>

@class NSString;
@protocol HDFitnessMachinePairingManagerDelegate;

@interface HDFitnessMachinePairingManager : NSObject <HDFitnessMachineConnectionInitiatorProtocol>
{
    id <HDFitnessMachinePairingManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <HDFitnessMachinePairingManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setActivityType:(unsigned long long)arg1;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)deliverError:(id)arg1;
- (void)updatedConnectionStateWithError:(id)arg1;
- (void)updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)updatedFitnessMachine;
- (void)workoutAppIsReady;
- (void)simulateAccept;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)handleBLEConnectionCompletedSuccessfully:(_Bool)arg1;
- (void)reset;
- (id)initWithProfile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
