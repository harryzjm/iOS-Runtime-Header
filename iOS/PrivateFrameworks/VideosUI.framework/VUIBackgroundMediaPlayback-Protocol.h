//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString, TVPPlayer, VUIMediaInfo;

@protocol VUIBackgroundMediaPlayback
- (NSObject *)notificationObject;
- (void)setMediaInfo:(VUIMediaInfo *)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setMediaInfos:(NSArray *)arg1 animated:(_Bool)arg2;
- (void)removeMediaInfoAtIndex:(unsigned long long)arg1;
- (void)appendMediaInfos:(NSArray *)arg1;
- (void)stop;
- (void)play;
- (void)pause;
- (void)setControlsVisible:(_Bool)arg1;
- (void)transitionToFullScreenAnimated:(_Bool)arg1;
- (void)transitionToForeground:(_Bool)arg1 withPlaybackControls:(_Bool)arg2 animated:(_Bool)arg3;
- (void)transitionToForeground:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsPlaybackControlsInForeground;
@property(nonatomic, copy) NSString *videoGravity;
@property(nonatomic) unsigned long long imageSwappingAnimationType;
@property(nonatomic) double playbackStartDelay;
@property(nonatomic) unsigned long long imageContentMode;
@property(nonatomic) _Bool animateImageChange;
@property(nonatomic) _Bool clearPreviousImageBeforeLoading;
@property(nonatomic) _Bool stopPlayerWhenExitingFullScreen;
- (_Bool)shouldStopPlayerWhenExitingFullScreen;
@property(nonatomic) _Bool stopPlayerWhenViewDisappears;
- (_Bool)shouldStopPlayerWhenViewDisappears;
@property(nonatomic) _Bool playbackEnabled;
- (_Bool)isPlaybackEnabled;
- (_Bool)isForeground;
@property(nonatomic, readonly) unsigned long long state;
@property(nonatomic) unsigned long long mediaInfoIndex;
@property(nonatomic, copy) NSArray *mediaInfos;
@property(nonatomic, readonly) VUIMediaInfo *currentMediaInfo;
@property(nonatomic, retain) TVPPlayer *player;

// Remaining properties
@property(nonatomic, readonly) _Bool foreground;
@end

