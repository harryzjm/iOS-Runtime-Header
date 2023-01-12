//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSData, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface CKBusinessMacToolbarView : UIView
{
    _Bool _showingInStandAloneWindow;
    NSData *_bannerImageData;
    double _preferredHeight;
    UIView *_leftItemView;
    UIImage *_bannerImage;
    UILabel *_fallbackTitleLabel;
    struct CGRect _detailsPopoverFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *fallbackTitleLabel; // @synthesize fallbackTitleLabel=_fallbackTitleLabel;
@property(retain, nonatomic) UIImage *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain, nonatomic) UIView *leftItemView; // @synthesize leftItemView=_leftItemView;
@property(nonatomic) struct CGRect detailsPopoverFrame; // @synthesize detailsPopoverFrame=_detailsPopoverFrame;
@property(nonatomic) _Bool showingInStandAloneWindow; // @synthesize showingInStandAloneWindow=_showingInStandAloneWindow;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) NSData *bannerImageData; // @synthesize bannerImageData=_bannerImageData;
- (struct CGSize)_maxSizeForImage:(id)arg1;
- (void)_updateBannerImage:(id)arg1;
- (id)_generateScaledImageFromBannerData;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setFallbackTitleColor:(id)arg1;
- (void)setFallbackTitle:(id)arg1;
- (void)layoutSubviews;

@end

