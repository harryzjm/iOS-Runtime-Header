//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface WLKUIAppCell : UICollectionViewCell
{
    UIImage *_image;
    NSString *_title;
    _Bool _didLayout;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;

@end
