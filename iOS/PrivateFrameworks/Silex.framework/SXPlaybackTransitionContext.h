//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SXPlaybackCoordinator, SXVideoView, UIView;

@interface SXPlaybackTransitionContext : NSObject
{
    UIView *_containerView;
    SXVideoView *_fromVideoView;
    SXVideoView *_toVideoView;
    SXPlaybackCoordinator *_fromPlaybackCoordinator;
    SXPlaybackCoordinator *_toPlaybackCoordinator;
    unsigned long long _direction;
}

@property(readonly, nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) SXPlaybackCoordinator *toPlaybackCoordinator; // @synthesize toPlaybackCoordinator=_toPlaybackCoordinator;
@property(readonly, nonatomic) SXPlaybackCoordinator *fromPlaybackCoordinator; // @synthesize fromPlaybackCoordinator=_fromPlaybackCoordinator;
@property(readonly, nonatomic) SXVideoView *toVideoView; // @synthesize toVideoView=_toVideoView;
@property(readonly, nonatomic) SXVideoView *fromVideoView; // @synthesize fromVideoView=_fromVideoView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)initWithContainerView:(id)arg1 fromVideoView:(id)arg2 toVideoView:(id)arg3 fromPlaybackCoordinator:(id)arg4 toPlaybackCoordinator:(id)arg5 direction:(unsigned long long)arg6;

@end
