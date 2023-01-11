//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class ASVBadgeView, ASVLoadingView, NSError, NSLayoutConstraint, UIImage, UIImageView;

@interface ASVThumbnailButton : UIButton
{
    ASVLoadingView *_loadingView;
    ASVBadgeView *_badgeView;
    UIImageView *_imageView;
    NSLayoutConstraint *_badgeTopConstraint;
    NSLayoutConstraint *_badgeTrailingConstraint;
}

+ (id)thumbnailButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateSubviewVisibility;
- (void)setHighlighted:(_Bool)arg1;
@property(retain, nonatomic) NSError *error;
@property(retain, nonatomic) UIImage *thumbnail;
- (void)_setupButton;

@end
