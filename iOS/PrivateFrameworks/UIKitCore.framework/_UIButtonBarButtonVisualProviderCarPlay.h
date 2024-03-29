//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIButtonBarButtonVisualProvider.h"

@class NSArray, NSLayoutConstraint, NSMutableDictionary, UIImageView, UILabel, UIView;
@protocol _UIButtonBarAppearanceDelegate;

__attribute__((visibility("hidden")))
@interface _UIButtonBarButtonVisualProviderCarPlay : _UIButtonBarButtonVisualProvider
{
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIView *_focusedView;
    UIImageView *_backView;
    UIImageView *_imageView;
    UILabel *_titleView;
    NSArray *_titleAlternatives;
    NSMutableDictionary *_titleAlterntativeLookup;
    NSArray *_buttonConstraints;
    NSLayoutConstraint *_maxTitleViewWidthConstraint;
    NSLayoutConstraint *_backViewToContentConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *backViewToContentConstraint; // @synthesize backViewToContentConstraint=_backViewToContentConstraint;
@property(retain, nonatomic) NSLayoutConstraint *maxTitleViewWidthConstraint; // @synthesize maxTitleViewWidthConstraint=_maxTitleViewWidthConstraint;
@property(retain, nonatomic) NSArray *buttonConstraints; // @synthesize buttonConstraints=_buttonConstraints;
@property(retain, nonatomic) NSMutableDictionary *titleAlterntativeLookup; // @synthesize titleAlterntativeLookup=_titleAlterntativeLookup;
@property(retain, nonatomic) NSArray *titleAlternatives; // @synthesize titleAlternatives=_titleAlternatives;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *focusedView; // @synthesize focusedView=_focusedView;
@property(nonatomic) __weak id <_UIButtonBarAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
- (void)_setupAlternateTitlesFromBarButtonItem:(id)arg1;
- (id)_titleAlternativeForTitle:(id)arg1;
- (_Bool)supportsBackButtons;
- (void)updateButton:(id)arg1 forHighlightedState:(_Bool)arg2;
- (void)updateButton:(id)arg1 forFocusedState:(_Bool)arg2;
- (void)buttonLayoutSubviews:(id)arg1 baseImplementation:(CDUnknownBlockType)arg2;
- (void)configureButton:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)_selectGestureChanged:(id)arg1;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (id)contentView;
- (id)backIndicatorView;

@end

