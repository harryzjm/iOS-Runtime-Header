//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage;

@interface TVImageDescription
{
    _Bool _configureForMetrics;
    _Bool _needsRoomBannerImageDecorator;
    _Bool _isInBackgroundOrBanner;
    _Bool _hasGradient;
    id _imageProxy;
    UIImage *_placeholderImage;
    long long _semanticContentAttribute;
    NSString *_accessibilityText;
    NSString *_siriData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *siriData; // @synthesize siriData=_siriData;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) _Bool hasGradient; // @synthesize hasGradient=_hasGradient;
@property(nonatomic) _Bool isInBackgroundOrBanner; // @synthesize isInBackgroundOrBanner=_isInBackgroundOrBanner;
@property(nonatomic) _Bool needsRoomBannerImageDecorator; // @synthesize needsRoomBannerImageDecorator=_needsRoomBannerImageDecorator;
@property(nonatomic) long long semanticContentAttribute; // @synthesize semanticContentAttribute=_semanticContentAttribute;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(nonatomic) _Bool configureForMetrics; // @synthesize configureForMetrics=_configureForMetrics;
@property(retain, nonatomic) id imageProxy; // @synthesize imageProxy=_imageProxy;
- (id)initWithProxy:(id)arg1 andPlaceHolderImage:(id)arg2;

@end
