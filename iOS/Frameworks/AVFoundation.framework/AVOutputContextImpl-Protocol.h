//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/NSObject-Protocol.h>
#import <AVFoundation/NSSecureCoding-Protocol.h>

@class AVOutputContext, AVOutputContextCommunicationChannel, AVOutputDevice, NSArray, NSDictionary, NSString;

@protocol AVOutputContextImpl <NSObject, NSSecureCoding>
+ (_Bool)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)outputContextImplForID:(NSString *)arg1;
+ (id)outputContextImplForControllingOutputDeviceGroupWithID:(NSString *)arg1 options:(NSDictionary *)arg2;
+ (id)iTunesAudioContext;
+ (id)sharedSystemScreenContext;
+ (id)sharedSystemAudioContext;
+ (id)platformDependentScreenOrVideoContext;
+ (id)auxiliaryOutputContext;
+ (id)sharedAudioPresentationOutputContext;
@property(readonly, nonatomic) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property(readonly) _Bool canSetVolume;
@property(readonly) float volume;
@property(readonly) _Bool providesControlForAllVolumeFeatures;
@property(readonly) NSArray *outputDevices;
@property(readonly) _Bool supportsMultipleOutputDevices;
@property(readonly, copy, nonatomic) NSString *associatedAudioDeviceID;
@property(readonly, nonatomic) AVOutputDevice *outputDevice;
@property(readonly, nonatomic) NSString *outputContextType;
@property(readonly, nonatomic) NSString *ID;
@property __weak AVOutputContext *parentOutputContext;
- (AVOutputContextCommunicationChannel *)openCommunicationChannelWithOptions:(NSDictionary *)arg1 error:(id *)arg2;
- (void)muteAllOutputDevicesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setVolume:(float)arg1;
- (void)removeOutputDevice:(AVOutputDevice *)arg1;
- (void)addOutputDevice:(AVOutputDevice *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg3;
- (void)setOutputDevices:(NSArray *)arg1;
- (void)outputContextDidChangeApplicationProcessID:(AVOutputContext *)arg1;
- (void)setOutputDevice:(AVOutputDevice *)arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(AVOutputContextDestinationChange *))arg3;
@end

