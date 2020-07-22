//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVOutputContextImpl-Protocol.h>

@class AVOutputContext, AVOutputContextCommunicationChannel, AVOutputDevice, AVWeakReference, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface AVFigEndpointPickerOutputContextImpl : NSObject <AVOutputContextImpl>
{
    AVOutputContext *_parentContext;
    NSObject<OS_dispatch_queue> *_pickerQueue;
    struct OpaqueFigEndpointPicker *_endpointPicker;
    unsigned long long _featureForCurrentPicker;
    struct __CFString *_contextUUID;
    _Bool _isSystemPicker;
    AVWeakReference *_weakReference;
}

+ (_Bool)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (struct OpaqueFigEndpointPicker *)copySystemVideoPicker;
+ (_Bool)supportsSecureCoding;
+ (id)outputContextImplForID:(id)arg1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)platformDependentScreenOrVideoContext;
+ (id)auxiliaryOutputContext;
+ (id)sharedAudioPresentationOutputContext;
+ (void)initialize;
@property __weak AVOutputContext *parentOutputContext; // @synthesize parentOutputContext=_parentContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
- (void)setVolume:(float)arg1;
@property(readonly) _Bool canSetVolume;
@property(readonly) float volume;
@property(readonly) _Bool providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)arg1;
- (void)addOutputDevice:(id)arg1;
- (void)setOutputDevices:(id)arg1;
@property(readonly) NSArray *outputDevices;
- (_Bool)setOutputDevice:(id)arg1 options:(id)arg2;
@property(readonly, nonatomic) AVOutputDevice *outputDevice;
@property(readonly, copy, nonatomic) NSString *associatedAudioDeviceID;
- (void)outputContextDidChangeApplicationProcessID:(id)arg1;
- (id)endpointPickerUUID;
@property(readonly, nonatomic) NSString *outputContextType;
@property(readonly, nonatomic) NSString *ID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)_removeFigEndpointPickerNotifications;
- (void)_addFigEndpointPickerNotifications;
- (void)_handlePickerServerConnectionDiedNotification;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (id)initWithContextUUID:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
