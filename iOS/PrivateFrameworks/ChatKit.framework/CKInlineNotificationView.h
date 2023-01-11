//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;
@protocol CKInlineNotificationViewDelegate;

__attribute__((visibility("hidden")))
@interface CKInlineNotificationView : UIView
{
    _Bool _visible;
    _Bool _animatingVisibility;
    id <CKInlineNotificationViewDelegate> _delegate;
    UIView *_clippingView;
    UIView *_containerView;
    UIVisualEffectView *_backdropView;
    UIView *_bottomLineView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animatingVisibility; // @synthesize animatingVisibility=_animatingVisibility;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak id <CKInlineNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool visible;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_invalidateContentViewHeight;
@property(readonly, nonatomic) _Bool _shouldSuppressLayout;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UIView *contentView;

@end
