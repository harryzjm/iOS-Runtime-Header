//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WBSSocket;
@protocol OS_dispatch_queue, OS_dispatch_source, WBSCyclerSecondaryDeviceCoordinatorDelegate;

@interface WBSCyclerSecondaryDeviceCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    WBSSocket *_connection;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    id <WBSCyclerSecondaryDeviceCoordinatorDelegate> _delegate;
}

@property __weak id <WBSCyclerSecondaryDeviceCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_timeoutTimerDidFire;
- (void)_didReceiveData:(id)arg1;
- (void)_didEncounterError:(id)arg1;
- (void)_didConnect;
- (void)sendDataToPrimaryDevice:(id)arg1;
- (void)connectToPrimaryDeviceAtAddress:(id)arg1 port:(unsigned long long)arg2 timeout:(double)arg3;
- (id)init;

@end
