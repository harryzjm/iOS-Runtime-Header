//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUAudioDeviceControllerActions-Protocol.h>

@class AVAudioClient, AVAudioDevice, NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions>
{
    AVAudioClient *_audioClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSHashTable *_delegates;
    id <TUAudioDeviceControllerActions> _actionsDelegate;
}

@property(nonatomic) __weak id <TUAudioDeviceControllerActions> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) AVAudioClient *audioClient; // @synthesize audioClient=_audioClient;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *outputDevices;
@property(readonly, nonatomic) NSArray *inputDevices;
@property(readonly, nonatomic) NSArray *devices;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
@property(retain, nonatomic) AVAudioDevice *currentOutputDevice;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
@property(retain, nonatomic) AVAudioDevice *currentInputDevice;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)choosePreferredDeviceIfNecessary;
@property(readonly, copy) NSString *debugDescription;
- (id)init;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
