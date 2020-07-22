//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUtilities/AXIDCSlaveController.h>

#import <AXHearingSupport/AXHARemoteControllerProtocol-Protocol.h>
#import <AXHearingSupport/AXHARemoteUpdateProtocol-Protocol.h>
#import <AXHearingSupport/NSNetServiceDelegate-Protocol.h>

@class AXHADispatchTimer, AXRemoteHearingAidDevice, NSString;

@interface AXHearingSlaveController : AXIDCSlaveController <NSNetServiceDelegate, AXHARemoteUpdateProtocol, AXHARemoteControllerProtocol>
{
    _Bool didValidateHIID;
    AXHADispatchTimer *_communicationTimer;
    AXRemoteHearingAidDevice *_localDevice;
}

@property(retain, nonatomic) AXRemoteHearingAidDevice *localDevice; // @synthesize localDevice=_localDevice;
@property(retain, nonatomic) AXHADispatchTimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property(nonatomic) _Bool didValidateHIID; // @synthesize didValidateHIID;
- (void).cxx_destruct;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (id)device;
- (void)resetConnection;
- (_Bool)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)receivedData:(id)arg1;
- (void)didCommunicate;
- (void)openConnectionIfNecessary;
- (void)validatePairedAid;
- (_Bool)shouldAcceptConnection;
- (double)searchTimeout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
