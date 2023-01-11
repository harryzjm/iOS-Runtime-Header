//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HMMediaSessionDelegate-Protocol.h>

@class HMMediaSession, NSError;

@protocol HFMediaSessionObserver <HMMediaSessionDelegate>

@optional
- (void)mediaSessionDidUpdate:(HMMediaSession *)arg1;
- (void)mediaSession:(HMMediaSession *)arg1 failedToUpdatePlaybackStateWithError:(NSError *)arg2;
- (void)mediaSession:(HMMediaSession *)arg1 didUpdatePlaybackState:(long long)arg2;
- (void)mediaSession:(HMMediaSession *)arg1 willUpdatePlaybackState:(long long)arg2;
@end
