//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class NSString, TUICandidateBackdropView, UIView;
@protocol TUICandidateViewStyle;

@interface TUICandidateArrowButton : UIButton
{
    _Bool _showsBackground;
    NSString *_arrowImageName;
    long long _arrowDirection;
    id <TUICandidateViewStyle> _style;
    UIView *_contentView;
    UIView *_highlightBackgroundView;
    UIView *_backgroundView;
    TUICandidateBackdropView *_backdropView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TUICandidateBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *highlightBackgroundView; // @synthesize highlightBackgroundView=_highlightBackgroundView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
@property(copy, nonatomic) NSString *arrowImageName; // @synthesize arrowImageName=_arrowImageName;
@property(nonatomic) _Bool showsBackground; // @synthesize showsBackground=_showsBackground;
- (void)updateStyle;
- (id)rotatedImageForImage:(id)arg1 scale:(double)arg2;
- (double)imageViewAlpha;
- (void)udpateBackgroundColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end
