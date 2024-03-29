//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVImageLayout, UIColor, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerLayout : NSObject
{
    _Bool _isPreModeBanner;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
    double _bannerMinHeight;
    double _maxTextWidth;
    double _subtitleBaseLine;
    VUITextLayout *_titleLayout;
    VUITextLayout *_subtitleLayout;
    TVImageLayout *_imageLayout;
    unsigned long long _bannerStyle;
    struct _VUICornerRadii _borderRadii;
    struct UIEdgeInsets _margin;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bannerStyle; // @synthesize bannerStyle=_bannerStyle;
@property(readonly, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property(readonly, nonatomic) VUITextLayout *subtitleLayout; // @synthesize subtitleLayout=_subtitleLayout;
@property(readonly, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(nonatomic) double subtitleBaseLine; // @synthesize subtitleBaseLine=_subtitleBaseLine;
@property(nonatomic) double maxTextWidth; // @synthesize maxTextWidth=_maxTextWidth;
@property(nonatomic) double bannerMinHeight; // @synthesize bannerMinHeight=_bannerMinHeight;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) struct UIEdgeInsets margin; // @synthesize margin=_margin;
@property(nonatomic) struct _VUICornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property(nonatomic) _Bool isPreModeBanner; // @synthesize isPreModeBanner=_isPreModeBanner;
- (unsigned long long)bannerStyleForSizeClass:(long long)arg1;

@end

