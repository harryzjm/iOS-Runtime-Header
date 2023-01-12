//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol AVPictureInPictureSampleBufferPlaybackDelegate;

__attribute__((visibility("hidden")))
@interface AVSampleBufferDisplayLayerPlaybackDelegateAdapter : NSObject
{
    id <AVPictureInPictureSampleBufferPlaybackDelegate> _playbackDelegate;
}

+ (id)playbackDelegateAdapterWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <AVPictureInPictureSampleBufferPlaybackDelegate> playbackDelegate; // @synthesize playbackDelegate=_playbackDelegate;
- (void)pictureInPictureController:(id)arg1 skipByInterval:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pictureInPictureController:(id)arg1 didTransitionToRenderSize:(CDStruct_1ef3fb1f)arg2;
- (_Bool)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (CDStruct_e83c9415)pictureInPictureControllerTimeRangeForPlayback:(id)arg1;
- (void)pictureInPictureController:(id)arg1 setPlaying:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

