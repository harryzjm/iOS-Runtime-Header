//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPAVItem;

@protocol MPQueueBehaviorManaging <NSObject>
@property(readonly, nonatomic) _Bool userCanChangeShuffleAndRepeatType;
@property(readonly, nonatomic) long long playbackMode;
@property(readonly, nonatomic) _Bool canSkipToPreviousItem;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, nonatomic) _Bool allowsUserVisibleUpcomingItems;
- (_Bool)canSkipToPreviousItemForItem:(MPAVItem *)arg1;
- (_Bool)canSkipItem:(MPAVItem *)arg1;
@end

