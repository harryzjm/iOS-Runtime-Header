//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ContinuousReadingItem, NSString, SFBannerTheme, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface ContinuousReadingBannerView : UIView
{
    UIView *_topHairline;
    UIView *_bottomHairline;
    ContinuousReadingItem *_continuousReadingItem;
    SFBannerTheme *_theme;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    struct UIEdgeInsets _topHairlineInsets;
}

+ (id)hairlineColor;
+ (id)makeHairlineSeparator;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SFBannerTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) struct UIEdgeInsets topHairlineInsets; // @synthesize topHairlineInsets=_topHairlineInsets;
@property(readonly, retain, nonatomic) ContinuousReadingItem *continuousReadingItem; // @synthesize continuousReadingItem=_continuousReadingItem;
- (double)_textBaseline;
- (void)_updateImage;
- (struct CGSize)_scaledImageSize;
- (void)_updateLabels;
- (id)_bottomHairline;
- (id)_topHairline;
@property(readonly, nonatomic) struct CGRect titleRect;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithContinuousReadingItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

