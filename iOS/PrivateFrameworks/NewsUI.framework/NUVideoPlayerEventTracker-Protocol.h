//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NUVideoAdEventTracker-Protocol.h>
#import <NewsUI/NUVideoEventTracker-Protocol.h>

@protocol NUVideoPlayerEventTracker <NUVideoEventTracker, NUVideoAdEventTracker>

@optional
- (void)videoPlayerDidBecomeInvisible;
- (void)videoPlayerDidBecomeVisible;
@end
