//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MediaControls/MRUVisualStylingProviderObserver-Protocol.h>

@class MPArtworkCatalog, MRUShadowView, MRUVisualStylingProvider, MSVTimer, NSString, UIImage, UIImageView, UIPointerStyle;

@interface MRUArtworkView : UIView <MRUVisualStylingProviderObserver>
{
    _Bool _showPlaceholder;
    MPArtworkCatalog *_catalog;
    UIImage *_artworkImage;
    UIImage *_placeholderImage;
    UIImage *_iconImage;
    MRUVisualStylingProvider *_stylingProvider;
    long long _style;
    UIView *_placeholderBackground;
    UIImageView *_placeholderImageView;
    MRUShadowView *_artworkShadowView;
    UIImageView *_artworkImageView;
    MRUShadowView *_iconShadowView;
    UIImageView *_iconView;
    MSVTimer *_artworkTimer;
    long long _failedRetryCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long failedRetryCount; // @synthesize failedRetryCount=_failedRetryCount;
@property(retain, nonatomic) MSVTimer *artworkTimer; // @synthesize artworkTimer=_artworkTimer;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) MRUShadowView *iconShadowView; // @synthesize iconShadowView=_iconShadowView;
@property(retain, nonatomic) UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(retain, nonatomic) MRUShadowView *artworkShadowView; // @synthesize artworkShadowView=_artworkShadowView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) UIView *placeholderBackground; // @synthesize placeholderBackground=_placeholderBackground;
@property(nonatomic) _Bool showPlaceholder; // @synthesize showPlaceholder=_showPlaceholder;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(retain, nonatomic) MPArtworkCatalog *catalog; // @synthesize catalog=_catalog;
- (struct CGRect)artworkFrame;
- (_Bool)isSquare:(struct CGSize)arg1;
- (_Bool)isSquareArtwork;
- (_Bool)isDeviceIcon;
- (void)updatePlaceholderSymbolConfiguration;
- (void)updateStyle;
- (void)updateVisibility;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) UIPointerStyle *pointerStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
