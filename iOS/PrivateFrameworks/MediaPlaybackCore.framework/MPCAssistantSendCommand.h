//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCAssistantConnection, MPCAssistantDiscovery;

@interface MPCAssistantSendCommand : NSObject
{
    MPCAssistantConnection *_connection;
    MPCAssistantDiscovery *_discovery;
}

- (void).cxx_destruct;
- (void *)_findEndpointFromEndpoints:(id)arg1 byGroupLeader:(id)arg2;
- (_Bool)_isAnyDeviceControllable:(id)arg1;
- (void)_sendCommand:(unsigned int)arg1 path:(void *)arg2 options:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_sendCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpoint:(void *)arg3 toDestination:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_formGroupAndSendCommand:(unsigned int)arg1 withOptions:(id)arg2 toExternalDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_checkForAccount:(id)arg1 destination:(id)arg2 origin:(void *)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toEndpointDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 toLocalDestination:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end
