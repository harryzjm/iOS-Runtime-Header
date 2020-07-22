//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXHearingSupport/AXHARemoteUpdateProtocol-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol AXHAServerDelegate;

@interface AXHAServer <AXHARemoteUpdateProtocol>
{
    NSMutableDictionary *_responseBlocks;
    _Bool _hearingAidReachableForAudioTransfer;
    _Bool _hearingAidConnectedOrReachable;
    NSArray *_availableHearingAids;
    NSArray *_availableControllers;
    NSMutableDictionary *_updates;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *updates; // @synthesize updates=_updates;
@property(nonatomic) _Bool hearingAidConnectedOrReachable; // @synthesize hearingAidConnectedOrReachable=_hearingAidConnectedOrReachable;
@property(nonatomic) _Bool hearingAidReachableForAudioTransfer; // @synthesize hearingAidReachableForAudioTransfer=_hearingAidReachableForAudioTransfer;
@property(retain, nonatomic) NSArray *availableControllers; // @synthesize availableControllers=_availableControllers;
@property(retain, nonatomic) NSArray *availableHearingAids; // @synthesize availableHearingAids=_availableHearingAids;
- (void).cxx_destruct;
- (void)stopLiveListen;
- (void)startLiveListen;
- (void)registerListener:(id)arg1 forLiveListenLevelsHandler:(CDUnknownBlockType)arg2;
- (_Bool)updateReachabilityAndWait:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hearingAidReachable;
- (void)cancelHearingAidConnectionRequest;
- (void)requestHearingAidConnectionWithReason:(long long)arg1;
- (void)connectToControllerWithID:(id)arg1;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)registerListener:(id)arg1 forPropertyUpdateHandler:(CDUnknownBlockType)arg2;
- (void)registerListener:(id)arg1 forAvailableDeviceHandler:(CDUnknownBlockType)arg2;
- (void)registerResponseBlock:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (void)registerUpdateBlock:(id)arg1 forIdentier:(unsigned long long)arg2 withListener:(id)arg3;
- (void)unregisterUpdateListener:(id)arg1;
- (void)liveListenDidUpdate:(id)arg1;
- (void)availableDevicesDidUpdate:(id)arg1;
- (void)deviceDidUpdateProperty:(id)arg1;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (void)resetConnection;
- (void)startServerWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AXHAServerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

