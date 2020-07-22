//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFActivityAdvertiserClient-Protocol.h>
#import <Sharing/SFCompanionXPCManagerObserver-Protocol.h>

@class NSString, SFInternalAdvertisement;
@protocol SFActivityAdvertiserDelegate, SFActivityAdvertiserProtocol;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient>
{
    _Bool _xpcSetupInProgress;
    id <SFActivityAdvertiserDelegate> _delegate;
    id <SFActivityAdvertiserProtocol> _connectionProxy;
    SFInternalAdvertisement *_currentAdvertisement;
}

+ (id)sharedAdvertiser;
@property(retain) SFInternalAdvertisement *currentAdvertisement; // @synthesize currentAdvertisement=_currentAdvertisement;
@property(retain) id <SFActivityAdvertiserProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property _Bool xpcSetupInProgress; // @synthesize xpcSetupInProgress=_xpcSetupInProgress;
@property id <SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pairedDevicesChanged:(id)arg1;
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;
- (void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSFPeerDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchLoginIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)xpcManagerDidResumeConnection:(id)arg1;
- (void)xpcManagerConnectionInterrupted;
- (void)setupProxyIfNeeded;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

