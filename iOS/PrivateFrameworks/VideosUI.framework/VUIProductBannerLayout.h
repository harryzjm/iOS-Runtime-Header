//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUIMediaTagsViewLayout, VUIProductUberBackgroundViewLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIProductBannerLayout : TVViewLayout
{
    long long _sizeClass;
    unsigned long long _contentType;
    TVImageLayout *_logoImageLayout;
    VUITextLayout *_logoTextLayout;
    TVImageLayout *_decorationImageLayout;
    VUITextLayout *_subTextLayout;
    VUITextLayout *_episodeInfoTextLayout;
    VUITextLayout *_descriptionTextLayout;
    VUITextLayout *_descriptionTitleTextLayout;
    VUIMediaTagsViewLayout *_tagsLayout;
    VUIMediaTagsViewLayout *_infoTagsLayout;
    VUITextLayout *_promoTextLayout;
    TVImageLayout *_coverArtImageLayout;
    double _maxCoverArtImageHeight;
    VUITextLayout *_disclaimerTextLayout;
    VUITextLayout *_availabilityTextLayout;
    TVImageLayout *_availabilityImageLayout;
    VUIProductUberBackgroundViewLayout *_uberBackgroundViewLayout;
}

+ (id)_coverArtImageShadow;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2 sizeClass:(long long)arg3 contentType:(unsigned long long)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) VUIProductUberBackgroundViewLayout *uberBackgroundViewLayout; // @synthesize uberBackgroundViewLayout=_uberBackgroundViewLayout;
@property(readonly, nonatomic) TVImageLayout *availabilityImageLayout; // @synthesize availabilityImageLayout=_availabilityImageLayout;
@property(readonly, nonatomic) VUITextLayout *availabilityTextLayout; // @synthesize availabilityTextLayout=_availabilityTextLayout;
@property(readonly, nonatomic) VUITextLayout *disclaimerTextLayout; // @synthesize disclaimerTextLayout=_disclaimerTextLayout;
@property(readonly, nonatomic) double maxCoverArtImageHeight; // @synthesize maxCoverArtImageHeight=_maxCoverArtImageHeight;
@property(retain, nonatomic) TVImageLayout *coverArtImageLayout; // @synthesize coverArtImageLayout=_coverArtImageLayout;
@property(readonly, nonatomic) VUITextLayout *promoTextLayout; // @synthesize promoTextLayout=_promoTextLayout;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *infoTagsLayout; // @synthesize infoTagsLayout=_infoTagsLayout;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *tagsLayout; // @synthesize tagsLayout=_tagsLayout;
@property(readonly, nonatomic) VUITextLayout *descriptionTitleTextLayout; // @synthesize descriptionTitleTextLayout=_descriptionTitleTextLayout;
@property(readonly, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property(readonly, nonatomic) VUITextLayout *episodeInfoTextLayout; // @synthesize episodeInfoTextLayout=_episodeInfoTextLayout;
@property(readonly, nonatomic) VUITextLayout *subTextLayout; // @synthesize subTextLayout=_subTextLayout;
@property(readonly, nonatomic) TVImageLayout *decorationImageLayout; // @synthesize decorationImageLayout=_decorationImageLayout;
@property(retain, nonatomic) VUITextLayout *logoTextLayout; // @synthesize logoTextLayout=_logoTextLayout;
@property(retain, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property(readonly, nonatomic) unsigned long long contentType;
- (void)_createLayoutsWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2;
- (void)updateWithSizeClass:(long long)arg1 contentSizeCategoryIsAccessibility:(_Bool)arg2;
- (id)initWithSizeClass:(long long)arg1 contentType:(unsigned long long)arg2;

@end
