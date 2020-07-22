//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ContactsUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSString, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNActionViewDelegate, CNActionViewTemplateImage;

@interface CNActionView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _disabled;
    _Bool _highlighted;
    id <CNActionViewDelegate> _actionDelegate;
    UIImage *_image;
    NSString *_title;
    NSString *_type;
    long long _style;
    UIView *_platterView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    NSArray *_activatedContstrants;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UILongPressGestureRecognizer *_highlightGestureRecognizer;
    id <CNActionViewTemplateImage> _templateImage;
}

+ (void)fadeInView:(id)arg1;
+ (id)contentColorForDisabledVibrantDarkState;
+ (id)contentColorForDisabledBoldState;
+ (id)borderColorForDisabledBoldState;
@property(retain, nonatomic) id <CNActionViewTemplateImage> templateImage; // @synthesize templateImage=_templateImage;
@property(retain, nonatomic) UILongPressGestureRecognizer *highlightGestureRecognizer; // @synthesize highlightGestureRecognizer=_highlightGestureRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *activatedContstrants; // @synthesize activatedContstrants=_activatedContstrants;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <CNActionViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleHighlightGesture:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)updateLabelStateAnimated:(_Bool)arg1;
- (void)updateImageViewStateAnimated:(_Bool)arg1;
- (void)updatePlatterViewStateAnimated:(_Bool)arg1;
- (struct CGRect)rectForTitleLabelForFont:(id)arg1 fittingSize:(struct CGSize)arg2;
- (struct CGRect)rectForPlatterView;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (double)intrinsicContentWidth;
- (void)tintColorDidChange;
- (void)didMoveToWindow;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDisabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
