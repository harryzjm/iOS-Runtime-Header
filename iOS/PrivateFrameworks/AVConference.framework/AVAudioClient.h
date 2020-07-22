//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVAudioDeviceList;

@interface AVAudioClient : NSObject
{
    AVAudioDeviceList *deviceList;
}

+ (_Bool)setOutputDevice:(id)arg1;
+ (_Bool)setInputDevice:(id)arg1;
+ (id)currentOutputDevice;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
+ (_Bool)isMicrophoneMuted;
+ (void)setMicrophoneMuted:(_Bool)arg1;
+ (_Bool)hasActiveAudioSession;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)stopAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)initializeAudioSessionQ;
@property(retain, nonatomic) AVAudioDeviceList *deviceList; // @synthesize deviceList;
- (id)outputDevices;
- (id)inputDevices;
- (id)devices;
@property(nonatomic) CDUnknownBlockType changeListener;
- (void)dealloc;
- (id)init;

@end
