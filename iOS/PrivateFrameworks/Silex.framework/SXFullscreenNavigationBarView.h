//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UIVisualEffectView;
@protocol SXFullscreenNavigationBarViewDelegate;

@interface SXFullscreenNavigationBarView : UIView
{
    _Bool _expanded;
    id <SXFullscreenNavigationBarViewDelegate> _delegate;
    UIVisualEffectView *_backgroundView;
    UIButton *_button;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <SXFullscreenNavigationBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doneButtonPressed:(id)arg1;
- (void)createDoneButton;
- (void)createBackgroundView;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateFrameAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (id)init;

@end
