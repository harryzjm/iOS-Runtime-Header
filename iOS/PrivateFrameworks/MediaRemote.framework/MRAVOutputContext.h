//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVOutputContext, MRAVOutputDeviceSourceInfo, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRAVOutputContext : NSObject
{
    NSArray *_outputDevices;
    MRAVOutputDeviceSourceInfo *_outputDeviceSourceInfo;
    NSMutableArray *_pendingModifications;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _isVolumeControlAvailable;
    _Bool _attemptingLogicalDeviceRecovery;
    _Bool _postOutputDeviceChangedScheduled;
    _Bool _postOutputDevicesChangedScheduled;
    _Bool _handleOutputDeviceChangedScheduled;
    _Bool _handleOutputDevicesChangedScheduled;
    _Bool _handleDiscoverySessionOutputDevicesChangedScheduled;
    unsigned int _type;
    NSString *_uniqueIdentifier;
    AVOutputContext *_avOutputContext;
}

+ (void)_initializeAVFNotificationForwarding;
+ (id)_sharedOutputContextFromType:(unsigned int)arg1;
+ (id)_notificationQueue;
+ (id)createOutputContextWithUniqueIdentifier:(id)arg1;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedAudioPresentationContext;
@property(readonly, nonatomic) AVOutputContext *avOutputContext; // @synthesize avOutputContext=_avOutputContext;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_scheduleOutputContextDevicesDidChangeNotification;
- (void)_scheduleOutputContextDeviceDidChangeNotification;
- (_Bool)_contextSupportsMultipleDevices;
- (void)_clearAnyCompletedModifications;
- (void)_commitModification:(id)arg1;
- (id)_pendingModifications;
- (void)_reloadOutputDevicesForInitialLoad:(_Bool)arg1;
- (void)_unregisterNotifications;
- (void)_handleOutputDeviceSupportsVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_registerNotifications;
- (void)_outputContextChangeInitiatedNotification:(id)arg1;
- (void)_handleDiscoverySessionOutputDevicesDidChangeNotification:(id)arg1;
- (void)_handleOutputDevicesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceDidChangeNotification:(id)arg1;
@property(nonatomic) float volume;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property(readonly, nonatomic) _Bool supportsVolumeControl;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)attemptLogicalDeviceRecovery;
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 callbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)localDevice;
@property(copy, nonatomic) NSArray *outputDevices;
- (id)description;
- (void)dealloc;
- (id)initWithAVOutputContext:(id)arg1 type:(unsigned int)arg2;

@end

