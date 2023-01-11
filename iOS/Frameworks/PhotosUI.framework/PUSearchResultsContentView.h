//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, PXRoundedCornerOverlayView, UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsContentView : UIView
{
    NSAttributedString *_attributedTitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_auxSubtitleLabel;
    UIView *_imageContentView;
    PXRoundedCornerOverlayView *_cornerOverlayView;
    _Bool _highlighted;
    NSAttributedString *_title;
    NSString *_subtitle;
    NSString *_auxSubtitle;
    unsigned long long _imageCropStyle;
    UIColor *_highlightColor;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long imageCropStyle; // @synthesize imageCropStyle=_imageCropStyle;
@property(copy, nonatomic) NSString *auxSubtitle; // @synthesize auxSubtitle=_auxSubtitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_preferredContentSizeChanged:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateCornerOverlayViewRadius;
- (void)_updateAuxSubtitleLabel;
- (void)_updateSubtitleLabel;
- (void)_updateTitleLabel;
- (void)layoutMarginsDidChange;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

