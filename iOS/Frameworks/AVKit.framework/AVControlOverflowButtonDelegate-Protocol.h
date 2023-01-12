//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVControlOverflowButton, NSArray;

@protocol AVControlOverflowButtonDelegate <NSObject>
- (NSArray *)overflowMenuItemsForControlOverflowButton:(AVControlOverflowButton *)arg1;

@optional
- (void)overflowButtonDidHideContextMenu:(AVControlOverflowButton *)arg1;
- (void)overflowButtonWillShowContextMenu:(AVControlOverflowButton *)arg1;
@end

