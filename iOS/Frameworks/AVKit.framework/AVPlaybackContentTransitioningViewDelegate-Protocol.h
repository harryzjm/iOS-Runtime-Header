//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlaybackContentContainerView, AVPlaybackContentTransitioningView;

@protocol AVPlaybackContentTransitioningViewDelegate <NSObject>
- (void)contentTransitioningViewDidChangeTransitionStatus:(AVPlaybackContentTransitioningView *)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;
- (AVPlaybackContentContainerView *)contentTransitioningPlayerContentViewForTransition:(AVPlaybackContentTransitioningView *)arg1;
- (_Bool)contentTransitioningView:(AVPlaybackContentTransitioningView *)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
- (_Bool)contentTransitioningViewShouldBeginDragging:(AVPlaybackContentTransitioningView *)arg1 locationInView:(struct CGPoint)arg2;
@end
