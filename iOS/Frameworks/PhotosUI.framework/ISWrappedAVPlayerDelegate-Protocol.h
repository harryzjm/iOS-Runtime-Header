//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUI/NSObject-Protocol.h>

@class AVPlayerItem, ISWrappedAVPlayer;

@protocol ISWrappedAVPlayerDelegate <NSObject>
- (void)avPlayerDidDeallocate;
- (void)avPlayer:(ISWrappedAVPlayer *)arg1 itemDidPlayToEnd:(AVPlayerItem *)arg2;
@end

