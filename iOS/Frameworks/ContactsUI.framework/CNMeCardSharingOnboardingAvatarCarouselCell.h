//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, NSUUID, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell
{
    NSUUID *_displaySessionUUID;
    double _imageInsetPercentage;
    UIImageView *_imageView;
    UILabel *_label;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double imageInsetPercentage; // @synthesize imageInsetPercentage=_imageInsetPercentage;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

