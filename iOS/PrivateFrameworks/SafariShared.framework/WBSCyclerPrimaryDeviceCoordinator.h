//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WBSSocketServer;
@protocol OS_dispatch_queue, OS_dispatch_source, WBSCyclerPrimaryDeviceCoordinatorDelegate;

@interface WBSCyclerPrimaryDeviceCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    WBSSocketServer *_server;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    unsigned long long _expectedNumberOfSecondaryDevices;
    id <WBSCyclerPrimaryDeviceCoordinatorDelegate> _delegate;
}

@property __weak id <WBSCyclerPrimaryDeviceCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_timeoutTimerDidFire;
- (void)_handleConnection:(id)arg1;
- (void)_didReceiveData:(id)arg1 fromSecondaryDevice:(unsigned long long)arg2;
- (void)_didEncounterError:(id)arg1;
- (void)_didConnectToAllSecondaryDevices;
- (void)_didReceivePortAssignment;
- (void)sendDataToAllSecondaryDevices:(id)arg1;
- (void)sendData:(id)arg1 toSecondaryDevice:(unsigned long long)arg2;
- (void)startCoordinatingWithExpectedNumberOfSecondaryDevices:(unsigned long long)arg1 timeout:(double)arg2;
- (id)init;

@end
