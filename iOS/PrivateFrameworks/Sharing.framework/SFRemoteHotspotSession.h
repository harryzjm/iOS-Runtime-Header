//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/SFCompanionXPCManagerObserver-Protocol.h>
#import <Sharing/SFRemoteHotspotClient-Protocol.h>

@class NSString;
@protocol SFRemoteHotspotProtocol, SFRemoteHotspotSessionDelegate;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>
{
    _Bool _browsing;
    id <SFRemoteHotspotSessionDelegate> _delegate;
    id <SFRemoteHotspotProtocol> _connectionProxy;
}

@property(retain) id <SFRemoteHotspotProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property _Bool browsing; // @synthesize browsing=_browsing;
@property id <SFRemoteHotspotSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)xpcManagerConnectionInterrupted;
- (void)updatedFoundDeviceList:(id)arg1;
- (void)enableRemoteHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enableHotspotForDevice:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopBrowsing;
- (void)startBrowsing;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
