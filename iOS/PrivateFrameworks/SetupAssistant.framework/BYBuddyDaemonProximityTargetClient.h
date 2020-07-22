//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistant/BYBuddyDaemonProximityTargetProtocol-Protocol.h>
#import <SetupAssistant/BYDaemonProximityTargetProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol BYBuddyDaemonProximityTargetProtocol;

@interface BYBuddyDaemonProximityTargetClient : NSObject <BYDaemonProximityTargetProtocol, BYBuddyDaemonProximityTargetProtocol>
{
    id <BYBuddyDaemonProximityTargetProtocol> _delegate;
    NSXPCConnection *_connection;
}

+ (id)proximityTargetClientInterface;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property __weak id <BYBuddyDaemonProximityTargetProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)receivedLanguage:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4;
- (void)proximityConnectionTerminated;
- (void)proximityConnectionInitiated;
- (void)proximityConnectionPreparing:(id)arg1;
- (void)dismissProximityPinCode;
- (void)displayProximityPinCode:(id)arg1 visual:(_Bool)arg2;
- (void)proximititySetupCompleted:(id)arg1;
- (void)storeHandshake:(id)arg1;
- (void)storeInformation:(id)arg1;
- (void)resumeProximitySetup:(CDUnknownBlockType)arg1;
- (void)hasConnection:(CDUnknownBlockType)arg1;
- (void)sendData:(id)arg1;
- (void)endPairing;
- (void)endAdvertisingProximitySetup;
- (void)beginAdvertisingProximitySetup;
- (void)connectToDaemon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

