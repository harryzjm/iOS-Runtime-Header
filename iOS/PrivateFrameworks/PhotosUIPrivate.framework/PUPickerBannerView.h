//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSString, PUStackView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPickerBannerView : UIView
{
    _Bool __animatingStackView;
    unsigned long long _style;
    NSArray *_images;
    NSString *_title;
    UIView *_leftView;
    UIView *_rightView;
    long long __alignment;
    UILabel *__label;
    PUStackView *__stackView;
    CDUnknownBlockType __animationCompletionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setAnimationCompletionHandler:) CDUnknownBlockType _animationCompletionHandler; // @synthesize _animationCompletionHandler=__animationCompletionHandler;
@property(nonatomic, setter=_setAnimatingStackView:) _Bool _animatingStackView; // @synthesize _animatingStackView=__animatingStackView;
@property(retain, nonatomic, setter=_setStackView:) PUStackView *_stackView; // @synthesize _stackView=__stackView;
@property(retain, nonatomic, setter=_setLabel:) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic, setter=_setAlignment:) long long _alignment; // @synthesize _alignment=__alignment;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateLabel;
- (void)_updateStackView;
- (void)_updateAlignment;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_frameReversedIfRightToLeft:(_Bool)arg1 frame:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

