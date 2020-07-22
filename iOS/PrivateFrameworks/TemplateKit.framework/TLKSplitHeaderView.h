//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TemplateKit/NUIContainerGridViewDelegate-Protocol.h>

@class NSString, NUIContainerGridView, TLKImage, TLKImageView, TLKMultilineText, TLKVibrantLabel;

@interface TLKSplitHeaderView <NUIContainerGridViewDelegate>
{
    TLKMultilineText *_title;
    TLKMultilineText *_subtitle1;
    TLKMultilineText *_subtitle2;
    TLKImage *_leadingImage;
    TLKMultilineText *_leadingTitle;
    TLKMultilineText *_leadingSubtitle;
    TLKImage *_trailingImage;
    TLKMultilineText *_trailingTitle;
    TLKMultilineText *_trailingSubtitle;
    NUIContainerGridView *_gridView;
    TLKImageView *_leadingImageView;
    TLKVibrantLabel *_leadingTitleLabel;
    TLKVibrantLabel *_leadingSubtitleLabel;
    TLKImageView *_trailingImageView;
    TLKVibrantLabel *_trailingTitleLabel;
    TLKVibrantLabel *_trailingSubtitleLabel;
    TLKVibrantLabel *_titleLabel;
    TLKVibrantLabel *_subtitle1Label;
    TLKVibrantLabel *_subtitle2Label;
    struct CGSize _fittingSize;
}

+ (id)footnoteFont;
@property struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(retain) TLKVibrantLabel *subtitle2Label; // @synthesize subtitle2Label=_subtitle2Label;
@property(retain) TLKVibrantLabel *subtitle1Label; // @synthesize subtitle1Label=_subtitle1Label;
@property(retain) TLKVibrantLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) TLKVibrantLabel *trailingSubtitleLabel; // @synthesize trailingSubtitleLabel=_trailingSubtitleLabel;
@property(retain) TLKVibrantLabel *trailingTitleLabel; // @synthesize trailingTitleLabel=_trailingTitleLabel;
@property(retain) TLKImageView *trailingImageView; // @synthesize trailingImageView=_trailingImageView;
@property(retain) TLKVibrantLabel *leadingSubtitleLabel; // @synthesize leadingSubtitleLabel=_leadingSubtitleLabel;
@property(retain) TLKVibrantLabel *leadingTitleLabel; // @synthesize leadingTitleLabel=_leadingTitleLabel;
@property(retain) TLKImageView *leadingImageView; // @synthesize leadingImageView=_leadingImageView;
@property(retain) NUIContainerGridView *gridView; // @synthesize gridView=_gridView;
@property(retain) TLKMultilineText *trailingSubtitle; // @synthesize trailingSubtitle=_trailingSubtitle;
@property(retain) TLKMultilineText *trailingTitle; // @synthesize trailingTitle=_trailingTitle;
@property(retain) TLKImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property(retain) TLKMultilineText *leadingSubtitle; // @synthesize leadingSubtitle=_leadingSubtitle;
@property(retain) TLKMultilineText *leadingTitle; // @synthesize leadingTitle=_leadingTitle;
@property(retain) TLKImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property(retain) TLKMultilineText *subtitle2; // @synthesize subtitle2=_subtitle2;
@property(retain) TLKMultilineText *subtitle1; // @synthesize subtitle1=_subtitle1;
@property(retain) TLKMultilineText *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)titleFont;
- (id)trailingImageInView;
- (id)trailingSubtitleText;
- (id)leadingSubtitleText;
- (id)subtitleLabelText;
- (id)titleLabelText;
- (id)leadingImageInView;
- (_Bool)secondRowIsHidden;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (long long)containerGridView:(id)arg1 verticalAlignmentForArrangedSubview:(id)arg2;
- (long long)containerGridView:(id)arg1 horizontalAlignmentForArrangedSubview:(id)arg2;
- (void)centerWithView:(id)arg1 forColumn:(unsigned long long)arg2;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)observedPropertiesChanged;
- (id)vibrantFootnoteLabel:(_Bool)arg1;
- (id)thirdRowOfViews;
- (id)secondRowOfViews;
- (id)firstRowOfViews;
- (id)grid;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)observableProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
