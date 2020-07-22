//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UIImage, UIImageView;

@interface PKImageViewCell : UITableViewCell
{
    _Bool _matchCellBackgroundToImage;
    long long _imageViewContentMode;
}

@property(nonatomic) _Bool matchCellBackgroundToImage; // @synthesize matchCellBackgroundToImage=_matchCellBackgroundToImage;
@property(nonatomic) long long imageViewContentMode; // @synthesize imageViewContentMode=_imageViewContentMode;
- (void)setContentMode:(long long)arg1;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) UIImageView *imageView; // @dynamic imageView;

@end

