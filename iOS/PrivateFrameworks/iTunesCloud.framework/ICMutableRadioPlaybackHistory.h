//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICRadioPlaybackHistoryItem, NSArray;

@interface ICMutableRadioPlaybackHistory
{
}

- (void)_updateTracksUsingBlock:(CDUnknownBlockType)arg1;
- (void)_checkCurrentTrackIsPresent;
@property(copy, nonatomic) NSArray *tracks; // @dynamic tracks;
@property(nonatomic) long long numberOfSkips; // @dynamic numberOfSkips;
@property(copy, nonatomic) ICRadioPlaybackHistoryItem *currentTrack; // @dynamic currentTrack;
- (void)replaceTrackAtIndex:(long long)arg1 withTrack:(id)arg2;
- (void)removeTracksAtIndexes:(id)arg1;
- (void)removeExpiredTracks;
- (void)addTracks:(id)arg1;
- (void)addTrack:(id)arg1;

@end
