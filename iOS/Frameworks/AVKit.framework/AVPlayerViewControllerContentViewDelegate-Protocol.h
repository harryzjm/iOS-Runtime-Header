//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlayerViewControllerContentView, UIWindow;

@protocol AVPlayerViewControllerContentViewDelegate <NSObject>
- (struct UIEdgeInsets)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(AVPlayerViewControllerContentView *)arg1;
- (void)playerViewControllerContentView:(AVPlayerViewControllerContentView *)arg1 didMoveToWindow:(UIWindow *)arg2;
- (_Bool)playerViewControllerContentViewIsPlayingOnSecondScreen:(AVPlayerViewControllerContentView *)arg1;
@end

