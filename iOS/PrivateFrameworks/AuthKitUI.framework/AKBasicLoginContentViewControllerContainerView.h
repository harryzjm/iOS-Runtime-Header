//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIImage, UIImageView, UILabel;

@interface AKBasicLoginContentViewControllerContainerView : UIView
{
    UIImage *_bannerImage;
    NSString *_titleText;
    NSString *_messageText;
    UIImageView *_bannerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSArray *_activeConstraints;
}

@property(retain, nonatomic) NSArray *activeConstraints; // @synthesize activeConstraints=_activeConstraints;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(copy, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)_configureMessageLabel;
- (void)_configureBannerImage;
- (void)updateConstraints;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

