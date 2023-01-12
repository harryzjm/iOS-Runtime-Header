//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MUHairlineView, MUPlaceRibbonItemViewModel, NSString, UITapGestureRecognizer;
@protocol MULabelViewProtocol;

__attribute__((visibility("hidden")))
@interface MUPlaceRibbonItemView : UIView
{
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_valueLabel;
    MUHairlineView *_trailingHairlineView;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_selectRecognizer;
    CDUnknownBlockType _actionHandler;
    MUPlaceRibbonItemViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MUPlaceRibbonItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)ribbonItemViewModelDidUpdate:(id)arg1;
- (void)endAnimatingActivityIndicatorWithError:(id)arg1;
- (void)beginAnimatingActivityIndicator;
- (void)_setAXIdentifierWithItemType:(id)arg1;
- (void)_updateLabelWithAlpha:(double)arg1;
- (void)_handleTap;
@property(nonatomic) _Bool showTrailingHairline;
- (void)_updateValueText;
- (void)_updateGestureRecognizers;
- (void)_updateAppearance;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

