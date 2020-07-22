//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputDeviceDiscoverySessionImpl-Protocol.h>

@class AVAudioSession, AVOutputDeviceDiscoverySession, AVOutputDeviceDiscoverySessionAvailableOutputDevices, AVWeakReference, NSString;
@protocol OS_dispatch_queue;

@interface AVFigEndpointPickerOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl>
{
    AVOutputDeviceDiscoverySession *_parentSession;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_queue> *_pickerQueue;
    struct OpaqueFigEndpointPicker *_endpointPicker;
    unsigned long long _features;
}

+ (void)initialize;
@property __weak AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession; // @synthesize parentOutputDeviceDiscoverySession=_parentSession;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool devicePresenceDetected;
@property(readonly, nonatomic) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
- (void)dealloc;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (void)_addFigEndpointPickerNotifications;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1;
@property(retain, nonatomic) AVAudioSession *targetAudioSession;
- (id)initWithDeviceFeatures:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
