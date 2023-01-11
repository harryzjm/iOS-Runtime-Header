//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MPCAssistantDiscovery : NSObject
{
    void *_reconSession;
}

- (void)_discoverAirplayDevices:(CDUnknownBlockType)arg1;
- (void)stopDiscovery;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end
