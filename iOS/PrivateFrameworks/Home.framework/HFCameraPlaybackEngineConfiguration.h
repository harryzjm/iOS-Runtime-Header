//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFCameraPlaybackPosition, HMCameraProfile, HMHome, NSUUID;
@protocol HFCameraClipScrubbing, HFCameraLiveStreamControlling;

@interface HFCameraPlaybackEngineConfiguration : NSObject
{
    HMHome *_home;
    HMCameraProfile *_cameraProfile;
    HFCameraPlaybackPosition *_playbackPosition;
    id <HFCameraClipScrubbing> _clipScrubber;
    CDUnknownBlockType _clipPlayerBuilder;
    id <HFCameraLiveStreamControlling> _liveStreamController;
    NSUUID *_notificationUUID;
    NSUUID *_notificationClipUUID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *notificationClipUUID; // @synthesize notificationClipUUID=_notificationClipUUID;
@property(retain, nonatomic) NSUUID *notificationUUID; // @synthesize notificationUUID=_notificationUUID;
@property(retain, nonatomic) id <HFCameraLiveStreamControlling> liveStreamController; // @synthesize liveStreamController=_liveStreamController;
@property(copy, nonatomic) CDUnknownBlockType clipPlayerBuilder; // @synthesize clipPlayerBuilder=_clipPlayerBuilder;
@property(nonatomic) __weak id <HFCameraClipScrubbing> clipScrubber; // @synthesize clipScrubber=_clipScrubber;
@property(retain, nonatomic) HFCameraPlaybackPosition *playbackPosition; // @synthesize playbackPosition=_playbackPosition;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (void)assertConfigurationIsValid;
- (id)initWithHome:(id)arg1 cameraProfile:(id)arg2;

@end
