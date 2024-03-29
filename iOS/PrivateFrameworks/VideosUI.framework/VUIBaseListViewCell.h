//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIColor, UIView, UIVisualEffectView, _UIFloatingContentView;
@protocol VUIBaseListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIBaseListViewCell : UICollectionViewCell
{
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    UIVisualEffectView *_backgroundVisualEffectView;
    _Bool _visualEffectViewBackgroundEnabled;
    _Bool _disabled;
    _Bool _shouldAppearSelected;
    _UIFloatingContentView *_floatingView;
    id <VUIBaseListViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <VUIBaseListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool visualEffectViewBackgroundEnabled; // @synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled;
- (void)_updateSelectedBackgroundColor;
- (unsigned long long)_floatingViewControlState;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)contentView;
@property(readonly, nonatomic) UIView *vuiContentView;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)_descendantsShouldHighlight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

