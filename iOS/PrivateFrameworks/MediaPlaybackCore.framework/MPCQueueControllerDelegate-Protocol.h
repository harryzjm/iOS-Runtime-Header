//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPAVItem, MPCQueueController, MPPlaybackContext, NSString;

@protocol MPCQueueControllerDelegate <NSObject>
- (void)queueController:(MPCQueueController *)arg1 didIncrementVersionForSegment:(NSString *)arg2;
- (void)queueController:(MPCQueueController *)arg1 didChangeActionAtQueueEnd:(long long)arg2;
- (void)queueController:(MPCQueueController *)arg1 didChangeShuffleType:(long long)arg2;
- (void)queueController:(MPCQueueController *)arg1 didChangeRepeatType:(long long)arg2;
- (void)queueController:(MPCQueueController *)arg1 didChangeContentsWithReplacementPlaybackContext:(MPPlaybackContext *)arg2;
- (void)queueController:(MPCQueueController *)arg1 failedToLoadItem:(MPAVItem *)arg2;
- (void)queueControllerDidChangeContents:(MPCQueueController *)arg1;
@end

