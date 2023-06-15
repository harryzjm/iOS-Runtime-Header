//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MUGradientView, MUScrollableStackView, NSArray, NSString, UIVisualEffectView;
@protocol MUScrollableSegmentedPickerContentViewDelegate;

__attribute__((visibility("hidden")))
@interface MUScrollableSegmentedPickerContentView : UIView
{
    MUScrollableStackView *_contentStackView;
    UIVisualEffectView *_backgroundBlurView;
    UIVisualEffectView *_selectedPillView;
    MUGradientView *_leadingGradientOverlayView;
    MUGradientView *_trailingGradientOverlayView;
    NSArray *_viewModels;
    unsigned long long _selectedIndex;
    id <MUScrollableSegmentedPickerContentViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MUScrollableSegmentedPickerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_updateGradientColors;
- (void)_updateForContentSizeCategoryChange;
- (void)_handleTapWithSegmentView:(id)arg1;
- (void)_updateGradientVisibility;
- (void)_updateAppearance;
- (void)_updateSelectedIndexAnimated:(_Bool)arg1 invokeDelegate:(_Bool)arg2;
- (void)_setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2 invokeDelegate:(_Bool)arg3;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)idealWidthForProposedSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

