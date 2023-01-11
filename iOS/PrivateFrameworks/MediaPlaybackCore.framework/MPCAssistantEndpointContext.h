//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCAssistantDiscovery, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MPCAssistantEndpointContext
{
    MPCAssistantDiscovery *_discoveryLogical;
    MPCAssistantDiscovery *_discoveryAudio;
    MPCAssistantDiscovery *_discoveryEndpoint;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_modificationInProgress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *modificationInProgress; // @synthesize modificationInProgress=_modificationInProgress;
- (void)_setOutputDevices:(id)arg1 onEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_discoverLocalEndpointFromDeviceInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateDiscoverableDeviceList:(id)arg1 deviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifySystemMusicContextForDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
