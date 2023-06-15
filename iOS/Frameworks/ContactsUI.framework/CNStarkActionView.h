//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UIColor, UIImage, UILabel;
@protocol CNStarkActionViewDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkActionView : UIView
{
    _Bool _enabled;
    _Bool _selected;
    _Bool _disabledButtonFocused;
    NSString *_actionType;
    NSString *_title;
    id <CNStarkActionViewDelegate> _delegate;
    double _actionPlatterSize;
    double _actionLabelOffset;
    double _actionBorderWidth;
    UIColor *_disabledStrokeColor;
    UIColor *_disabledFillColor;
    UIColor *_disabledGlyphColor;
    UIColor *_enabledStrokeColor;
    UIColor *_enabledFillColor;
    UIColor *_enabledGlyphColor;
    UIColor *_selectedStrokeColor;
    UIColor *_selectedFillColor;
    UIColor *_selectedGlyphColor;
    UIImage *_image;
    UIButton *_button;
    UILabel *_label;
}

+ (id)propertyTransportButtonWithDelegate:(id)arg1;
+ (id)quickActionButtonWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool disabledButtonFocused; // @synthesize disabledButtonFocused=_disabledButtonFocused;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property(retain, nonatomic) UIColor *selectedFillColor; // @synthesize selectedFillColor=_selectedFillColor;
@property(retain, nonatomic) UIColor *selectedStrokeColor; // @synthesize selectedStrokeColor=_selectedStrokeColor;
@property(retain, nonatomic) UIColor *enabledGlyphColor; // @synthesize enabledGlyphColor=_enabledGlyphColor;
@property(retain, nonatomic) UIColor *enabledFillColor; // @synthesize enabledFillColor=_enabledFillColor;
@property(retain, nonatomic) UIColor *enabledStrokeColor; // @synthesize enabledStrokeColor=_enabledStrokeColor;
@property(retain, nonatomic) UIColor *disabledGlyphColor; // @synthesize disabledGlyphColor=_disabledGlyphColor;
@property(retain, nonatomic) UIColor *disabledFillColor; // @synthesize disabledFillColor=_disabledFillColor;
@property(retain, nonatomic) UIColor *disabledStrokeColor; // @synthesize disabledStrokeColor=_disabledStrokeColor;
@property(nonatomic) double actionBorderWidth; // @synthesize actionBorderWidth=_actionBorderWidth;
@property(nonatomic) double actionLabelOffset; // @synthesize actionLabelOffset=_actionLabelOffset;
@property(nonatomic) double actionPlatterSize; // @synthesize actionPlatterSize=_actionPlatterSize;
@property(readonly, nonatomic) __weak id <CNStarkActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void)stateUpdated;
- (void)updateForFocusedState:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)notifyDelegateAboutUserChoice;
- (void)choose;
- (void)deselect;
- (void)select;
- (void)clickGestureDidUpdate:(id)arg1;
- (void)actionViewTouchUp:(id)arg1;
- (void)actionViewTouchDown:(id)arg1;
- (void)actionViewTapped:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setupClickGestureRecognizer;
- (void)setupConstraints;
- (void)setupButton;
- (void)setupLabel;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

