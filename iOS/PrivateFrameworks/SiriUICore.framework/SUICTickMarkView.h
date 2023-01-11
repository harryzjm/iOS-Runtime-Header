//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSLock, NSTimer;

@interface SUICTickMarkView : UIView
{
    CADisplayLink *_displayLink;
    _Bool _shown;
    long long _currentPreferredFrameRate;
    long long _currentFrame;
    int _animState;
    NSTimer *_safetyTimer;
    _Bool _completionCalled;
    CDUnknownBlockType _completionBlock;
    NSLock *_completionLock;
    long long _fadeInFrames;
    long long _pauseFrames;
    long long _fadeOutFrames;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)setHidden:(_Bool)arg1;
- (void)tearDownDisplayLink;
- (void)setUpDisplayLink;
- (void)handleSafetyTimer:(id)arg1;
- (struct CGImage *)imageMask:(_Bool)arg1;
- (void)startAnimationsForTickMark:(_Bool)arg1 fadeInFrames:(long long)arg2 pauseFrames:(long long)arg3 fadeOutFrames:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

