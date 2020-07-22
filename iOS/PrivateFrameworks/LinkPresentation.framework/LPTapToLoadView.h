//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/CAAnimationDelegate-Protocol.h>
#import <LinkPresentation/UIGestureRecognizerDelegate-Protocol.h>

@class LPTapToLoadViewStyle, LPTextView, NSString, UILongPressGestureRecognizer, UIView;
@protocol LPTapToLoadViewDelegate;

__attribute__((visibility("hidden")))
@interface LPTapToLoadView <CAAnimationDelegate, UIGestureRecognizerDelegate>
{
    LPTextView *_captionView;
    UIView *_progressView;
    LPTapToLoadViewStyle *_style;
    UIView *_highlightView;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    _Bool _wasTapped;
    CDUnknownBlockType _animateOutCompletionHandler;
    id <LPTapToLoadViewDelegate> _delegate;
}

@property(nonatomic) __weak id <LPTapToLoadViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateOutWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_animateToProgressView;
- (void)_tapRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (void)_didScroll;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_createIndeterminateProgressIndicator;
- (void)_buildViews;
- (void)layoutComponentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

