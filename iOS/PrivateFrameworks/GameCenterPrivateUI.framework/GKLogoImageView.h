//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UIImage, UIImageView, UILabel;

@interface GKLogoImageView : UICollectionReusableView
{
    UILabel *_titleLabel;
    UIImageView *_imageView;
}

+ (void)updateLogoImageHeight:(double)arg1;
+ (double)defaultHeight;
@property(nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)intrinsicContentSize;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)_addAndConstraintSubview:(id)arg1;
- (void)_coreInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
