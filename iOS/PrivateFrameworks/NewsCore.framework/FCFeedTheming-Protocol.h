//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSCopying-Protocol.h>
#import <NewsCore/NSObject-Protocol.h>

@class FCAssetHandle, FCColor, FCHeadlineTemplate, FCTagBanner, FCTextInfo, NSArray, NSString;

@protocol FCFeedTheming <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool allowCustomBottomStyle;
@property(readonly, nonatomic) FCHeadlineTemplate *defaultHeadlineTemplate;
@property(readonly, nonatomic) NSArray *loadableFonts;
@property(readonly, nonatomic) struct UIEdgeInsets nameImageMaskInsets;
@property(readonly, nonatomic) struct CGSize nameImageMaskSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageMaskAssetHandle;
@property(readonly, nonatomic) struct UIEdgeInsets nameImageForDarkBackgroundInsets;
@property(readonly, nonatomic) struct CGSize nameImageForDarkBackgroundSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageForDarkBackgroundAssetHandle;
@property(readonly, nonatomic) struct UIEdgeInsets nameImageInsets;
@property(readonly, nonatomic) struct CGSize nameImageSize;
@property(readonly, nonatomic) FCAssetHandle *nameImageCompactAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *nameImageAssetHandle;
@property(readonly, nonatomic) FCAssetHandle *logoImageAssetHandle;
@property(readonly, nonatomic) FCColor *groupTitleColor;
@property(readonly, nonatomic) FCColor *foregroundColor;
@property(readonly, nonatomic) FCColor *backgroundColor;
@property(readonly, copy, nonatomic) FCTextInfo *headlineBylineTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineExcerptTextInfo;
@property(readonly, copy, nonatomic) FCTextInfo *headlineTitleTextInfo;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) double bannerImageBaselineOffsetPercentage;
@property(readonly, nonatomic) double bannerImageScale;
@property(readonly, nonatomic) FCTagBanner *compactBannerImage;
@property(readonly, nonatomic) FCTagBanner *bannerImageForMask;
@property(readonly, nonatomic) FCTagBanner *bannerImageForThemeBackground;
@property(readonly, nonatomic) FCTagBanner *bannerImageForWhiteBackground;
@property(readonly, nonatomic) FCTagBanner *defaultBannerImage;
@property(readonly, nonatomic) _Bool isWhite;
@property(readonly, nonatomic) long long feedType;
@end
