//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView;
@protocol CKQuickActionButtonAnimationDelegate, CKQuickActionButtonDelegate;

__attribute__((visibility("hidden")))
@interface CKQuickActionButton : UIView
{
    _Bool _animating;
    id <CKQuickActionButtonDelegate> _delegate;
    id <CKQuickActionButtonAnimationDelegate> _animationDelegate;
    unsigned long long _state;
    UIButton *_button;
    UIImageView *_imageView;
    UIView *_backgroundView;
    CAShapeLayer *_borderLayer;
    NSString *_currentAnimationIdentifier;
    NSMutableArray *_deferredAnimationIdentifiers;
    NSMutableDictionary *_deferredConfigurationStates;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *deferredConfigurationStates; // @synthesize deferredConfigurationStates=_deferredConfigurationStates;
@property(retain, nonatomic) NSMutableArray *deferredAnimationIdentifiers; // @synthesize deferredAnimationIdentifiers=_deferredAnimationIdentifiers;
@property(retain, nonatomic) NSString *currentAnimationIdentifier; // @synthesize currentAnimationIdentifier=_currentAnimationIdentifier;
@property(readonly, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <CKQuickActionButtonAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property(nonatomic) __weak id <CKQuickActionButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_buttonTouchUpInside;
- (void)_buttonTouchDown;
- (void)_buttonTouchCanceled;
- (void)setState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)configureForState:(unsigned long long)arg1 animated:(_Bool)arg2 identifier:(id)arg3 wasDeferred:(_Bool)arg4;
- (struct UIEdgeInsets)contentEdgeInsetsForState:(unsigned long long)arg1;
- (id)buttonImageForState:(unsigned long long)arg1;
- (double)delayForImageSwapAnimation;
- (double)delayForFinalizingAnimation;
- (double)animationDurationForState:(unsigned long long)arg1;
- (void)updateImageViewFrameForContentEdgeInsets;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInitialState:(unsigned long long)arg1;

@end

