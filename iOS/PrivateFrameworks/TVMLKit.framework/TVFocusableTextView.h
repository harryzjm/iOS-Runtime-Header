//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVMLKit/_UIFloatingContentViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, _UIFloatingContentView;

@interface TVFocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate>
{
    UIVisualEffectView *_vibrantEffectView;
    UITextView *_auxilliaryTextView;
    _Bool _textTruncating;
    _Bool _moreLabelOnNewLine;
    _Bool _trackHorizontal;
    _Bool _alwaysFocusable;
    _Bool _needsTextSizeComputation;
    UIColor *_descriptionTextColor;
    UIColor *_descriptionTextHighlightColor;
    UIColor *_highlightBackgroundColor;
    double _moreHighlightPadding;
    UIColor *_moreLabelTextColor;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _playHandler;
    UITextView *_descriptionTextView;
    _UIFloatingContentView *_floatingView;
    UIVisualEffectView *_backgroundView;
    UITapGestureRecognizer *_selectRecognizer;
    UITapGestureRecognizer *_playRecognizer;
    UILabel *_moreLabel;
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;
}

+ (double)cornerRadius;
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // @synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic, getter=isAlwaysFocusable) _Bool alwaysFocusable; // @synthesize alwaysFocusable=_alwaysFocusable;
@property(nonatomic) _Bool trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(retain, nonatomic) UIColor *moreLabelTextColor; // @synthesize moreLabelTextColor=_moreLabelTextColor;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
- (void).cxx_destruct;
- (void)_playButtonAction:(id)arg1;
- (void)_selectButtonAction:(id)arg1;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)_moreLabelFrame;
- (id)_moreLabelExclusionPath;
- (void)_recomputeTextSizeIfNeeded;
- (void)_setNeedsTextSizeComputation;
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)updateForAccessibilityChanges;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

