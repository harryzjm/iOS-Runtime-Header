//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PXVideoScrubberController;

@protocol PXVideoScrubberControllerDelegate <NSObject>

@optional
- (void)videoScrubberControllerPlayerItemDidChange:(PXVideoScrubberController *)arg1;
- (void)videoScrubberController:(PXVideoScrubberController *)arg1 desiredSeekTime:(CDStruct_1b6d18a9)arg2;
- (void)videoScrubberControllerDidUpdate:(PXVideoScrubberController *)arg1;
- (double)videoScrubberController:(PXVideoScrubberController *)arg1 lengthForDuration:(double)arg2;
@end

