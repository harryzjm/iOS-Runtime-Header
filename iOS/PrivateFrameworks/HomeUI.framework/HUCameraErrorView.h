//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSString, UIImageView, UILabel;

@interface HUCameraErrorView : UIStackView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIStackView *_labelStackView;
}

@property(readonly, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *titleText;
- (id)init;

@end

