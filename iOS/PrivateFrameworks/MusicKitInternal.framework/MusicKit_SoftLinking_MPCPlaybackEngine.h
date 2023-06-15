//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPCPlaybackEngine : NSObject
{
    MPCPlaybackEngine *_underlyingPlaybackEngine;
    _Bool _systemMusicApplication;
    _Bool _audioAnalyzerEnabled;
    _Bool _pictureInPictureSupported;
    _Bool _videoSupported;
    _Bool _stateRestorationSupported;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isStateRestorationSupported, setter=musicKit_setStateRestorationSupported:) _Bool stateRestorationSupported; // @synthesize stateRestorationSupported=_stateRestorationSupported;
@property(nonatomic, getter=isVideoSupported, setter=musicKit_setVideoSupported:) _Bool videoSupported; // @synthesize videoSupported=_videoSupported;
@property(nonatomic, getter=isPictureInPictureSupported, setter=musicKit_setPictureInPictureSupported:) _Bool pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property(nonatomic, getter=isAudioAnalyzerEnabled, setter=musicKit_setAudioAnalyzerEnabled:) _Bool audioAnalyzerEnabled; // @synthesize audioAnalyzerEnabled=_audioAnalyzerEnabled;
@property(nonatomic, getter=isSystemMusicApplication, setter=musicKit_setSystemMusicApplication:) _Bool systemMusicApplication; // @synthesize systemMusicApplication=_systemMusicApplication;
- (void)restoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)becomeActive;
- (void)start;
- (void)setStateRestorationSupported:(_Bool)arg1;
- (void)setVideoSupported:(_Bool)arg1;
- (void)setPictureInPictureSupported:(_Bool)arg1;
- (void)setAudioAnalyzerEnabled:(_Bool)arg1;
- (void)setSystemMusicApplication:(_Bool)arg1;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
@property(readonly, copy, nonatomic) NSString *playerID;
- (id)initWithPlayerID:(id)arg1 options:(unsigned long long)arg2 fallbackPlaybackIntent:(id)arg3;

@end

