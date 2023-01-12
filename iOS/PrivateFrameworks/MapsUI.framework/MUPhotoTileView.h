//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MUBadgeView, MUGradientView, MUImageView, MUPhotoTileOverlay, UIImageView, UILabel;
@protocol MUPhotoTileViewModel;

__attribute__((visibility("hidden")))
@interface MUPhotoTileView : UIView
{
    MUImageView *_imageView;
    UILabel *_titleLabel;
    MUBadgeView *_vendorBadge;
    MUGradientView *_titleGradientView;
    UIView *_yourPhotosView;
    MUImageView *_yourPhotosImageView;
    UILabel *_yourPhotosViewLabel;
    MUPhotoTileOverlay *_photoOverlay;
    id <MUPhotoTileViewModel> _viewModel;
    CDUnknownBlockType _actionHandler;
    struct CGSize _targetFrameSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(retain, nonatomic) id <MUPhotoTileViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MUPhotoTileOverlay *photoOverlay; // @synthesize photoOverlay=_photoOverlay;
@property(nonatomic) struct CGSize targetFrameSize; // @synthesize targetFrameSize=_targetFrameSize;
- (void)_updateAppearance;
- (void)_updateOverlay;
@property(readonly, nonatomic) UIImageView *contentImageView;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

