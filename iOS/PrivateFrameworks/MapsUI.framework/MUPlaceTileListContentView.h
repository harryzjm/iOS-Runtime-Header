//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionRowView.h"

@class MUImageView, NSString, UIImageView, UIView;
@protocol MULabelViewProtocol, MUPlaceTileViewModel;

__attribute__((visibility("hidden")))
@interface MUPlaceTileListContentView : MUPlaceSectionRowView
{
    UIView<MULabelViewProtocol> *_titleLabel;
    UIView<MULabelViewProtocol> *_secondaryLabel;
    UIView<MULabelViewProtocol> *_tertiaryLabel;
    MUImageView *_stopImageView;
    UIImageView *_tileImageView;
    id <MUPlaceTileViewModel> _viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MUPlaceTileViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UIImageView *tileImageView; // @synthesize tileImageView=_tileImageView;
- (void)_updateFonts;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateAppearance;
- (void)_setupConstraints;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

