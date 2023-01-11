//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>
#import <NewsUI/NUVideoPlaybackCounter-Protocol.h>
#import <NewsUI/NUVideoPlayerEventTracker-Protocol.h>

@class NSString;

@interface NUVideoPlaybackCounter : NSObject <NUVideoPlayerEventTracker, NUVideoPlaybackCounter, NUAdContextProvider>
{
    unsigned long long numberOfVideosPlayedSinceLastAd;
    unsigned long long numberOfVideosPlayedInSession;
}

@property(nonatomic) unsigned long long numberOfVideosPlayedInSession; // @synthesize numberOfVideosPlayedInSession;
- (void)resetNumberOfVideosPlayedSinceLastAd;
- (void)setNumberOfVideosPlayedSinceLastAd:(unsigned long long)arg1;
- (void)incrementNumberOfVideosPlayedSinceLastAd;
- (void)incrementNumberOfVideosPlayedInSession;
- (id)adContextValueForKeyPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfVideosPlayedSinceLastAd; // @synthesize numberOfVideosPlayedSinceLastAd;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
