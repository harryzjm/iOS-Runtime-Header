//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputDevice, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAPSyncOutputDeviceCommunicationChannelManager : NSObject
{
    AVOutputDevice *_parentOutputDevice;
    NSString *_deviceID;
    struct OpaqueAPSyncController *_syncController;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    struct __CFDictionary *_communicationChannelsForUUIDs;
}

- (void).cxx_destruct;
@property __weak AVOutputDevice *parentOutputDevice; // @synthesize parentOutputDevice=_parentOutputDevice;
- (void)_didCloseCommChannelWithUUID:(struct __CFString *)arg1 forDeviceWithID:(struct __CFString *)arg2;
- (void)_didReceiveData:(struct __CFData *)arg1 fromDeviceWithID:(struct __CFString *)arg2 fromChannelWithUUID:(struct __CFString *)arg3;
- (void)_saveCommChannel:(id)arg1 forUUID:(struct __CFString *)arg2;
- (void)openCommunicationChannelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithDeviceID:(id)arg1 syncController:(struct OpaqueAPSyncController *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

